import argparse
import random
from dataclasses import dataclass
from pathlib import Path


DEFAULT_VERTEX_COUNTS = (10, 50, 100)
DEFAULT_K_FACTORS = (2, 3)
DEFAULT_CASES_PER_GROUP = 10
DEFAULT_SEED = 42
TESTS_DIR = Path("tests")
TEST_PATTERN = "test_case_*.txt"


Edge = tuple[int, int]


@dataclass(frozen=True)
class TestCase:
    name: str
    n_vertices: int
    k_factor: int
    edges: list[Edge]


def normalized_edge(u: int, v: int) -> Edge:
    if u == v:
        raise ValueError("self-loops are not valid in these test graphs")
    return (u, v) if u < v else (v, u)


def add_edge(edges: set[Edge], u: int, v: int) -> None:
    edges.add(normalized_edge(u, v))


def add_sparse_noise(
    edges: set[Edge],
    n_vertices: int,
    rng: random.Random,
    extra_edges: int,
) -> None:
    max_edges = n_vertices * (n_vertices - 1) // 2
    target_size = min(len(edges) + extra_edges, max_edges)

    while len(edges) < target_size:
        u = rng.randrange(n_vertices)
        v = rng.randrange(n_vertices)
        if u != v:
            add_edge(edges, u, v)


def generate_2_factor_graph(
    n_vertices: int,
    rng: random.Random,
    extra_edges: int,
) -> list[Edge]:
    """Generate a sparse graph guaranteed to contain a 2-factor."""
    if n_vertices < 3:
        raise ValueError("2-factor test graphs need at least 3 vertices")

    vertices = list(range(n_vertices))
    rng.shuffle(vertices)

    edges: set[Edge] = set()
    for i, u in enumerate(vertices):
        add_edge(edges, u, vertices[(i + 1) % n_vertices])

    add_sparse_noise(edges, n_vertices, rng, extra_edges)
    return sorted(edges)


def generate_3_factor_graph(
    n_vertices: int,
    rng: random.Random,
    extra_edges: int,
) -> list[Edge]:
    """Generate a sparse graph guaranteed to contain a 3-factor."""
    if n_vertices < 4 or n_vertices % 2 != 0:
        raise ValueError("3-factor test graphs need an even number of vertices >= 4")

    vertices = list(range(n_vertices))
    rng.shuffle(vertices)

    edges: set[Edge] = set()
    for i, u in enumerate(vertices):
        add_edge(edges, u, vertices[(i + 1) % n_vertices])

    half = n_vertices // 2
    for i in range(half):
        add_edge(edges, vertices[i], vertices[i + half])

    add_sparse_noise(edges, n_vertices, rng, extra_edges)
    return sorted(edges)


def generate_test_case(
    n_vertices: int,
    k_factor: int,
    case_number: int,
    rng: random.Random,
) -> TestCase:
    # Keep graphs sparse while still adding enough non-factor edges to exercise
    # the matching construction beyond exact cycles/cubic graphs.
    extra_edges = max(1, n_vertices // 5)

    if k_factor == 2:
        edges = generate_2_factor_graph(n_vertices, rng, extra_edges)
    elif k_factor == 3:
        edges = generate_3_factor_graph(n_vertices, rng, extra_edges)
    else:
        raise ValueError(f"unsupported k-factor: {k_factor}")

    name = f"test_case_{case_number:03d}_k{k_factor}_n{n_vertices}.txt"
    return TestCase(name, n_vertices, k_factor, edges)


def save_test_case(test_case: TestCase, tests_dir: Path) -> None:
    tests_dir.mkdir(parents=True, exist_ok=True)
    filepath = tests_dir / test_case.name

    with filepath.open("w", encoding="utf-8") as file:
        file.write(f"{test_case.n_vertices}\n")
        for u, v in test_case.edges:
            file.write(f"{u} {v}\n")


def clean_generated_tests(tests_dir: Path) -> int:
    if not tests_dir.exists():
        return 0

    removed = 0
    for filepath in tests_dir.glob(TEST_PATTERN):
        filepath.unlink()
        removed += 1
    return removed


def parse_vertex_counts(raw_counts: str) -> tuple[int, ...]:
    counts = tuple(int(value.strip()) for value in raw_counts.split(",") if value.strip())
    if not counts:
        raise ValueError("at least one vertex count is required")
    return counts


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Generate sparse k-factor benchmark tests for main.cpp."
    )
    parser.add_argument(
        "--cases-per-group",
        type=int,
        default=DEFAULT_CASES_PER_GROUP,
        help="number of graphs for each k/n group",
    )
    parser.add_argument(
        "--vertices",
        default=",".join(str(n) for n in DEFAULT_VERTEX_COUNTS),
        help="comma-separated vertex counts to generate",
    )
    parser.add_argument(
        "--seed",
        type=int,
        default=DEFAULT_SEED,
        help="random seed for reproducible test files",
    )
    parser.add_argument(
        "--keep-existing",
        action="store_true",
        help="do not delete existing tests/test_case_*.txt files before generating",
    )
    return parser.parse_args()


def main() -> None:
    args = parse_args()
    vertex_counts = parse_vertex_counts(args.vertices)

    if args.cases_per_group <= 0:
        raise ValueError("--cases-per-group must be positive")

    rng = random.Random(args.seed)

    removed = 0
    if not args.keep_existing:
        removed = clean_generated_tests(TESTS_DIR)

    generated: list[TestCase] = []
    case_number = 1
    for n_vertices in vertex_counts:
        for k_factor in DEFAULT_K_FACTORS:
            for _ in range(args.cases_per_group):
                test_case = generate_test_case(n_vertices, k_factor, case_number, rng)
                save_test_case(test_case, TESTS_DIR)
                generated.append(test_case)
                case_number += 1

    print("Generated sparse k-factor benchmark tests")
    print(f"  Directory: {TESTS_DIR}")
    print(f"  Removed old generated tests: {removed}")
    print(f"  Seed: {args.seed}")
    print(f"  Cases per k/n group: {args.cases_per_group}")
    print(f"  Vertex counts: {', '.join(str(n) for n in vertex_counts)}")
    print(f"  Total generated: {len(generated)}")

    for k_factor in DEFAULT_K_FACTORS:
        for n_vertices in vertex_counts:
            group = [
                test_case
                for test_case in generated
                if test_case.k_factor == k_factor and test_case.n_vertices == n_vertices
            ]
            edge_counts = [len(test_case.edges) for test_case in group]
            print(
                f"  k={k_factor}, n={n_vertices}: "
                f"{len(group)} files, edges {min(edge_counts)}-{max(edge_counts)}"
            )


if __name__ == "__main__":
    main()
