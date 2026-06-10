import random
import os


def generate_cycle_graph(n_vertices: int) -> list:
    """Generate a cycle graph (2-regular) with n_vertices."""
    edges = []
    for i in range(n_vertices):
        u = i
        v = (i + 1) % n_vertices
        edges.append((u, v))
    return edges


def generate_3_regular_graph(n_vertices: int) -> list:
    """Generate a 3-regular graph (sparse, all vertices have degree 3)."""
    if n_vertices < 4 or n_vertices % 2 != 0:
        # For 3-regular, we need even number of vertices >= 4
        n_vertices = ((n_vertices + 1) // 2) * 2
        if n_vertices < 4:
            n_vertices = 4

    edges = []
    degree = [0] * n_vertices

    # Create a cycle first (gives degree 2 to all)
    for i in range(n_vertices):
        u = i
        v = (i + 1) % n_vertices
        edges.append((u, v))
        degree[u] += 1
        degree[v] += 1

    # Add one more edge per vertex to make it 3-regular
    # Connect vertex i to vertex (i + n//2) % n_vertices
    for i in range(n_vertices // 2):
        u = i
        v = (i + n_vertices // 2) % n_vertices
        if u != v and (u, v) not in edges and (v, u) not in edges:
            edges.append((u, v))
            degree[u] += 1
            degree[v] += 1

    return edges


def generate_mixed_graph(n_vertices: int, density: float = 0.3) -> list:
    """Generate a random sparse graph with controlled density."""
    edges = set()
    max_edges = int(n_vertices * density)

    while len(edges) < max_edges:
        u = random.randint(0, n_vertices - 1)
        v = random.randint(0, n_vertices - 1)

        if u != v:
            edge = tuple(sorted([u, v]))
            edges.add(edge)

    return list(edges)


def generate_test_case(n_vertices: int, k_factor_type: int) -> list:
    """Generate a test case that has a k-factor."""
    if k_factor_type == 2:
        return generate_cycle_graph(n_vertices)
    elif k_factor_type == 3:
        return generate_3_regular_graph(n_vertices)
    else:
        return generate_mixed_graph(n_vertices)


def save_test_case(filename: str, n_vertices: int, edges: list):
    """Save a test case to the tests folder."""
    tests_dir = "./tests"

    # Create tests directory if it doesn't exist
    if not os.path.exists(tests_dir):
        os.makedirs(tests_dir)

    filepath = os.path.join(tests_dir, filename)
    with open(filepath, 'w') as f:
        f.write(f"{n_vertices}\n")
        for u, v in edges:
            f.write(f"{u} {v}\n")


def main():
    print("Test Case Generator for k-Factor Algorithm")
    print("=" * 50)

    num_test_cases: int = int(input("Enter the number of test cases to generate: "))

    test_configs = []
    for i in range(num_test_cases):
        print(f"\nTest case {i + 1}:")
        n_vertices: int = int(input(f"  Enter number of vertices: "))
        k_factor: int = int(input(f"  Enter k-factor to test (2 or 3): "))

        if k_factor not in [2, 3]:
            print("  Invalid k-factor. Using 2.")
            k_factor = 2

        test_configs.append((n_vertices, k_factor))

    # Generate and save test cases
    for idx, (n_vertices, k_factor) in enumerate(test_configs):
        edges = generate_test_case(n_vertices, k_factor)
        filename = f"test_case_{idx + 1}_k{k_factor}_n{n_vertices}.txt"
        save_test_case(filename, n_vertices, edges)
        print(f"\nGenerated: ./tests/{filename}")
        print(f"  Vertices: {n_vertices}, Edges: {len(edges)}, k-factor: {k_factor}")


if __name__ == "__main__":
    main()
