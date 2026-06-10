# K-Factor Algorithm - Test Report

**Data/Hora:** 2026-06-10 12:23:02

## Summary

- **Total Tests:** 2
- **Passed:** 1
- **Failed/No Solution:** 1
- **Success Rate:** 50.0%

---

## Test 1: test_case_1_k2_n16.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 16

**K-Factor:** 2

**Edges:**

```
0 1
1 2
2 3
3 4
4 5
5 6
6 7
7 8
8 9
9 10
10 11
11 12
12 13
13 14
14 15
15 0
```

### Output

**Reason:** K-fator encontrado com sucesso

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 16 vértices, 16 arestas, menor grau: 2
Graus dos vértices: [2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2]
Adjacências:
Vértice 0: [1, 15]
Vértice 1: [0, 2]
Vértice 2: [1, 3]
Vértice 3: [2, 4]
Vértice 4: [3, 5]
Vértice 5: [4, 6]
Vértice 6: [5, 7]
Vértice 7: [6, 8]
Vértice 8: [7, 9]
Vértice 9: [8, 10]
Vértice 10: [9, 11]
Vértice 11: [10, 12]
Vértice 12: [11, 13]
Vértice 13: [12, 14]
Vértice 14: [13, 15]
Vértice 15: [14, 0]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 16 vértices, 16 arestas, menor grau: 2
Arestas do fator:
0 - 1
0 - 15
1 - 2
2 - 3
3 - 4
4 - 5
5 - 6
6 - 7
7 - 8
8 - 9
9 - 10
10 - 11
11 - 12
12 - 13
13 - 14
14 - 15
```

---

## Test 2: test_case_1_k3_n10.txt

**Status:** ⚠️ NÃO EXISTE

### Input

**Number of Vertices:** 10

**K-Factor:** 3

**Edges:**

```
0 1
1 2
2 3
3 4
4 5
5 6
6 7
7 8
8 9
9 0
0 5
1 6
2 7
3 8
4 9
```

### Output

**Reason:** Não existe 3-fator no grafo.

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 10 vértices, 15 arestas, menor grau: 3
Graus dos vértices: [3, 3, 3, 3, 3, 3, 3, 3, 3, 3]
Adjacências:
Vértice 0: [1, 9, 5]
Vértice 1: [0, 2, 6]
Vértice 2: [1, 3, 7]
Vértice 3: [2, 4, 8]
Vértice 4: [3, 5, 9]
Vértice 5: [4, 6, 0]
Vértice 6: [5, 7, 1]
Vértice 7: [6, 8, 2]
Vértice 8: [7, 9, 3]
Vértice 9: [8, 0, 4]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
Não existe 3-fator no grafo.
Emparelhamento encontrado nao e perfeito.
```

---

