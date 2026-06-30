# K-Factor Algorithm - Test Report

**Data/Hora:** 2026-06-29 23:20:30

## Summary

- **Total Tests:** 60
- **Passed:** 60
- **Failed/No Solution:** 0
- **Success Rate:** 100.0%

---

## Test 1: test_case_001_k2_n10.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 10

**K-Factor:** 2

**Execution Time:** 4.000 ms

**Edges:**

```
0 1
0 4
1 3
1 7
2 3
2 8
3 7
3 8
4 9
5 6
5 8
6 9
```

### Output

**Reason:** K-fator validado: 10 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 10 vértices, 12 arestas, menor grau: 2
Graus dos vértices: [2, 3, 2, 4, 2, 2, 2, 2, 3, 2]
Adjacências:
Vértice 0: [1, 4]
Vértice 1: [0, 3, 7]
Vértice 2: [3, 8]
Vértice 3: [1, 2, 7, 8]
Vértice 4: [0, 9]
Vértice 5: [6, 8]
Vértice 6: [5, 9]
Vértice 7: [1, 3]
Vértice 8: [2, 3, 5]
Vértice 9: [4, 6]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 10 vértices, 10 arestas, menor grau: 2
Arestas do fator:
0 - 1
0 - 4
1 - 7
2 - 3
2 - 8
3 - 7
4 - 9
5 - 6
5 - 8
6 - 9
```

---

## Test 2: test_case_002_k2_n10.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 10

**K-Factor:** 2

**Execution Time:** 4.000 ms

**Edges:**

```
0 2
0 3
0 9
1 2
1 8
2 9
3 5
4 6
4 7
4 9
5 6
7 8
```

### Output

**Reason:** K-fator validado: 10 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 10 vértices, 12 arestas, menor grau: 2
Graus dos vértices: [3, 2, 3, 2, 3, 2, 2, 2, 2, 3]
Adjacências:
Vértice 0: [2, 3, 9]
Vértice 1: [2, 8]
Vértice 2: [0, 1, 9]
Vértice 3: [0, 5]
Vértice 4: [6, 7, 9]
Vértice 5: [3, 6]
Vértice 6: [4, 5]
Vértice 7: [4, 8]
Vértice 8: [1, 7]
Vértice 9: [0, 2, 4]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 10 vértices, 10 arestas, menor grau: 2
Arestas do fator:
0 - 3
0 - 9
1 - 2
1 - 8
2 - 9
3 - 5
4 - 6
4 - 7
5 - 6
7 - 8
```

---

## Test 3: test_case_003_k2_n10.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 10

**K-Factor:** 2

**Execution Time:** 4.000 ms

**Edges:**

```
0 2
0 3
1 4
1 5
1 9
2 9
3 8
4 5
5 6
5 9
6 7
7 8
```

### Output

**Reason:** K-fator validado: 10 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 10 vértices, 12 arestas, menor grau: 2
Graus dos vértices: [2, 3, 2, 2, 2, 4, 2, 2, 2, 3]
Adjacências:
Vértice 0: [2, 3]
Vértice 1: [4, 5, 9]
Vértice 2: [0, 9]
Vértice 3: [0, 8]
Vértice 4: [1, 5]
Vértice 5: [1, 4, 6, 9]
Vértice 6: [5, 7]
Vértice 7: [6, 8]
Vértice 8: [3, 7]
Vértice 9: [1, 2, 5]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 10 vértices, 10 arestas, menor grau: 2
Arestas do fator:
0 - 2
0 - 3
1 - 4
1 - 9
2 - 9
3 - 8
4 - 5
5 - 6
6 - 7
7 - 8
```

---

## Test 4: test_case_004_k2_n10.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 10

**K-Factor:** 2

**Execution Time:** 4.000 ms

**Edges:**

```
0 4
0 7
1 2
1 6
2 5
3 5
3 8
3 9
4 6
5 9
7 9
8 9
```

### Output

**Reason:** K-fator validado: 10 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 10 vértices, 12 arestas, menor grau: 2
Graus dos vértices: [2, 2, 2, 3, 2, 3, 2, 2, 2, 4]
Adjacências:
Vértice 0: [4, 7]
Vértice 1: [2, 6]
Vértice 2: [1, 5]
Vértice 3: [5, 8, 9]
Vértice 4: [0, 6]
Vértice 5: [2, 3, 9]
Vértice 6: [1, 4]
Vértice 7: [0, 9]
Vértice 8: [3, 9]
Vértice 9: [3, 5, 7, 8]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 10 vértices, 10 arestas, menor grau: 2
Arestas do fator:
0 - 4
0 - 7
1 - 2
1 - 6
2 - 5
3 - 5
3 - 8
4 - 6
7 - 9
8 - 9
```

---

## Test 5: test_case_005_k2_n10.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 10

**K-Factor:** 2

**Execution Time:** 4.000 ms

**Edges:**

```
0 1
0 3
1 5
2 5
2 6
2 8
3 4
3 6
4 7
4 9
5 7
8 9
```

### Output

**Reason:** K-fator validado: 10 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 10 vértices, 12 arestas, menor grau: 2
Graus dos vértices: [2, 2, 3, 3, 3, 3, 2, 2, 2, 2]
Adjacências:
Vértice 0: [1, 3]
Vértice 1: [0, 5]
Vértice 2: [5, 6, 8]
Vértice 3: [0, 4, 6]
Vértice 4: [3, 7, 9]
Vértice 5: [1, 2, 7]
Vértice 6: [2, 3]
Vértice 7: [4, 5]
Vértice 8: [2, 9]
Vértice 9: [4, 8]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 10 vértices, 10 arestas, menor grau: 2
Arestas do fator:
0 - 1
0 - 3
1 - 5
2 - 6
2 - 8
3 - 6
4 - 7
4 - 9
5 - 7
8 - 9
```

---

## Test 6: test_case_006_k2_n10.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 10

**K-Factor:** 2

**Execution Time:** 4.000 ms

**Edges:**

```
0 3
0 4
0 5
0 6
1 2
1 6
2 3
3 9
4 8
5 7
5 8
7 9
```

### Output

**Reason:** K-fator validado: 10 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 10 vértices, 12 arestas, menor grau: 2
Graus dos vértices: [4, 2, 2, 3, 2, 3, 2, 2, 2, 2]
Adjacências:
Vértice 0: [3, 4, 5, 6]
Vértice 1: [2, 6]
Vértice 2: [1, 3]
Vértice 3: [0, 2, 9]
Vértice 4: [0, 8]
Vértice 5: [0, 7, 8]
Vértice 6: [0, 1]
Vértice 7: [5, 9]
Vértice 8: [4, 5]
Vértice 9: [3, 7]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 10 vértices, 10 arestas, menor grau: 2
Arestas do fator:
0 - 4
0 - 6
1 - 2
1 - 6
2 - 3
3 - 9
4 - 8
5 - 7
5 - 8
7 - 9
```

---

## Test 7: test_case_007_k2_n10.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 10

**K-Factor:** 2

**Execution Time:** 4.000 ms

**Edges:**

```
0 1
0 4
1 7
2 4
2 7
2 8
3 5
3 9
4 6
5 6
6 7
8 9
```

### Output

**Reason:** K-fator validado: 10 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 10 vértices, 12 arestas, menor grau: 2
Graus dos vértices: [2, 2, 3, 2, 3, 2, 3, 3, 2, 2]
Adjacências:
Vértice 0: [1, 4]
Vértice 1: [0, 7]
Vértice 2: [4, 7, 8]
Vértice 3: [5, 9]
Vértice 4: [0, 2, 6]
Vértice 5: [3, 6]
Vértice 6: [4, 5, 7]
Vértice 7: [1, 2, 6]
Vértice 8: [2, 9]
Vértice 9: [3, 8]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 10 vértices, 10 arestas, menor grau: 2
Arestas do fator:
0 - 1
0 - 4
1 - 7
2 - 7
2 - 8
3 - 5
3 - 9
4 - 6
5 - 6
8 - 9
```

---

## Test 8: test_case_008_k2_n10.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 10

**K-Factor:** 2

**Execution Time:** 4.000 ms

**Edges:**

```
0 1
0 9
1 6
1 7
2 3
2 8
2 9
3 4
4 5
5 7
6 8
7 8
```

### Output

**Reason:** K-fator validado: 10 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 10 vértices, 12 arestas, menor grau: 2
Graus dos vértices: [2, 3, 3, 2, 2, 2, 2, 3, 3, 2]
Adjacências:
Vértice 0: [1, 9]
Vértice 1: [0, 6, 7]
Vértice 2: [3, 8, 9]
Vértice 3: [2, 4]
Vértice 4: [3, 5]
Vértice 5: [4, 7]
Vértice 6: [1, 8]
Vértice 7: [1, 5, 8]
Vértice 8: [2, 6, 7]
Vértice 9: [0, 2]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 10 vértices, 10 arestas, menor grau: 2
Arestas do fator:
0 - 1
0 - 9
1 - 6
2 - 3
2 - 9
3 - 4
4 - 5
5 - 7
6 - 8
7 - 8
```

---

## Test 9: test_case_009_k2_n10.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 10

**K-Factor:** 2

**Execution Time:** 4.000 ms

**Edges:**

```
0 1
0 4
1 2
2 5
3 8
3 9
4 7
4 8
5 8
6 7
6 9
7 9
```

### Output

**Reason:** K-fator validado: 10 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 10 vértices, 12 arestas, menor grau: 2
Graus dos vértices: [2, 2, 2, 2, 3, 2, 2, 3, 3, 3]
Adjacências:
Vértice 0: [1, 4]
Vértice 1: [0, 2]
Vértice 2: [1, 5]
Vértice 3: [8, 9]
Vértice 4: [0, 7, 8]
Vértice 5: [2, 8]
Vértice 6: [7, 9]
Vértice 7: [4, 6, 9]
Vértice 8: [3, 4, 5]
Vértice 9: [3, 6, 7]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 10 vértices, 10 arestas, menor grau: 2
Arestas do fator:
0 - 1
0 - 4
1 - 2
2 - 5
3 - 8
3 - 9
4 - 7
5 - 8
6 - 7
6 - 9
```

---

## Test 10: test_case_010_k2_n10.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 10

**K-Factor:** 2

**Execution Time:** 4.000 ms

**Edges:**

```
0 1
0 7
0 8
1 5
2 4
2 6
3 7
3 8
4 5
4 8
6 9
7 9
```

### Output

**Reason:** K-fator validado: 10 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 10 vértices, 12 arestas, menor grau: 2
Graus dos vértices: [3, 2, 2, 2, 3, 2, 2, 3, 3, 2]
Adjacências:
Vértice 0: [1, 7, 8]
Vértice 1: [0, 5]
Vértice 2: [4, 6]
Vértice 3: [7, 8]
Vértice 4: [2, 5, 8]
Vértice 5: [1, 4]
Vértice 6: [2, 9]
Vértice 7: [0, 3, 9]
Vértice 8: [0, 3, 4]
Vértice 9: [6, 7]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 10 vértices, 10 arestas, menor grau: 2
Arestas do fator:
0 - 1
0 - 8
1 - 5
2 - 4
2 - 6
3 - 7
3 - 8
4 - 5
6 - 9
7 - 9
```

---

## Test 11: test_case_011_k3_n10.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 10

**K-Factor:** 3

**Execution Time:** 4.000 ms

**Edges:**

```
0 1
0 3
0 7
0 8
1 5
1 6
1 8
2 4
2 8
2 9
3 4
3 6
4 5
5 6
5 9
7 8
7 9
```

### Output

**Reason:** K-fator validado: 15 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 10 vértices, 17 arestas, menor grau: 3
Graus dos vértices: [4, 4, 3, 3, 3, 4, 3, 3, 4, 3]
Adjacências:
Vértice 0: [1, 3, 7, 8]
Vértice 1: [0, 5, 6, 8]
Vértice 2: [4, 8, 9]
Vértice 3: [0, 4, 6]
Vértice 4: [2, 3, 5]
Vértice 5: [1, 4, 6, 9]
Vértice 6: [1, 3, 5]
Vértice 7: [0, 8, 9]
Vértice 8: [0, 1, 2, 7]
Vértice 9: [2, 5, 7]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 10 vértices, 15 arestas, menor grau: 3
Arestas do fator:
0 - 1
0 - 3
0 - 7
1 - 6
1 - 8
2 - 4
2 - 8
2 - 9
3 - 4
3 - 6
4 - 5
5 - 6
5 - 9
7 - 8
7 - 9
```

---

## Test 12: test_case_012_k3_n10.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 10

**K-Factor:** 3

**Execution Time:** 4.000 ms

**Edges:**

```
0 1
0 2
0 3
1 6
1 8
1 9
2 5
2 6
3 4
3 5
4 7
4 8
5 7
6 8
7 8
7 9
8 9
```

### Output

**Reason:** K-fator validado: 15 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 10 vértices, 17 arestas, menor grau: 3
Graus dos vértices: [3, 4, 3, 3, 3, 3, 3, 4, 5, 3]
Adjacências:
Vértice 0: [1, 2, 3]
Vértice 1: [0, 6, 8, 9]
Vértice 2: [0, 5, 6]
Vértice 3: [0, 4, 5]
Vértice 4: [3, 7, 8]
Vértice 5: [2, 3, 7]
Vértice 6: [1, 2, 8]
Vértice 7: [4, 5, 8, 9]
Vértice 8: [1, 4, 6, 7, 9]
Vértice 9: [1, 7, 8]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 10 vértices, 15 arestas, menor grau: 3
Arestas do fator:
0 - 1
0 - 2
0 - 3
1 - 6
1 - 9
2 - 5
2 - 6
3 - 4
3 - 5
4 - 7
4 - 8
5 - 7
6 - 8
7 - 9
8 - 9
```

---

## Test 13: test_case_013_k3_n10.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 10

**K-Factor:** 3

**Execution Time:** 4.000 ms

**Edges:**

```
0 2
0 3
0 8
1 3
1 5
1 6
1 7
1 8
2 4
2 7
3 5
4 6
4 9
5 6
5 9
7 8
7 9
```

### Output

**Reason:** K-fator validado: 15 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 10 vértices, 17 arestas, menor grau: 3
Graus dos vértices: [3, 5, 3, 3, 3, 4, 3, 4, 3, 3]
Adjacências:
Vértice 0: [2, 3, 8]
Vértice 1: [3, 5, 6, 7, 8]
Vértice 2: [0, 4, 7]
Vértice 3: [0, 1, 5]
Vértice 4: [2, 6, 9]
Vértice 5: [1, 3, 6, 9]
Vértice 6: [1, 4, 5]
Vértice 7: [1, 2, 8, 9]
Vértice 8: [0, 1, 7]
Vértice 9: [4, 5, 7]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 10 vértices, 15 arestas, menor grau: 3
Arestas do fator:
0 - 2
0 - 3
0 - 8
1 - 3
1 - 6
1 - 8
2 - 4
2 - 7
3 - 5
4 - 6
4 - 9
5 - 6
5 - 9
7 - 8
7 - 9
```

---

## Test 14: test_case_014_k3_n10.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 10

**K-Factor:** 3

**Execution Time:** 4.000 ms

**Edges:**

```
0 5
0 8
0 9
1 3
1 4
1 5
1 8
1 9
2 3
2 6
2 7
3 4
3 8
4 7
5 7
6 8
6 9
```

### Output

**Reason:** K-fator validado: 15 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 10 vértices, 17 arestas, menor grau: 3
Graus dos vértices: [3, 5, 3, 4, 3, 3, 3, 3, 4, 3]
Adjacências:
Vértice 0: [5, 8, 9]
Vértice 1: [3, 4, 5, 8, 9]
Vértice 2: [3, 6, 7]
Vértice 3: [1, 2, 4, 8]
Vértice 4: [1, 3, 7]
Vértice 5: [0, 1, 7]
Vértice 6: [2, 8, 9]
Vértice 7: [2, 4, 5]
Vértice 8: [0, 1, 3, 6]
Vértice 9: [0, 1, 6]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 10 vértices, 15 arestas, menor grau: 3
Arestas do fator:
0 - 5
0 - 8
0 - 9
1 - 4
1 - 5
1 - 9
2 - 3
2 - 6
2 - 7
3 - 4
3 - 8
4 - 7
5 - 7
6 - 8
6 - 9
```

---

## Test 15: test_case_015_k3_n10.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 10

**K-Factor:** 3

**Execution Time:** 4.000 ms

**Edges:**

```
0 1
0 5
0 7
0 9
1 5
1 7
1 8
2 3
2 5
2 8
3 4
3 6
4 7
4 9
5 6
6 8
6 9
```

### Output

**Reason:** K-fator validado: 15 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 10 vértices, 17 arestas, menor grau: 3
Graus dos vértices: [4, 4, 3, 3, 3, 4, 4, 3, 3, 3]
Adjacências:
Vértice 0: [1, 5, 7, 9]
Vértice 1: [0, 5, 7, 8]
Vértice 2: [3, 5, 8]
Vértice 3: [2, 4, 6]
Vértice 4: [3, 7, 9]
Vértice 5: [0, 1, 2, 6]
Vértice 6: [3, 5, 8, 9]
Vértice 7: [0, 1, 4]
Vértice 8: [1, 2, 6]
Vértice 9: [0, 4, 6]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 10 vértices, 15 arestas, menor grau: 3
Arestas do fator:
0 - 5
0 - 7
0 - 9
1 - 5
1 - 7
1 - 8
2 - 3
2 - 5
2 - 8
3 - 4
3 - 6
4 - 7
4 - 9
6 - 8
6 - 9
```

---

## Test 16: test_case_016_k3_n10.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 10

**K-Factor:** 3

**Execution Time:** 4.000 ms

**Edges:**

```
0 1
0 3
0 4
1 5
1 7
1 8
2 4
2 6
2 9
3 5
3 7
3 8
4 7
5 6
6 8
7 9
8 9
```

### Output

**Reason:** K-fator validado: 15 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 10 vértices, 17 arestas, menor grau: 3
Graus dos vértices: [3, 4, 3, 4, 3, 3, 3, 4, 4, 3]
Adjacências:
Vértice 0: [1, 3, 4]
Vértice 1: [0, 5, 7, 8]
Vértice 2: [4, 6, 9]
Vértice 3: [0, 5, 7, 8]
Vértice 4: [0, 2, 7]
Vértice 5: [1, 3, 6]
Vértice 6: [2, 5, 8]
Vértice 7: [1, 3, 4, 9]
Vértice 8: [1, 3, 6, 9]
Vértice 9: [2, 7, 8]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 10 vértices, 15 arestas, menor grau: 3
Arestas do fator:
0 - 1
0 - 3
0 - 4
1 - 5
1 - 7
2 - 4
2 - 6
2 - 9
3 - 5
3 - 8
4 - 7
5 - 6
6 - 8
7 - 9
8 - 9
```

---

## Test 17: test_case_017_k3_n10.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 10

**K-Factor:** 3

**Execution Time:** 4.000 ms

**Edges:**

```
0 2
0 5
0 6
0 8
1 5
1 6
1 7
2 4
2 6
2 7
3 4
3 5
3 6
3 8
4 9
7 9
8 9
```

### Output

**Reason:** K-fator validado: 15 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 10 vértices, 17 arestas, menor grau: 3
Graus dos vértices: [4, 3, 4, 4, 3, 3, 4, 3, 3, 3]
Adjacências:
Vértice 0: [2, 5, 6, 8]
Vértice 1: [5, 6, 7]
Vértice 2: [0, 4, 6, 7]
Vértice 3: [4, 5, 6, 8]
Vértice 4: [2, 3, 9]
Vértice 5: [0, 1, 3]
Vértice 6: [0, 1, 2, 3]
Vértice 7: [1, 2, 9]
Vértice 8: [0, 3, 9]
Vértice 9: [4, 7, 8]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 10 vértices, 15 arestas, menor grau: 3
Arestas do fator:
0 - 5
0 - 6
0 - 8
1 - 5
1 - 6
1 - 7
2 - 4
2 - 6
2 - 7
3 - 4
3 - 5
3 - 8
4 - 9
7 - 9
8 - 9
```

---

## Test 18: test_case_018_k3_n10.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 10

**K-Factor:** 3

**Execution Time:** 4.000 ms

**Edges:**

```
0 5
0 6
0 8
0 9
1 2
1 4
1 8
2 3
2 9
3 4
3 7
3 8
4 5
4 9
5 7
6 7
6 8
```

### Output

**Reason:** K-fator validado: 15 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 10 vértices, 17 arestas, menor grau: 3
Graus dos vértices: [4, 3, 3, 4, 4, 3, 3, 3, 4, 3]
Adjacências:
Vértice 0: [5, 6, 8, 9]
Vértice 1: [2, 4, 8]
Vértice 2: [1, 3, 9]
Vértice 3: [2, 4, 7, 8]
Vértice 4: [1, 3, 5, 9]
Vértice 5: [0, 4, 7]
Vértice 6: [0, 7, 8]
Vértice 7: [3, 5, 6]
Vértice 8: [0, 1, 3, 6]
Vértice 9: [0, 2, 4]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 10 vértices, 15 arestas, menor grau: 3
Arestas do fator:
0 - 5
0 - 6
0 - 9
1 - 2
1 - 4
1 - 8
2 - 3
2 - 9
3 - 7
3 - 8
4 - 5
4 - 9
5 - 7
6 - 7
6 - 8
```

---

## Test 19: test_case_019_k3_n10.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 10

**K-Factor:** 3

**Execution Time:** 4.000 ms

**Edges:**

```
0 1
0 5
0 8
1 2
1 6
1 7
1 9
2 4
2 7
2 9
3 4
3 6
3 9
4 8
5 6
5 9
7 8
```

### Output

**Reason:** K-fator validado: 15 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 10 vértices, 17 arestas, menor grau: 3
Graus dos vértices: [3, 5, 4, 3, 3, 3, 3, 3, 3, 4]
Adjacências:
Vértice 0: [1, 5, 8]
Vértice 1: [0, 2, 6, 7, 9]
Vértice 2: [1, 4, 7, 9]
Vértice 3: [4, 6, 9]
Vértice 4: [2, 3, 8]
Vértice 5: [0, 6, 9]
Vértice 6: [1, 3, 5]
Vértice 7: [1, 2, 8]
Vértice 8: [0, 4, 7]
Vértice 9: [1, 2, 3, 5]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 10 vértices, 15 arestas, menor grau: 3
Arestas do fator:
0 - 1
0 - 5
0 - 8
1 - 6
1 - 7
2 - 4
2 - 7
2 - 9
3 - 4
3 - 6
3 - 9
4 - 8
5 - 6
5 - 9
7 - 8
```

---

## Test 20: test_case_020_k3_n10.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 10

**K-Factor:** 3

**Execution Time:** 4.000 ms

**Edges:**

```
0 2
0 6
0 8
1 2
1 4
1 6
2 9
3 5
3 6
3 8
4 7
4 9
5 7
5 9
6 9
7 8
8 9
```

### Output

**Reason:** K-fator validado: 15 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 10 vértices, 17 arestas, menor grau: 3
Graus dos vértices: [3, 3, 3, 3, 3, 3, 4, 3, 4, 5]
Adjacências:
Vértice 0: [2, 6, 8]
Vértice 1: [2, 4, 6]
Vértice 2: [0, 1, 9]
Vértice 3: [5, 6, 8]
Vértice 4: [1, 7, 9]
Vértice 5: [3, 7, 9]
Vértice 6: [0, 1, 3, 9]
Vértice 7: [4, 5, 8]
Vértice 8: [0, 3, 7, 9]
Vértice 9: [2, 4, 5, 6, 8]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 10 vértices, 15 arestas, menor grau: 3
Arestas do fator:
0 - 2
0 - 6
0 - 8
1 - 2
1 - 4
1 - 6
2 - 9
3 - 5
3 - 6
3 - 8
4 - 7
4 - 9
5 - 7
5 - 9
7 - 8
```

---

## Test 21: test_case_021_k2_n50.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 50

**K-Factor:** 2

**Execution Time:** 10.000 ms

**Edges:**

```
0 2
0 4
0 38
1 24
1 28
2 7
2 11
3 16
3 21
3 39
4 44
5 9
5 14
5 40
6 36
6 38
7 27
8 19
8 25
8 40
9 27
10 16
10 33
10 41
11 32
12 18
12 31
13 16
13 42
14 17
15 48
15 49
16 20
17 23
17 27
18 41
19 29
20 43
21 26
21 49
22 37
22 43
23 30
24 34
25 48
26 28
28 47
29 44
30 35
31 32
31 34
32 40
33 37
35 39
35 45
36 47
40 46
42 45
45 49
46 47
```

### Output

**Reason:** K-fator validado: 50 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 50 vértices, 60 arestas, menor grau: 2
Graus dos vértices: [3, 2, 3, 3, 2, 3, 2, 2, 3, 2, 3, 2, 2, 2, 2, 2, 4, 3, 2, 2, 2, 3, 2, 2, 2, 2, 2, 3, 3, 2, 2, 3, 3, 2, 2, 3, 2, 2, 2, 2, 4, 2, 2, 2, 2, 3, 2, 3, 2, 3]
Adjacências:
Vértice 0: [2, 4, 38]
Vértice 1: [24, 28]
Vértice 2: [0, 7, 11]
Vértice 3: [16, 21, 39]
Vértice 4: [0, 44]
Vértice 5: [9, 14, 40]
Vértice 6: [36, 38]
Vértice 7: [2, 27]
Vértice 8: [19, 25, 40]
Vértice 9: [5, 27]
Vértice 10: [16, 33, 41]
Vértice 11: [2, 32]
Vértice 12: [18, 31]
Vértice 13: [16, 42]
Vértice 14: [5, 17]
Vértice 15: [48, 49]
Vértice 16: [3, 10, 13, 20]
Vértice 17: [14, 23, 27]
Vértice 18: [12, 41]
Vértice 19: [8, 29]
Vértice 20: [16, 43]
Vértice 21: [3, 26, 49]
Vértice 22: [37, 43]
Vértice 23: [17, 30]
Vértice 24: [1, 34]
Vértice 25: [8, 48]
Vértice 26: [21, 28]
Vértice 27: [7, 9, 17]
Vértice 28: [1, 26, 47]
Vértice 29: [19, 44]
Vértice 30: [23, 35]
Vértice 31: [12, 32, 34]
Vértice 32: [11, 31, 40]
Vértice 33: [10, 37]
Vértice 34: [24, 31]
Vértice 35: [30, 39, 45]
Vértice 36: [6, 47]
Vértice 37: [22, 33]
Vértice 38: [0, 6]
Vértice 39: [3, 35]
Vértice 40: [5, 8, 32, 46]
Vértice 41: [10, 18]
Vértice 42: [13, 45]
Vértice 43: [20, 22]
Vértice 44: [4, 29]
Vértice 45: [35, 42, 49]
Vértice 46: [40, 47]
Vértice 47: [28, 36, 46]
Vértice 48: [15, 25]
Vértice 49: [15, 21, 45]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 50 vértices, 50 arestas, menor grau: 2
Arestas do fator:
0 - 4
0 - 38
1 - 24
1 - 28
2 - 7
2 - 11
3 - 21
3 - 39
4 - 44
5 - 9
5 - 14
6 - 36
6 - 38
7 - 27
8 - 19
8 - 25
9 - 27
10 - 33
10 - 41
11 - 32
12 - 18
12 - 31
13 - 16
13 - 42
14 - 17
15 - 48
15 - 49
16 - 20
17 - 23
18 - 41
19 - 29
20 - 43
21 - 26
22 - 37
22 - 43
23 - 30
24 - 34
25 - 48
26 - 28
29 - 44
30 - 35
31 - 34
32 - 40
33 - 37
35 - 39
36 - 47
40 - 46
42 - 45
45 - 49
46 - 47
```

---

## Test 22: test_case_022_k2_n50.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 50

**K-Factor:** 2

**Execution Time:** 10.000 ms

**Edges:**

```
0 7
0 35
1 14
1 18
1 38
2 23
2 34
3 29
3 36
4 7
4 17
4 44
5 22
5 26
6 11
6 21
8 41
8 49
9 34
9 44
10 12
10 15
11 28
12 14
12 42
13 17
13 33
14 19
14 39
15 20
16 30
16 32
17 29
17 49
18 27
19 40
19 41
20 24
21 25
21 46
22 25
22 29
22 41
23 37
24 30
25 32
25 47
26 45
27 35
28 42
31 32
31 47
33 45
34 43
36 46
37 48
38 39
40 42
43 48
43 49
```

### Output

**Reason:** K-fator validado: 50 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 50 vértices, 60 arestas, menor grau: 2
Graus dos vértices: [2, 3, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 3, 2, 4, 2, 2, 4, 2, 3, 2, 3, 4, 2, 2, 4, 2, 2, 2, 3, 2, 2, 3, 2, 3, 2, 2, 2, 2, 2, 2, 3, 3, 3, 2, 2, 2, 2, 2, 3]
Adjacências:
Vértice 0: [7, 35]
Vértice 1: [14, 18, 38]
Vértice 2: [23, 34]
Vértice 3: [29, 36]
Vértice 4: [7, 17, 44]
Vértice 5: [22, 26]
Vértice 6: [11, 21]
Vértice 7: [0, 4]
Vértice 8: [41, 49]
Vértice 9: [34, 44]
Vértice 10: [12, 15]
Vértice 11: [6, 28]
Vértice 12: [10, 14, 42]
Vértice 13: [17, 33]
Vértice 14: [1, 12, 19, 39]
Vértice 15: [10, 20]
Vértice 16: [30, 32]
Vértice 17: [4, 13, 29, 49]
Vértice 18: [1, 27]
Vértice 19: [14, 40, 41]
Vértice 20: [15, 24]
Vértice 21: [6, 25, 46]
Vértice 22: [5, 25, 29, 41]
Vértice 23: [2, 37]
Vértice 24: [20, 30]
Vértice 25: [21, 22, 32, 47]
Vértice 26: [5, 45]
Vértice 27: [18, 35]
Vértice 28: [11, 42]
Vértice 29: [3, 17, 22]
Vértice 30: [16, 24]
Vértice 31: [32, 47]
Vértice 32: [16, 25, 31]
Vértice 33: [13, 45]
Vértice 34: [2, 9, 43]
Vértice 35: [0, 27]
Vértice 36: [3, 46]
Vértice 37: [23, 48]
Vértice 38: [1, 39]
Vértice 39: [14, 38]
Vértice 40: [19, 42]
Vértice 41: [8, 19, 22]
Vértice 42: [12, 28, 40]
Vértice 43: [34, 48, 49]
Vértice 44: [4, 9]
Vértice 45: [26, 33]
Vértice 46: [21, 36]
Vértice 47: [25, 31]
Vértice 48: [37, 43]
Vértice 49: [8, 17, 43]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 50 vértices, 50 arestas, menor grau: 2
Arestas do fator:
0 - 7
0 - 35
1 - 18
1 - 38
2 - 23
2 - 34
3 - 29
3 - 36
4 - 7
4 - 44
5 - 22
5 - 26
6 - 11
6 - 21
8 - 41
8 - 49
9 - 34
9 - 44
10 - 12
10 - 15
11 - 28
12 - 14
13 - 17
13 - 33
14 - 39
15 - 20
16 - 30
16 - 32
17 - 29
18 - 27
19 - 40
19 - 41
20 - 24
21 - 46
22 - 25
23 - 37
24 - 30
25 - 47
26 - 45
27 - 35
28 - 42
31 - 32
31 - 47
33 - 45
36 - 46
37 - 48
38 - 39
40 - 42
43 - 48
43 - 49
```

---

## Test 23: test_case_023_k2_n50.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 50

**K-Factor:** 2

**Execution Time:** 10.000 ms

**Edges:**

```
0 13
0 19
0 31
1 7
1 21
2 6
2 46
3 33
3 44
4 8
4 44
5 9
5 29
6 38
7 16
8 19
9 35
10 33
10 42
11 16
11 37
11 39
12 24
12 43
13 18
13 40
14 18
14 30
15 34
15 36
17 25
17 49
18 35
19 26
19 36
20 22
20 29
20 39
21 34
22 27
23 41
23 49
24 42
24 47
25 31
25 35
26 29
27 37
27 38
28 42
28 45
30 36
32 39
32 47
37 46
38 41
40 48
41 45
43 47
43 48
```

### Output

**Reason:** K-fator validado: 50 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 50 vértices, 60 arestas, menor grau: 2
Graus dos vértices: [3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 3, 2, 2, 2, 2, 3, 4, 3, 2, 2, 2, 3, 3, 2, 3, 2, 3, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 2, 3, 3, 3, 2, 2, 2, 3, 2, 2]
Adjacências:
Vértice 0: [13, 19, 31]
Vértice 1: [7, 21]
Vértice 2: [6, 46]
Vértice 3: [33, 44]
Vértice 4: [8, 44]
Vértice 5: [9, 29]
Vértice 6: [2, 38]
Vértice 7: [1, 16]
Vértice 8: [4, 19]
Vértice 9: [5, 35]
Vértice 10: [33, 42]
Vértice 11: [16, 37, 39]
Vértice 12: [24, 43]
Vértice 13: [0, 18, 40]
Vértice 14: [18, 30]
Vértice 15: [34, 36]
Vértice 16: [7, 11]
Vértice 17: [25, 49]
Vértice 18: [13, 14, 35]
Vértice 19: [0, 8, 26, 36]
Vértice 20: [22, 29, 39]
Vértice 21: [1, 34]
Vértice 22: [20, 27]
Vértice 23: [41, 49]
Vértice 24: [12, 42, 47]
Vértice 25: [17, 31, 35]
Vértice 26: [19, 29]
Vértice 27: [22, 37, 38]
Vértice 28: [42, 45]
Vértice 29: [5, 20, 26]
Vértice 30: [14, 36]
Vértice 31: [0, 25]
Vértice 32: [39, 47]
Vértice 33: [3, 10]
Vértice 34: [15, 21]
Vértice 35: [9, 18, 25]
Vértice 36: [15, 19, 30]
Vértice 37: [11, 27, 46]
Vértice 38: [6, 27, 41]
Vértice 39: [11, 20, 32]
Vértice 40: [13, 48]
Vértice 41: [23, 38, 45]
Vértice 42: [10, 24, 28]
Vértice 43: [12, 47, 48]
Vértice 44: [3, 4]
Vértice 45: [28, 41]
Vértice 46: [2, 37]
Vértice 47: [24, 32, 43]
Vértice 48: [40, 43]
Vértice 49: [17, 23]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 50 vértices, 50 arestas, menor grau: 2
Arestas do fator:
0 - 13
0 - 31
1 - 7
1 - 21
2 - 6
2 - 46
3 - 33
3 - 44
4 - 8
4 - 44
5 - 9
5 - 29
6 - 38
7 - 16
8 - 19
9 - 35
10 - 33
10 - 42
11 - 16
11 - 37
12 - 24
12 - 43
13 - 40
14 - 18
14 - 30
15 - 34
15 - 36
17 - 25
17 - 49
18 - 35
19 - 26
20 - 22
20 - 39
21 - 34
22 - 27
23 - 41
23 - 49
24 - 47
25 - 31
26 - 29
27 - 38
28 - 42
28 - 45
30 - 36
32 - 39
32 - 47
37 - 46
40 - 48
41 - 45
43 - 48
```

---

## Test 24: test_case_024_k2_n50.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 50

**K-Factor:** 2

**Execution Time:** 9.000 ms

**Edges:**

```
0 11
0 44
1 9
1 31
2 24
2 34
3 22
3 25
4 29
4 47
5 18
5 42
6 33
6 40
7 31
7 36
8 28
8 39
9 12
10 30
10 42
10 47
11 47
12 14
13 32
13 43
14 19
15 19
15 41
16 17
16 25
16 48
17 38
18 45
20 38
20 40
20 46
21 41
21 45
22 44
23 26
23 38
24 35
26 37
27 29
27 32
27 48
28 30
28 35
28 48
28 49
29 42
30 32
33 35
33 48
34 46
35 36
37 39
39 46
43 49
```

### Output

**Reason:** K-fator validado: 50 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 50 vértices, 60 arestas, menor grau: 2
Graus dos vértices: [2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 3, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 3, 5, 3, 3, 2, 3, 3, 2, 4, 2, 2, 3, 3, 2, 2, 3, 2, 2, 2, 3, 3, 4, 2]
Adjacências:
Vértice 0: [11, 44]
Vértice 1: [9, 31]
Vértice 2: [24, 34]
Vértice 3: [22, 25]
Vértice 4: [29, 47]
Vértice 5: [18, 42]
Vértice 6: [33, 40]
Vértice 7: [31, 36]
Vértice 8: [28, 39]
Vértice 9: [1, 12]
Vértice 10: [30, 42, 47]
Vértice 11: [0, 47]
Vértice 12: [9, 14]
Vértice 13: [32, 43]
Vértice 14: [12, 19]
Vértice 15: [19, 41]
Vértice 16: [17, 25, 48]
Vértice 17: [16, 38]
Vértice 18: [5, 45]
Vértice 19: [14, 15]
Vértice 20: [38, 40, 46]
Vértice 21: [41, 45]
Vértice 22: [3, 44]
Vértice 23: [26, 38]
Vértice 24: [2, 35]
Vértice 25: [3, 16]
Vértice 26: [23, 37]
Vértice 27: [29, 32, 48]
Vértice 28: [8, 30, 35, 48, 49]
Vértice 29: [4, 27, 42]
Vértice 30: [10, 28, 32]
Vértice 31: [1, 7]
Vértice 32: [13, 27, 30]
Vértice 33: [6, 35, 48]
Vértice 34: [2, 46]
Vértice 35: [24, 28, 33, 36]
Vértice 36: [7, 35]
Vértice 37: [26, 39]
Vértice 38: [17, 20, 23]
Vértice 39: [8, 37, 46]
Vértice 40: [6, 20]
Vértice 41: [15, 21]
Vértice 42: [5, 10, 29]
Vértice 43: [13, 49]
Vértice 44: [0, 22]
Vértice 45: [18, 21]
Vértice 46: [20, 34, 39]
Vértice 47: [4, 10, 11]
Vértice 48: [16, 27, 28, 33]
Vértice 49: [28, 43]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 50 vértices, 50 arestas, menor grau: 2
Arestas do fator:
0 - 11
0 - 44
1 - 9
1 - 31
2 - 24
2 - 34
3 - 22
3 - 25
4 - 29
4 - 47
5 - 18
5 - 42
6 - 33
6 - 40
7 - 31
7 - 36
8 - 28
8 - 39
9 - 12
10 - 30
10 - 42
11 - 47
12 - 14
13 - 32
13 - 43
14 - 19
15 - 19
15 - 41
16 - 17
16 - 25
17 - 38
18 - 45
20 - 40
20 - 46
21 - 41
21 - 45
22 - 44
23 - 26
23 - 38
24 - 35
26 - 37
27 - 29
27 - 48
28 - 49
30 - 32
33 - 48
34 - 46
35 - 36
37 - 39
43 - 49
```

---

## Test 25: test_case_025_k2_n50.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 50

**K-Factor:** 2

**Execution Time:** 9.000 ms

**Edges:**

```
0 11
0 38
1 25
1 26
1 31
1 34
2 6
2 13
3 35
3 46
4 18
4 28
5 8
5 34
6 41
7 9
7 12
8 9
8 39
10 23
10 29
10 37
11 45
12 22
13 23
14 26
14 31
14 37
15 27
15 40
16 29
16 39
17 27
17 33
17 40
18 43
19 30
19 38
20 21
20 34
21 24
21 42
22 44
24 36
24 46
25 37
25 39
25 46
27 32
28 47
29 45
30 36
31 33
31 48
32 35
36 42
41 44
42 43
47 49
48 49
```

### Output

**Reason:** K-fator validado: 50 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 50 vértices, 60 arestas, menor grau: 2
Graus dos vértices: [2, 4, 2, 2, 2, 2, 2, 2, 3, 2, 3, 2, 2, 2, 3, 2, 2, 3, 2, 2, 2, 3, 2, 2, 3, 4, 2, 3, 2, 3, 2, 4, 2, 2, 3, 2, 3, 3, 2, 3, 2, 2, 3, 2, 2, 2, 3, 2, 2, 2]
Adjacências:
Vértice 0: [11, 38]
Vértice 1: [25, 26, 31, 34]
Vértice 2: [6, 13]
Vértice 3: [35, 46]
Vértice 4: [18, 28]
Vértice 5: [8, 34]
Vértice 6: [2, 41]
Vértice 7: [9, 12]
Vértice 8: [5, 9, 39]
Vértice 9: [7, 8]
Vértice 10: [23, 29, 37]
Vértice 11: [0, 45]
Vértice 12: [7, 22]
Vértice 13: [2, 23]
Vértice 14: [26, 31, 37]
Vértice 15: [27, 40]
Vértice 16: [29, 39]
Vértice 17: [27, 33, 40]
Vértice 18: [4, 43]
Vértice 19: [30, 38]
Vértice 20: [21, 34]
Vértice 21: [20, 24, 42]
Vértice 22: [12, 44]
Vértice 23: [10, 13]
Vértice 24: [21, 36, 46]
Vértice 25: [1, 37, 39, 46]
Vértice 26: [1, 14]
Vértice 27: [15, 17, 32]
Vértice 28: [4, 47]
Vértice 29: [10, 16, 45]
Vértice 30: [19, 36]
Vértice 31: [1, 14, 33, 48]
Vértice 32: [27, 35]
Vértice 33: [17, 31]
Vértice 34: [1, 5, 20]
Vértice 35: [3, 32]
Vértice 36: [24, 30, 42]
Vértice 37: [10, 14, 25]
Vértice 38: [0, 19]
Vértice 39: [8, 16, 25]
Vértice 40: [15, 17]
Vértice 41: [6, 44]
Vértice 42: [21, 36, 43]
Vértice 43: [18, 42]
Vértice 44: [22, 41]
Vértice 45: [11, 29]
Vértice 46: [3, 24, 25]
Vértice 47: [28, 49]
Vértice 48: [31, 49]
Vértice 49: [47, 48]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 50 vértices, 50 arestas, menor grau: 2
Arestas do fator:
0 - 11
0 - 38
1 - 25
1 - 26
2 - 6
2 - 13
3 - 35
3 - 46
4 - 18
4 - 28
5 - 8
5 - 34
6 - 41
7 - 9
7 - 12
8 - 9
10 - 23
10 - 37
11 - 45
12 - 22
13 - 23
14 - 26
14 - 37
15 - 27
15 - 40
16 - 29
16 - 39
17 - 33
17 - 40
18 - 43
19 - 30
19 - 38
20 - 21
20 - 34
21 - 24
22 - 44
24 - 46
25 - 39
27 - 32
28 - 47
29 - 45
30 - 36
31 - 33
31 - 48
32 - 35
36 - 42
41 - 44
42 - 43
47 - 49
48 - 49
```

---

## Test 26: test_case_026_k2_n50.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 50

**K-Factor:** 2

**Execution Time:** 9.000 ms

**Edges:**

```
0 15
0 23
1 5
1 37
1 45
2 15
2 32
3 11
3 16
4 12
4 14
4 28
5 41
6 18
6 19
6 22
6 44
7 36
7 43
8 27
8 29
9 18
9 35
10 12
10 48
10 49
11 29
12 19
13 20
13 44
14 31
15 40
16 24
17 26
17 40
19 25
19 36
20 24
21 39
21 40
22 46
23 33
24 43
25 38
25 45
26 47
27 41
28 45
30 31
30 48
32 47
33 49
34 37
34 46
35 42
36 37
37 44
38 42
39 44
43 49
```

### Output

**Reason:** K-fator validado: 50 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 50 vértices, 60 arestas, menor grau: 2
Graus dos vértices: [2, 3, 2, 2, 3, 2, 4, 2, 2, 2, 3, 2, 3, 2, 2, 3, 2, 2, 2, 4, 2, 2, 2, 2, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 4, 2, 2, 3, 2, 2, 3, 4, 3, 2, 2, 2, 3]
Adjacências:
Vértice 0: [15, 23]
Vértice 1: [5, 37, 45]
Vértice 2: [15, 32]
Vértice 3: [11, 16]
Vértice 4: [12, 14, 28]
Vértice 5: [1, 41]
Vértice 6: [18, 19, 22, 44]
Vértice 7: [36, 43]
Vértice 8: [27, 29]
Vértice 9: [18, 35]
Vértice 10: [12, 48, 49]
Vértice 11: [3, 29]
Vértice 12: [4, 10, 19]
Vértice 13: [20, 44]
Vértice 14: [4, 31]
Vértice 15: [0, 2, 40]
Vértice 16: [3, 24]
Vértice 17: [26, 40]
Vértice 18: [6, 9]
Vértice 19: [6, 12, 25, 36]
Vértice 20: [13, 24]
Vértice 21: [39, 40]
Vértice 22: [6, 46]
Vértice 23: [0, 33]
Vértice 24: [16, 20, 43]
Vértice 25: [19, 38, 45]
Vértice 26: [17, 47]
Vértice 27: [8, 41]
Vértice 28: [4, 45]
Vértice 29: [8, 11]
Vértice 30: [31, 48]
Vértice 31: [14, 30]
Vértice 32: [2, 47]
Vértice 33: [23, 49]
Vértice 34: [37, 46]
Vértice 35: [9, 42]
Vértice 36: [7, 19, 37]
Vértice 37: [1, 34, 36, 44]
Vértice 38: [25, 42]
Vértice 39: [21, 44]
Vértice 40: [15, 17, 21]
Vértice 41: [5, 27]
Vértice 42: [35, 38]
Vértice 43: [7, 24, 49]
Vértice 44: [6, 13, 37, 39]
Vértice 45: [1, 25, 28]
Vértice 46: [22, 34]
Vértice 47: [26, 32]
Vértice 48: [10, 30]
Vértice 49: [10, 33, 43]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 50 vértices, 50 arestas, menor grau: 2
Arestas do fator:
0 - 15
0 - 23
1 - 5
1 - 37
2 - 15
2 - 32
3 - 11
3 - 16
4 - 14
4 - 28
5 - 41
6 - 18
6 - 22
7 - 36
7 - 43
8 - 27
8 - 29
9 - 18
9 - 35
10 - 12
10 - 48
11 - 29
12 - 19
13 - 20
13 - 44
14 - 31
16 - 24
17 - 26
17 - 40
19 - 36
20 - 24
21 - 39
21 - 40
22 - 46
23 - 33
25 - 38
25 - 45
26 - 47
27 - 41
28 - 45
30 - 31
30 - 48
32 - 47
33 - 49
34 - 37
34 - 46
35 - 42
38 - 42
39 - 44
43 - 49
```

---

## Test 27: test_case_027_k2_n50.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 50

**K-Factor:** 2

**Execution Time:** 9.000 ms

**Edges:**

```
0 21
0 26
0 35
1 3
1 44
2 22
2 36
3 25
4 23
4 32
5 13
5 15
5 16
6 31
6 40
7 36
7 38
8 17
8 28
9 24
9 29
10 35
10 45
11 20
11 30
11 31
12 33
12 44
12 48
13 22
13 46
14 41
14 42
15 17
15 33
16 21
16 28
17 38
17 44
18 29
18 39
19 43
19 49
20 31
20 41
21 32
22 34
23 27
24 25
26 31
26 46
27 34
30 40
33 39
35 47
37 45
37 48
38 43
42 46
47 49
```

### Output

**Reason:** K-fator validado: 50 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 50 vértices, 60 arestas, menor grau: 2
Graus dos vértices: [3, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 3, 3, 3, 2, 3, 3, 4, 2, 2, 3, 3, 3, 2, 2, 2, 3, 2, 2, 2, 2, 4, 2, 3, 2, 3, 2, 2, 3, 2, 2, 2, 2, 2, 3, 2, 3, 2, 2, 2]
Adjacências:
Vértice 0: [21, 26, 35]
Vértice 1: [3, 44]
Vértice 2: [22, 36]
Vértice 3: [1, 25]
Vértice 4: [23, 32]
Vértice 5: [13, 15, 16]
Vértice 6: [31, 40]
Vértice 7: [36, 38]
Vértice 8: [17, 28]
Vértice 9: [24, 29]
Vértice 10: [35, 45]
Vértice 11: [20, 30, 31]
Vértice 12: [33, 44, 48]
Vértice 13: [5, 22, 46]
Vértice 14: [41, 42]
Vértice 15: [5, 17, 33]
Vértice 16: [5, 21, 28]
Vértice 17: [8, 15, 38, 44]
Vértice 18: [29, 39]
Vértice 19: [43, 49]
Vértice 20: [11, 31, 41]
Vértice 21: [0, 16, 32]
Vértice 22: [2, 13, 34]
Vértice 23: [4, 27]
Vértice 24: [9, 25]
Vértice 25: [3, 24]
Vértice 26: [0, 31, 46]
Vértice 27: [23, 34]
Vértice 28: [8, 16]
Vértice 29: [9, 18]
Vértice 30: [11, 40]
Vértice 31: [6, 11, 20, 26]
Vértice 32: [4, 21]
Vértice 33: [12, 15, 39]
Vértice 34: [22, 27]
Vértice 35: [0, 10, 47]
Vértice 36: [2, 7]
Vértice 37: [45, 48]
Vértice 38: [7, 17, 43]
Vértice 39: [18, 33]
Vértice 40: [6, 30]
Vértice 41: [14, 20]
Vértice 42: [14, 46]
Vértice 43: [19, 38]
Vértice 44: [1, 12, 17]
Vértice 45: [10, 37]
Vértice 46: [13, 26, 42]
Vértice 47: [35, 49]
Vértice 48: [12, 37]
Vértice 49: [19, 47]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 50 vértices, 50 arestas, menor grau: 2
Arestas do fator:
0 - 21
0 - 26
1 - 3
1 - 44
2 - 22
2 - 36
3 - 25
4 - 23
4 - 32
5 - 13
5 - 16
6 - 31
6 - 40
7 - 36
7 - 38
8 - 17
8 - 28
9 - 24
9 - 29
10 - 35
10 - 45
11 - 20
11 - 30
12 - 44
12 - 48
13 - 46
14 - 41
14 - 42
15 - 17
15 - 33
16 - 28
18 - 29
18 - 39
19 - 43
19 - 49
20 - 41
21 - 32
22 - 34
23 - 27
24 - 25
26 - 31
27 - 34
30 - 40
33 - 39
35 - 47
37 - 45
37 - 48
38 - 43
42 - 46
47 - 49
```

---

## Test 28: test_case_028_k2_n50.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 50

**K-Factor:** 2

**Execution Time:** 9.000 ms

**Edges:**

```
0 19
0 36
0 37
0 39
1 5
1 28
2 3
2 12
2 16
3 6
3 7
4 21
4 33
5 18
6 31
6 42
7 24
8 9
8 17
8 38
8 44
9 24
10 11
10 17
11 32
12 36
13 26
13 46
14 18
14 25
15 35
15 44
16 37
17 34
18 30
18 35
19 23
19 47
20 40
20 42
21 43
22 27
22 45
23 45
25 47
26 33
27 34
28 30
28 49
29 43
29 48
30 41
30 44
31 35
31 39
32 38
34 45
36 46
40 48
41 49
```

### Output

**Reason:** K-fator validado: 50 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 50 vértices, 60 arestas, menor grau: 2
Graus dos vértices: [4, 2, 3, 3, 2, 2, 3, 2, 4, 2, 2, 2, 2, 2, 2, 2, 2, 3, 4, 3, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 4, 3, 2, 2, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 3, 3, 2, 2, 2, 2]
Adjacências:
Vértice 0: [19, 36, 37, 39]
Vértice 1: [5, 28]
Vértice 2: [3, 12, 16]
Vértice 3: [2, 6, 7]
Vértice 4: [21, 33]
Vértice 5: [1, 18]
Vértice 6: [3, 31, 42]
Vértice 7: [3, 24]
Vértice 8: [9, 17, 38, 44]
Vértice 9: [8, 24]
Vértice 10: [11, 17]
Vértice 11: [10, 32]
Vértice 12: [2, 36]
Vértice 13: [26, 46]
Vértice 14: [18, 25]
Vértice 15: [35, 44]
Vértice 16: [2, 37]
Vértice 17: [8, 10, 34]
Vértice 18: [5, 14, 30, 35]
Vértice 19: [0, 23, 47]
Vértice 20: [40, 42]
Vértice 21: [4, 43]
Vértice 22: [27, 45]
Vértice 23: [19, 45]
Vértice 24: [7, 9]
Vértice 25: [14, 47]
Vértice 26: [13, 33]
Vértice 27: [22, 34]
Vértice 28: [1, 30, 49]
Vértice 29: [43, 48]
Vértice 30: [18, 28, 41, 44]
Vértice 31: [6, 35, 39]
Vértice 32: [11, 38]
Vértice 33: [4, 26]
Vértice 34: [17, 27, 45]
Vértice 35: [15, 18, 31]
Vértice 36: [0, 12, 46]
Vértice 37: [0, 16]
Vértice 38: [8, 32]
Vértice 39: [0, 31]
Vértice 40: [20, 48]
Vértice 41: [30, 49]
Vértice 42: [6, 20]
Vértice 43: [21, 29]
Vértice 44: [8, 15, 30]
Vértice 45: [22, 23, 34]
Vértice 46: [13, 36]
Vértice 47: [19, 25]
Vértice 48: [29, 40]
Vértice 49: [28, 41]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 50 vértices, 50 arestas, menor grau: 2
Arestas do fator:
0 - 37
0 - 39
1 - 5
1 - 28
2 - 12
2 - 16
3 - 6
3 - 7
4 - 21
4 - 33
5 - 18
6 - 42
7 - 24
8 - 9
8 - 38
9 - 24
10 - 11
10 - 17
11 - 32
12 - 36
13 - 26
13 - 46
14 - 18
14 - 25
15 - 35
15 - 44
16 - 37
17 - 34
19 - 23
19 - 47
20 - 40
20 - 42
21 - 43
22 - 27
22 - 45
23 - 45
25 - 47
26 - 33
27 - 34
28 - 49
29 - 43
29 - 48
30 - 41
30 - 44
31 - 35
31 - 39
32 - 38
36 - 46
40 - 48
41 - 49
```

---

## Test 29: test_case_029_k2_n50.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 50

**K-Factor:** 2

**Execution Time:** 9.000 ms

**Edges:**

```
0 6
0 49
1 20
1 38
2 18
2 28
2 48
3 11
3 16
4 7
4 25
4 43
5 15
5 19
6 34
7 30
8 21
8 41
9 37
9 47
10 27
10 33
11 21
12 14
12 42
12 46
13 18
13 20
14 16
14 18
14 22
15 44
16 30
17 48
17 49
18 39
18 45
19 37
22 39
23 33
23 38
24 32
24 46
25 31
26 35
26 44
27 40
28 40
28 44
29 32
29 42
29 44
30 38
31 43
34 41
35 45
36 43
36 47
37 40
42 45
```

### Output

**Reason:** K-fator validado: 50 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 50 vértices, 60 arestas, menor grau: 2
Graus dos vértices: [2, 2, 3, 2, 3, 2, 2, 2, 2, 2, 2, 2, 3, 2, 4, 2, 3, 2, 5, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 2, 2, 2, 2, 2, 2, 3, 3, 2, 3, 2, 3, 3, 4, 3, 2, 2, 2, 2]
Adjacências:
Vértice 0: [6, 49]
Vértice 1: [20, 38]
Vértice 2: [18, 28, 48]
Vértice 3: [11, 16]
Vértice 4: [7, 25, 43]
Vértice 5: [15, 19]
Vértice 6: [0, 34]
Vértice 7: [4, 30]
Vértice 8: [21, 41]
Vértice 9: [37, 47]
Vértice 10: [27, 33]
Vértice 11: [3, 21]
Vértice 12: [14, 42, 46]
Vértice 13: [18, 20]
Vértice 14: [12, 16, 18, 22]
Vértice 15: [5, 44]
Vértice 16: [3, 14, 30]
Vértice 17: [48, 49]
Vértice 18: [2, 13, 14, 39, 45]
Vértice 19: [5, 37]
Vértice 20: [1, 13]
Vértice 21: [8, 11]
Vértice 22: [14, 39]
Vértice 23: [33, 38]
Vértice 24: [32, 46]
Vértice 25: [4, 31]
Vértice 26: [35, 44]
Vértice 27: [10, 40]
Vértice 28: [2, 40, 44]
Vértice 29: [32, 42, 44]
Vértice 30: [7, 16, 38]
Vértice 31: [25, 43]
Vértice 32: [24, 29]
Vértice 33: [10, 23]
Vértice 34: [6, 41]
Vértice 35: [26, 45]
Vértice 36: [43, 47]
Vértice 37: [9, 19, 40]
Vértice 38: [1, 23, 30]
Vértice 39: [18, 22]
Vértice 40: [27, 28, 37]
Vértice 41: [8, 34]
Vértice 42: [12, 29, 45]
Vértice 43: [4, 31, 36]
Vértice 44: [15, 26, 28, 29]
Vértice 45: [18, 35, 42]
Vértice 46: [12, 24]
Vértice 47: [9, 36]
Vértice 48: [2, 17]
Vértice 49: [0, 17]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 50 vértices, 50 arestas, menor grau: 2
Arestas do fator:
0 - 6
0 - 49
1 - 20
1 - 38
2 - 28
2 - 48
3 - 11
3 - 16
4 - 7
4 - 25
5 - 15
5 - 19
6 - 34
7 - 30
8 - 21
8 - 41
9 - 37
9 - 47
10 - 27
10 - 33
11 - 21
12 - 14
12 - 46
13 - 18
13 - 20
14 - 22
15 - 44
16 - 30
17 - 48
17 - 49
18 - 39
19 - 37
22 - 39
23 - 33
23 - 38
24 - 32
24 - 46
25 - 31
26 - 35
26 - 44
27 - 40
28 - 40
29 - 32
29 - 42
31 - 43
34 - 41
35 - 45
36 - 43
36 - 47
42 - 45
```

---

## Test 30: test_case_030_k2_n50.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 50

**K-Factor:** 2

**Execution Time:** 10.000 ms

**Edges:**

```
0 24
0 33
1 13
1 32
2 29
2 32
2 46
3 4
3 10
4 44
5 22
5 27
5 30
6 11
6 26
6 42
7 27
7 34
8 16
8 30
9 17
9 41
10 19
10 21
11 40
12 42
12 49
13 39
14 34
14 41
15 43
15 46
16 43
17 44
18 28
18 31
18 36
19 36
20 21
20 47
21 42
22 26
22 37
23 33
23 39
24 47
25 30
25 38
25 42
26 37
26 44
28 48
29 38
29 48
31 35
31 40
31 45
35 40
35 48
45 49
```

### Output

**Reason:** K-fator validado: 50 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 50 vértices, 60 arestas, menor grau: 2
Graus dos vértices: [2, 2, 3, 2, 2, 3, 3, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 3, 3, 2, 2, 3, 4, 2, 2, 3, 3, 4, 2, 2, 2, 3, 2, 2, 2, 2, 3, 2, 4, 2, 3, 2, 2, 2, 3, 2]
Adjacências:
Vértice 0: [24, 33]
Vértice 1: [13, 32]
Vértice 2: [29, 32, 46]
Vértice 3: [4, 10]
Vértice 4: [3, 44]
Vértice 5: [22, 27, 30]
Vértice 6: [11, 26, 42]
Vértice 7: [27, 34]
Vértice 8: [16, 30]
Vértice 9: [17, 41]
Vértice 10: [3, 19, 21]
Vértice 11: [6, 40]
Vértice 12: [42, 49]
Vértice 13: [1, 39]
Vértice 14: [34, 41]
Vértice 15: [43, 46]
Vértice 16: [8, 43]
Vértice 17: [9, 44]
Vértice 18: [28, 31, 36]
Vértice 19: [10, 36]
Vértice 20: [21, 47]
Vértice 21: [10, 20, 42]
Vértice 22: [5, 26, 37]
Vértice 23: [33, 39]
Vértice 24: [0, 47]
Vértice 25: [30, 38, 42]
Vértice 26: [6, 22, 37, 44]
Vértice 27: [5, 7]
Vértice 28: [18, 48]
Vértice 29: [2, 38, 48]
Vértice 30: [5, 8, 25]
Vértice 31: [18, 35, 40, 45]
Vértice 32: [1, 2]
Vértice 33: [0, 23]
Vértice 34: [7, 14]
Vértice 35: [31, 40, 48]
Vértice 36: [18, 19]
Vértice 37: [22, 26]
Vértice 38: [25, 29]
Vértice 39: [13, 23]
Vértice 40: [11, 31, 35]
Vértice 41: [9, 14]
Vértice 42: [6, 12, 21, 25]
Vértice 43: [15, 16]
Vértice 44: [4, 17, 26]
Vértice 45: [31, 49]
Vértice 46: [2, 15]
Vértice 47: [20, 24]
Vértice 48: [28, 29, 35]
Vértice 49: [12, 45]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 50 vértices, 50 arestas, menor grau: 2
Arestas do fator:
0 - 24
0 - 33
1 - 13
1 - 32
2 - 32
2 - 46
3 - 4
3 - 10
4 - 44
5 - 22
5 - 27
6 - 11
6 - 26
7 - 27
7 - 34
8 - 16
8 - 30
9 - 17
9 - 41
10 - 19
11 - 40
12 - 42
12 - 49
13 - 39
14 - 34
14 - 41
15 - 43
15 - 46
16 - 43
17 - 44
18 - 28
18 - 36
19 - 36
20 - 21
20 - 47
21 - 42
22 - 37
23 - 33
23 - 39
24 - 47
25 - 30
25 - 38
26 - 37
28 - 48
29 - 38
29 - 48
31 - 35
31 - 45
35 - 40
45 - 49
```

---

## Test 31: test_case_031_k3_n50.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 50

**K-Factor:** 3

**Execution Time:** 15.000 ms

**Edges:**

```
0 17
0 27
0 32
0 34
1 26
1 35
1 41
2 11
2 31
2 37
3 12
3 26
3 35
4 9
4 17
4 24
5 15
5 20
5 47
6 10
6 14
6 47
7 19
7 25
7 48
8 13
8 17
8 18
8 47
9 10
9 14
9 35
10 24
11 28
11 36
12 24
12 33
12 39
13 30
13 38
14 22
15 22
15 29
15 43
16 20
16 42
16 48
17 40
18 30
18 40
18 46
19 37
19 45
19 46
20 43
21 32
21 33
21 37
21 39
22 47
23 31
23 33
23 37
24 40
25 32
25 45
26 29
26 49
27 44
27 49
28 31
28 38
29 34
29 41
30 36
32 38
32 49
34 44
35 39
36 38
41 44
42 43
42 46
45 49
46 48
```

### Output

**Reason:** K-fator validado: 75 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 50 vértices, 85 arestas, menor grau: 3
Graus dos vértices: [4, 3, 3, 3, 3, 3, 3, 3, 4, 4, 3, 3, 4, 3, 3, 4, 3, 4, 4, 4, 3, 4, 3, 3, 4, 3, 4, 3, 3, 4, 3, 3, 5, 3, 3, 4, 3, 4, 4, 3, 3, 3, 3, 3, 3, 3, 4, 4, 3, 4]
Adjacências:
Vértice 0: [17, 27, 32, 34]
Vértice 1: [26, 35, 41]
Vértice 2: [11, 31, 37]
Vértice 3: [12, 26, 35]
Vértice 4: [9, 17, 24]
Vértice 5: [15, 20, 47]
Vértice 6: [10, 14, 47]
Vértice 7: [19, 25, 48]
Vértice 8: [13, 17, 18, 47]
Vértice 9: [4, 10, 14, 35]
Vértice 10: [6, 9, 24]
Vértice 11: [2, 28, 36]
Vértice 12: [3, 24, 33, 39]
Vértice 13: [8, 30, 38]
Vértice 14: [6, 9, 22]
Vértice 15: [5, 22, 29, 43]
Vértice 16: [20, 42, 48]
Vértice 17: [0, 4, 8, 40]
Vértice 18: [8, 30, 40, 46]
Vértice 19: [7, 37, 45, 46]
Vértice 20: [5, 16, 43]
Vértice 21: [32, 33, 37, 39]
Vértice 22: [14, 15, 47]
Vértice 23: [31, 33, 37]
Vértice 24: [4, 10, 12, 40]
Vértice 25: [7, 32, 45]
Vértice 26: [1, 3, 29, 49]
Vértice 27: [0, 44, 49]
Vértice 28: [11, 31, 38]
Vértice 29: [15, 26, 34, 41]
Vértice 30: [13, 18, 36]
Vértice 31: [2, 23, 28]
Vértice 32: [0, 21, 25, 38, 49]
Vértice 33: [12, 21, 23]
Vértice 34: [0, 29, 44]
Vértice 35: [1, 3, 9, 39]
Vértice 36: [11, 30, 38]
Vértice 37: [2, 19, 21, 23]
Vértice 38: [13, 28, 32, 36]
Vértice 39: [12, 21, 35]
Vértice 40: [17, 18, 24]
Vértice 41: [1, 29, 44]
Vértice 42: [16, 43, 46]
Vértice 43: [15, 20, 42]
Vértice 44: [27, 34, 41]
Vértice 45: [19, 25, 49]
Vértice 46: [18, 19, 42, 48]
Vértice 47: [5, 6, 8, 22]
Vértice 48: [7, 16, 46]
Vértice 49: [26, 27, 32, 45]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 50 vértices, 75 arestas, menor grau: 3
Arestas do fator:
0 - 27
0 - 32
0 - 34
1 - 26
1 - 35
1 - 41
2 - 11
2 - 31
2 - 37
3 - 12
3 - 26
3 - 35
4 - 9
4 - 17
4 - 24
5 - 15
5 - 20
5 - 47
6 - 10
6 - 14
6 - 47
7 - 19
7 - 25
7 - 48
8 - 13
8 - 17
8 - 18
9 - 10
9 - 14
10 - 24
11 - 28
11 - 36
12 - 33
12 - 39
13 - 30
13 - 38
14 - 22
15 - 22
15 - 43
16 - 20
16 - 42
16 - 48
17 - 40
18 - 30
18 - 40
19 - 45
19 - 46
20 - 43
21 - 33
21 - 37
21 - 39
22 - 47
23 - 31
23 - 33
23 - 37
24 - 40
25 - 32
25 - 45
26 - 29
27 - 44
27 - 49
28 - 31
28 - 38
29 - 34
29 - 41
30 - 36
32 - 49
34 - 44
35 - 39
36 - 38
41 - 44
42 - 43
42 - 46
45 - 49
46 - 48
```

---

## Test 32: test_case_032_k3_n50.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 50

**K-Factor:** 3

**Execution Time:** 15.000 ms

**Edges:**

```
0 2
0 38
0 45
1 5
1 10
1 26
2 3
2 14
2 39
3 5
3 26
4 15
4 27
4 28
4 36
5 11
5 41
6 25
6 37
6 46
7 18
7 29
7 32
8 12
8 32
8 45
9 28
9 31
9 36
10 11
10 23
11 19
12 15
12 20
13 18
13 44
13 49
14 26
14 38
15 38
15 45
16 21
16 47
16 49
17 19
17 39
17 46
18 24
19 23
20 29
20 32
20 40
21 22
21 35
21 39
21 43
22 30
22 47
23 39
24 29
24 34
24 44
25 40
25 44
25 48
27 34
27 43
28 34
30 34
30 43
31 34
31 41
31 42
33 40
33 41
33 42
35 44
35 49
36 41
37 40
37 42
39 48
43 47
45 48
46 48
```

### Output

**Reason:** K-fator validado: 75 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 50 vértices, 85 arestas, menor grau: 3
Graus dos vértices: [3, 3, 4, 3, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 4, 5, 3, 3, 4, 4, 3, 3, 3, 3, 3, 4, 3, 3, 5, 3, 3, 3, 3, 5, 4, 4, 3, 4, 4, 4, 3, 3, 4, 3]
Adjacências:
Vértice 0: [2, 38, 45]
Vértice 1: [5, 10, 26]
Vértice 2: [0, 3, 14, 39]
Vértice 3: [2, 5, 26]
Vértice 4: [15, 27, 28, 36]
Vértice 5: [1, 3, 11, 41]
Vértice 6: [25, 37, 46]
Vértice 7: [18, 29, 32]
Vértice 8: [12, 32, 45]
Vértice 9: [28, 31, 36]
Vértice 10: [1, 11, 23]
Vértice 11: [5, 10, 19]
Vértice 12: [8, 15, 20]
Vértice 13: [18, 44, 49]
Vértice 14: [2, 26, 38]
Vértice 15: [4, 12, 38, 45]
Vértice 16: [21, 47, 49]
Vértice 17: [19, 39, 46]
Vértice 18: [7, 13, 24]
Vértice 19: [11, 17, 23]
Vértice 20: [12, 29, 32, 40]
Vértice 21: [16, 22, 35, 39, 43]
Vértice 22: [21, 30, 47]
Vértice 23: [10, 19, 39]
Vértice 24: [18, 29, 34, 44]
Vértice 25: [6, 40, 44, 48]
Vértice 26: [1, 3, 14]
Vértice 27: [4, 34, 43]
Vértice 28: [4, 9, 34]
Vértice 29: [7, 20, 24]
Vértice 30: [22, 34, 43]
Vértice 31: [9, 34, 41, 42]
Vértice 32: [7, 8, 20]
Vértice 33: [40, 41, 42]
Vértice 34: [24, 27, 28, 30, 31]
Vértice 35: [21, 44, 49]
Vértice 36: [4, 9, 41]
Vértice 37: [6, 40, 42]
Vértice 38: [0, 14, 15]
Vértice 39: [2, 17, 21, 23, 48]
Vértice 40: [20, 25, 33, 37]
Vértice 41: [5, 31, 33, 36]
Vértice 42: [31, 33, 37]
Vértice 43: [21, 27, 30, 47]
Vértice 44: [13, 24, 25, 35]
Vértice 45: [0, 8, 15, 48]
Vértice 46: [6, 17, 48]
Vértice 47: [16, 22, 43]
Vértice 48: [25, 39, 45, 46]
Vértice 49: [13, 16, 35]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 50 vértices, 75 arestas, menor grau: 3
Arestas do fator:
0 - 2
0 - 38
0 - 45
1 - 5
1 - 10
1 - 26
2 - 3
2 - 14
3 - 5
3 - 26
4 - 27
4 - 28
4 - 36
5 - 11
6 - 25
6 - 37
6 - 46
7 - 18
7 - 29
7 - 32
8 - 12
8 - 32
8 - 45
9 - 28
9 - 31
9 - 36
10 - 11
10 - 23
11 - 19
12 - 15
12 - 20
13 - 18
13 - 44
13 - 49
14 - 26
14 - 38
15 - 38
15 - 45
16 - 21
16 - 47
16 - 49
17 - 19
17 - 39
17 - 46
18 - 24
19 - 23
20 - 29
20 - 32
21 - 22
21 - 35
22 - 30
22 - 47
23 - 39
24 - 29
24 - 44
25 - 40
25 - 48
27 - 34
27 - 43
28 - 34
30 - 34
30 - 43
31 - 41
31 - 42
33 - 40
33 - 41
33 - 42
35 - 44
35 - 49
36 - 41
37 - 40
37 - 42
39 - 48
43 - 47
46 - 48
```

---

## Test 33: test_case_033_k3_n50.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 50

**K-Factor:** 3

**Execution Time:** 15.000 ms

**Edges:**

```
0 11
0 25
0 47
1 2
1 19
1 39
2 20
2 44
3 11
3 20
3 47
4 7
4 9
4 13
5 14
5 27
5 36
6 12
6 15
6 27
6 49
7 16
7 37
8 16
8 37
8 46
9 24
9 37
10 19
10 28
10 34
11 26
12 19
12 38
12 42
13 23
13 24
14 18
14 32
15 29
15 42
15 48
16 29
16 30
17 19
17 34
17 39
18 31
18 43
18 44
19 40
20 26
21 33
21 40
21 45
22 23
22 25
22 36
22 37
22 47
23 35
24 30
24 35
24 36
25 35
26 44
27 38
27 44
28 29
28 48
29 34
30 33
30 46
31 32
31 45
32 36
33 41
36 38
39 44
40 41
40 43
41 46
42 49
43 45
48 49
```

### Output

**Reason:** K-fator validado: 75 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 50 vértices, 85 arestas, menor grau: 3
Graus dos vértices: [3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, 4, 3, 3, 4, 4, 3, 4, 5, 3, 3, 5, 3, 5, 3, 3, 4, 3, 4, 4, 3, 3, 3, 3, 3, 5, 4, 3, 3, 4, 3, 3, 3, 5, 3, 3, 3, 3, 3]
Adjacências:
Vértice 0: [11, 25, 47]
Vértice 1: [2, 19, 39]
Vértice 2: [1, 20, 44]
Vértice 3: [11, 20, 47]
Vértice 4: [7, 9, 13]
Vértice 5: [14, 27, 36]
Vértice 6: [12, 15, 27, 49]
Vértice 7: [4, 16, 37]
Vértice 8: [16, 37, 46]
Vértice 9: [4, 24, 37]
Vértice 10: [19, 28, 34]
Vértice 11: [0, 3, 26]
Vértice 12: [6, 19, 38, 42]
Vértice 13: [4, 23, 24]
Vértice 14: [5, 18, 32]
Vértice 15: [6, 29, 42, 48]
Vértice 16: [7, 8, 29, 30]
Vértice 17: [19, 34, 39]
Vértice 18: [14, 31, 43, 44]
Vértice 19: [1, 10, 12, 17, 40]
Vértice 20: [2, 3, 26]
Vértice 21: [33, 40, 45]
Vértice 22: [23, 25, 36, 37, 47]
Vértice 23: [13, 22, 35]
Vértice 24: [9, 13, 30, 35, 36]
Vértice 25: [0, 22, 35]
Vértice 26: [11, 20, 44]
Vértice 27: [5, 6, 38, 44]
Vértice 28: [10, 29, 48]
Vértice 29: [15, 16, 28, 34]
Vértice 30: [16, 24, 33, 46]
Vértice 31: [18, 32, 45]
Vértice 32: [14, 31, 36]
Vértice 33: [21, 30, 41]
Vértice 34: [10, 17, 29]
Vértice 35: [23, 24, 25]
Vértice 36: [5, 22, 24, 32, 38]
Vértice 37: [7, 8, 9, 22]
Vértice 38: [12, 27, 36]
Vértice 39: [1, 17, 44]
Vértice 40: [19, 21, 41, 43]
Vértice 41: [33, 40, 46]
Vértice 42: [12, 15, 49]
Vértice 43: [18, 40, 45]
Vértice 44: [2, 18, 26, 27, 39]
Vértice 45: [21, 31, 43]
Vértice 46: [8, 30, 41]
Vértice 47: [0, 3, 22]
Vértice 48: [15, 28, 49]
Vértice 49: [6, 42, 48]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 50 vértices, 75 arestas, menor grau: 3
Arestas do fator:
0 - 11
0 - 25
0 - 47
1 - 2
1 - 19
1 - 39
2 - 20
2 - 44
3 - 11
3 - 20
3 - 47
4 - 7
4 - 9
4 - 13
5 - 14
5 - 27
5 - 36
6 - 12
6 - 27
6 - 49
7 - 16
7 - 37
8 - 16
8 - 37
8 - 46
9 - 24
9 - 37
10 - 19
10 - 28
10 - 34
11 - 26
12 - 38
12 - 42
13 - 23
13 - 24
14 - 18
14 - 32
15 - 29
15 - 42
15 - 48
16 - 30
17 - 19
17 - 34
17 - 39
18 - 31
18 - 43
20 - 26
21 - 33
21 - 40
21 - 45
22 - 23
22 - 25
22 - 47
23 - 35
24 - 35
25 - 35
26 - 44
27 - 38
28 - 29
28 - 48
29 - 34
30 - 33
30 - 46
31 - 32
31 - 45
32 - 36
33 - 41
36 - 38
39 - 44
40 - 41
40 - 43
41 - 46
42 - 49
43 - 45
48 - 49
```

---

## Test 34: test_case_034_k3_n50.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 50

**K-Factor:** 3

**Execution Time:** 15.000 ms

**Edges:**

```
0 13
0 16
0 17
0 36
1 4
1 18
1 42
2 6
2 9
2 45
3 32
3 36
3 38
4 23
4 40
5 13
5 25
5 32
5 36
6 8
6 26
7 16
7 20
7 34
7 35
8 16
8 20
9 44
9 46
10 13
10 17
10 30
11 23
11 27
11 39
12 16
12 35
12 41
14 22
14 28
14 49
15 19
15 27
15 39
16 43
17 25
18 23
18 27
19 21
19 48
20 26
21 43
21 47
22 34
22 41
23 29
23 35
23 40
24 29
24 32
24 37
24 38
25 30
25 42
25 43
26 45
28 33
28 34
29 31
29 33
30 40
31 38
31 49
33 49
34 37
35 37
37 41
39 48
40 42
43 46
43 47
43 48
44 45
44 47
46 47
```

### Output

**Reason:** K-fator validado: 75 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 50 vértices, 85 arestas, menor grau: 3
Graus dos vértices: [4, 3, 3, 3, 3, 4, 3, 4, 3, 3, 3, 3, 3, 3, 3, 3, 5, 3, 3, 3, 3, 3, 3, 6, 4, 5, 3, 3, 3, 4, 3, 3, 3, 3, 4, 4, 3, 4, 3, 3, 4, 3, 3, 6, 3, 3, 3, 4, 3, 3]
Adjacências:
Vértice 0: [13, 16, 17, 36]
Vértice 1: [4, 18, 42]
Vértice 2: [6, 9, 45]
Vértice 3: [32, 36, 38]
Vértice 4: [1, 23, 40]
Vértice 5: [13, 25, 32, 36]
Vértice 6: [2, 8, 26]
Vértice 7: [16, 20, 34, 35]
Vértice 8: [6, 16, 20]
Vértice 9: [2, 44, 46]
Vértice 10: [13, 17, 30]
Vértice 11: [23, 27, 39]
Vértice 12: [16, 35, 41]
Vértice 13: [0, 5, 10]
Vértice 14: [22, 28, 49]
Vértice 15: [19, 27, 39]
Vértice 16: [0, 7, 8, 12, 43]
Vértice 17: [0, 10, 25]
Vértice 18: [1, 23, 27]
Vértice 19: [15, 21, 48]
Vértice 20: [7, 8, 26]
Vértice 21: [19, 43, 47]
Vértice 22: [14, 34, 41]
Vértice 23: [4, 11, 18, 29, 35, 40]
Vértice 24: [29, 32, 37, 38]
Vértice 25: [5, 17, 30, 42, 43]
Vértice 26: [6, 20, 45]
Vértice 27: [11, 15, 18]
Vértice 28: [14, 33, 34]
Vértice 29: [23, 24, 31, 33]
Vértice 30: [10, 25, 40]
Vértice 31: [29, 38, 49]
Vértice 32: [3, 5, 24]
Vértice 33: [28, 29, 49]
Vértice 34: [7, 22, 28, 37]
Vértice 35: [7, 12, 23, 37]
Vértice 36: [0, 3, 5]
Vértice 37: [24, 34, 35, 41]
Vértice 38: [3, 24, 31]
Vértice 39: [11, 15, 48]
Vértice 40: [4, 23, 30, 42]
Vértice 41: [12, 22, 37]
Vértice 42: [1, 25, 40]
Vértice 43: [16, 21, 25, 46, 47, 48]
Vértice 44: [9, 45, 47]
Vértice 45: [2, 26, 44]
Vértice 46: [9, 43, 47]
Vértice 47: [21, 43, 44, 46]
Vértice 48: [19, 39, 43]
Vértice 49: [14, 31, 33]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 50 vértices, 75 arestas, menor grau: 3
Arestas do fator:
0 - 13
0 - 17
0 - 36
1 - 4
1 - 18
1 - 42
2 - 6
2 - 9
2 - 45
3 - 32
3 - 36
3 - 38
4 - 23
4 - 40
5 - 13
5 - 32
5 - 36
6 - 8
6 - 26
7 - 16
7 - 20
7 - 35
8 - 16
8 - 20
9 - 44
9 - 46
10 - 13
10 - 17
10 - 30
11 - 23
11 - 27
11 - 39
12 - 16
12 - 35
12 - 41
14 - 22
14 - 28
14 - 49
15 - 19
15 - 27
15 - 39
17 - 25
18 - 23
18 - 27
19 - 21
19 - 48
20 - 26
21 - 43
21 - 47
22 - 34
22 - 41
24 - 29
24 - 32
24 - 38
25 - 30
25 - 42
26 - 45
28 - 33
28 - 34
29 - 31
29 - 33
30 - 40
31 - 38
31 - 49
33 - 49
34 - 37
35 - 37
37 - 41
39 - 48
40 - 42
43 - 46
43 - 48
44 - 45
44 - 47
46 - 47
```

---

## Test 35: test_case_035_k3_n50.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 50

**K-Factor:** 3

**Execution Time:** 15.000 ms

**Edges:**

```
0 5
0 8
0 42
1 30
1 36
1 38
1 39
2 5
2 8
2 33
3 15
3 21
3 22
3 38
3 45
4 16
4 29
4 47
4 48
5 29
5 46
6 12
6 34
6 43
7 8
7 12
7 26
7 42
8 15
9 19
9 27
9 49
10 17
10 24
10 34
11 14
11 21
11 40
12 40
12 41
13 18
13 36
13 39
13 42
14 30
14 43
15 22
15 37
16 27
16 28
17 25
17 41
17 48
18 25
18 35
19 26
19 29
20 25
20 35
20 44
21 30
21 36
22 23
22 45
23 37
23 46
24 32
24 48
25 31
26 49
27 29
28 31
28 47
31 44
32 38
32 45
33 37
33 46
34 41
35 39
38 48
40 41
40 43
42 49
44 47
```

### Output

**Reason:** K-fator validado: 75 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 50 vértices, 85 arestas, menor grau: 3
Graus dos vértices: [3, 4, 3, 5, 4, 4, 3, 4, 4, 3, 3, 3, 4, 4, 3, 4, 3, 4, 3, 3, 3, 4, 4, 3, 3, 4, 3, 3, 3, 4, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 4, 4, 4, 3, 3, 3, 3, 3, 4, 3]
Adjacências:
Vértice 0: [5, 8, 42]
Vértice 1: [30, 36, 38, 39]
Vértice 2: [5, 8, 33]
Vértice 3: [15, 21, 22, 38, 45]
Vértice 4: [16, 29, 47, 48]
Vértice 5: [0, 2, 29, 46]
Vértice 6: [12, 34, 43]
Vértice 7: [8, 12, 26, 42]
Vértice 8: [0, 2, 7, 15]
Vértice 9: [19, 27, 49]
Vértice 10: [17, 24, 34]
Vértice 11: [14, 21, 40]
Vértice 12: [6, 7, 40, 41]
Vértice 13: [18, 36, 39, 42]
Vértice 14: [11, 30, 43]
Vértice 15: [3, 8, 22, 37]
Vértice 16: [4, 27, 28]
Vértice 17: [10, 25, 41, 48]
Vértice 18: [13, 25, 35]
Vértice 19: [9, 26, 29]
Vértice 20: [25, 35, 44]
Vértice 21: [3, 11, 30, 36]
Vértice 22: [3, 15, 23, 45]
Vértice 23: [22, 37, 46]
Vértice 24: [10, 32, 48]
Vértice 25: [17, 18, 20, 31]
Vértice 26: [7, 19, 49]
Vértice 27: [9, 16, 29]
Vértice 28: [16, 31, 47]
Vértice 29: [4, 5, 19, 27]
Vértice 30: [1, 14, 21]
Vértice 31: [25, 28, 44]
Vértice 32: [24, 38, 45]
Vértice 33: [2, 37, 46]
Vértice 34: [6, 10, 41]
Vértice 35: [18, 20, 39]
Vértice 36: [1, 13, 21]
Vértice 37: [15, 23, 33]
Vértice 38: [1, 3, 32, 48]
Vértice 39: [1, 13, 35]
Vértice 40: [11, 12, 41, 43]
Vértice 41: [12, 17, 34, 40]
Vértice 42: [0, 7, 13, 49]
Vértice 43: [6, 14, 40]
Vértice 44: [20, 31, 47]
Vértice 45: [3, 22, 32]
Vértice 46: [5, 23, 33]
Vértice 47: [4, 28, 44]
Vértice 48: [4, 17, 24, 38]
Vértice 49: [9, 26, 42]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 50 vértices, 75 arestas, menor grau: 3
Arestas do fator:
0 - 5
0 - 8
0 - 42
1 - 30
1 - 36
1 - 39
2 - 5
2 - 8
2 - 33
3 - 15
3 - 38
3 - 45
4 - 16
4 - 29
4 - 47
5 - 46
6 - 12
6 - 34
6 - 43
7 - 8
7 - 26
7 - 42
9 - 19
9 - 27
9 - 49
10 - 17
10 - 24
10 - 34
11 - 14
11 - 21
11 - 40
12 - 40
12 - 41
13 - 18
13 - 36
13 - 39
14 - 30
14 - 43
15 - 22
15 - 37
16 - 27
16 - 28
17 - 41
17 - 48
18 - 25
18 - 35
19 - 26
19 - 29
20 - 25
20 - 35
20 - 44
21 - 30
21 - 36
22 - 23
22 - 45
23 - 37
23 - 46
24 - 32
24 - 48
25 - 31
26 - 49
27 - 29
28 - 31
28 - 47
31 - 44
32 - 38
32 - 45
33 - 37
33 - 46
34 - 41
35 - 39
38 - 48
40 - 43
42 - 49
44 - 47
```

---

## Test 36: test_case_036_k3_n50.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 50

**K-Factor:** 3

**Execution Time:** 15.000 ms

**Edges:**

```
0 2
0 17
0 38
1 7
1 42
1 45
2 3
2 15
3 30
3 36
3 38
4 8
4 14
4 28
4 33
4 46
5 13
5 20
5 31
5 32
6 24
6 25
6 26
6 43
7 11
7 44
8 12
8 34
8 43
9 21
9 36
9 38
10 18
10 30
10 31
11 16
11 39
12 23
12 27
13 35
13 37
14 21
14 48
15 17
15 27
16 22
16 34
17 39
17 43
18 19
18 47
19 28
19 30
20 24
20 40
20 41
21 46
22 23
22 39
23 34
24 49
25 27
25 29
25 49
26 28
26 29
27 43
28 47
29 47
30 35
31 35
31 45
32 33
32 37
33 48
35 45
36 46
37 40
37 48
39 44
40 42
40 45
41 42
41 49
44 45
```

### Output

**Reason:** K-fator validado: 75 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 50 vértices, 85 arestas, menor grau: 3
Graus dos vértices: [3, 3, 3, 4, 5, 4, 4, 3, 4, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 4, 3, 3, 3, 3, 4, 3, 4, 4, 3, 4, 4, 3, 3, 3, 4, 3, 4, 3, 4, 4, 3, 3, 4, 3, 5, 3, 3, 3, 3]
Adjacências:
Vértice 0: [2, 17, 38]
Vértice 1: [7, 42, 45]
Vértice 2: [0, 3, 15]
Vértice 3: [2, 30, 36, 38]
Vértice 4: [8, 14, 28, 33, 46]
Vértice 5: [13, 20, 31, 32]
Vértice 6: [24, 25, 26, 43]
Vértice 7: [1, 11, 44]
Vértice 8: [4, 12, 34, 43]
Vértice 9: [21, 36, 38]
Vértice 10: [18, 30, 31]
Vértice 11: [7, 16, 39]
Vértice 12: [8, 23, 27]
Vértice 13: [5, 35, 37]
Vértice 14: [4, 21, 48]
Vértice 15: [2, 17, 27]
Vértice 16: [11, 22, 34]
Vértice 17: [0, 15, 39, 43]
Vértice 18: [10, 19, 47]
Vértice 19: [18, 28, 30]
Vértice 20: [5, 24, 40, 41]
Vértice 21: [9, 14, 46]
Vértice 22: [16, 23, 39]
Vértice 23: [12, 22, 34]
Vértice 24: [6, 20, 49]
Vértice 25: [6, 27, 29, 49]
Vértice 26: [6, 28, 29]
Vértice 27: [12, 15, 25, 43]
Vértice 28: [4, 19, 26, 47]
Vértice 29: [25, 26, 47]
Vértice 30: [3, 10, 19, 35]
Vértice 31: [5, 10, 35, 45]
Vértice 32: [5, 33, 37]
Vértice 33: [4, 32, 48]
Vértice 34: [8, 16, 23]
Vértice 35: [13, 30, 31, 45]
Vértice 36: [3, 9, 46]
Vértice 37: [13, 32, 40, 48]
Vértice 38: [0, 3, 9]
Vértice 39: [11, 17, 22, 44]
Vértice 40: [20, 37, 42, 45]
Vértice 41: [20, 42, 49]
Vértice 42: [1, 40, 41]
Vértice 43: [6, 8, 17, 27]
Vértice 44: [7, 39, 45]
Vértice 45: [1, 31, 35, 40, 44]
Vértice 46: [4, 21, 36]
Vértice 47: [18, 28, 29]
Vértice 48: [14, 33, 37]
Vértice 49: [24, 25, 41]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 50 vértices, 75 arestas, menor grau: 3
Arestas do fator:
0 - 2
0 - 17
0 - 38
1 - 7
1 - 42
1 - 45
2 - 3
2 - 15
3 - 36
3 - 38
4 - 14
4 - 33
4 - 46
5 - 13
5 - 31
5 - 32
6 - 24
6 - 26
6 - 43
7 - 11
7 - 44
8 - 12
8 - 34
8 - 43
9 - 21
9 - 36
9 - 38
10 - 18
10 - 30
10 - 31
11 - 16
11 - 39
12 - 23
12 - 27
13 - 35
13 - 37
14 - 21
14 - 48
15 - 17
15 - 27
16 - 22
16 - 34
17 - 43
18 - 19
18 - 47
19 - 28
19 - 30
20 - 24
20 - 40
20 - 41
21 - 46
22 - 23
22 - 39
23 - 34
24 - 49
25 - 27
25 - 29
25 - 49
26 - 28
26 - 29
28 - 47
29 - 47
30 - 35
31 - 35
32 - 33
32 - 37
33 - 48
36 - 46
37 - 48
39 - 44
40 - 42
40 - 45
41 - 42
41 - 49
44 - 45
```

---

## Test 37: test_case_037_k3_n50.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 50

**K-Factor:** 3

**Execution Time:** 15.000 ms

**Edges:**

```
0 21
0 22
0 49
1 35
1 40
1 42
2 15
2 32
2 45
3 10
3 18
3 23
3 36
4 11
4 15
4 18
5 19
5 28
5 30
6 7
6 14
6 16
6 22
6 27
7 23
7 35
7 40
8 11
8 38
8 43
9 13
9 23
9 36
9 48
10 31
10 39
11 33
12 34
12 37
12 44
13 35
13 41
13 42
14 19
14 26
14 28
15 29
16 17
16 40
17 27
17 45
18 29
18 33
19 22
19 38
20 24
20 25
20 46
21 26
21 44
22 26
22 35
23 37
24 38
24 43
25 31
25 39
27 46
27 47
28 41
29 32
30 41
30 42
31 46
32 36
32 47
33 38
34 48
34 49
36 39
37 48
42 48
43 46
44 49
45 47
```

### Output

**Reason:** K-fator validado: 75 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 50 vértices, 85 arestas, menor grau: 3
Graus dos vértices: [3, 3, 3, 4, 3, 3, 5, 4, 3, 4, 3, 3, 3, 4, 4, 3, 3, 3, 4, 4, 3, 3, 5, 4, 3, 3, 3, 4, 3, 3, 3, 3, 4, 3, 3, 4, 4, 3, 4, 3, 3, 3, 4, 3, 3, 3, 4, 3, 4, 3]
Adjacências:
Vértice 0: [21, 22, 49]
Vértice 1: [35, 40, 42]
Vértice 2: [15, 32, 45]
Vértice 3: [10, 18, 23, 36]
Vértice 4: [11, 15, 18]
Vértice 5: [19, 28, 30]
Vértice 6: [7, 14, 16, 22, 27]
Vértice 7: [6, 23, 35, 40]
Vértice 8: [11, 38, 43]
Vértice 9: [13, 23, 36, 48]
Vértice 10: [3, 31, 39]
Vértice 11: [4, 8, 33]
Vértice 12: [34, 37, 44]
Vértice 13: [9, 35, 41, 42]
Vértice 14: [6, 19, 26, 28]
Vértice 15: [2, 4, 29]
Vértice 16: [6, 17, 40]
Vértice 17: [16, 27, 45]
Vértice 18: [3, 4, 29, 33]
Vértice 19: [5, 14, 22, 38]
Vértice 20: [24, 25, 46]
Vértice 21: [0, 26, 44]
Vértice 22: [0, 6, 19, 26, 35]
Vértice 23: [3, 7, 9, 37]
Vértice 24: [20, 38, 43]
Vértice 25: [20, 31, 39]
Vértice 26: [14, 21, 22]
Vértice 27: [6, 17, 46, 47]
Vértice 28: [5, 14, 41]
Vértice 29: [15, 18, 32]
Vértice 30: [5, 41, 42]
Vértice 31: [10, 25, 46]
Vértice 32: [2, 29, 36, 47]
Vértice 33: [11, 18, 38]
Vértice 34: [12, 48, 49]
Vértice 35: [1, 7, 13, 22]
Vértice 36: [3, 9, 32, 39]
Vértice 37: [12, 23, 48]
Vértice 38: [8, 19, 24, 33]
Vértice 39: [10, 25, 36]
Vértice 40: [1, 7, 16]
Vértice 41: [13, 28, 30]
Vértice 42: [1, 13, 30, 48]
Vértice 43: [8, 24, 46]
Vértice 44: [12, 21, 49]
Vértice 45: [2, 17, 47]
Vértice 46: [20, 27, 31, 43]
Vértice 47: [27, 32, 45]
Vértice 48: [9, 34, 37, 42]
Vértice 49: [0, 34, 44]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 50 vértices, 75 arestas, menor grau: 3
Arestas do fator:
0 - 21
0 - 22
0 - 49
1 - 35
1 - 40
1 - 42
2 - 15
2 - 32
2 - 45
3 - 10
3 - 23
3 - 36
4 - 11
4 - 15
4 - 18
5 - 19
5 - 28
5 - 30
6 - 7
6 - 16
6 - 27
7 - 35
7 - 40
8 - 11
8 - 38
8 - 43
9 - 13
9 - 23
9 - 36
10 - 31
10 - 39
11 - 33
12 - 34
12 - 37
12 - 44
13 - 35
13 - 41
14 - 19
14 - 26
14 - 28
15 - 29
16 - 17
16 - 40
17 - 27
17 - 45
18 - 29
18 - 33
19 - 22
20 - 24
20 - 25
20 - 46
21 - 26
21 - 44
22 - 26
23 - 37
24 - 38
24 - 43
25 - 31
25 - 39
27 - 47
28 - 41
29 - 32
30 - 41
30 - 42
31 - 46
32 - 47
33 - 38
34 - 48
34 - 49
36 - 39
37 - 48
42 - 48
43 - 46
44 - 49
45 - 47
```

---

## Test 38: test_case_038_k3_n50.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 50

**K-Factor:** 3

**Execution Time:** 15.000 ms

**Edges:**

```
0 5
0 22
0 34
1 7
1 38
1 44
2 12
2 17
2 28
3 9
3 18
3 26
4 18
4 26
4 45
5 10
5 45
6 16
6 24
6 43
7 13
7 22
7 27
7 29
8 22
8 25
8 34
9 32
9 48
10 34
10 46
11 31
11 37
11 42
12 32
12 48
13 17
13 24
13 44
14 20
14 27
14 36
15 31
15 33
15 42
16 23
16 39
17 28
17 36
17 48
18 32
18 43
19 21
19 37
19 47
20 28
20 30
21 22
21 25
23 30
23 35
24 41
25 47
26 28
26 46
27 30
27 35
27 42
28 36
29 33
29 38
31 38
31 40
32 48
33 49
35 39
37 40
37 43
38 49
39 43
40 47
41 43
41 44
42 49
45 46
```

### Output

**Reason:** K-fator validado: 75 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 50 vértices, 85 arestas, menor grau: 3
Graus dos vértices: [3, 3, 3, 3, 3, 3, 3, 5, 3, 3, 3, 3, 3, 4, 3, 3, 3, 5, 4, 3, 3, 3, 4, 3, 3, 3, 4, 5, 5, 3, 3, 4, 4, 3, 3, 3, 3, 4, 4, 3, 3, 3, 4, 5, 3, 3, 3, 3, 4, 3]
Adjacências:
Vértice 0: [5, 22, 34]
Vértice 1: [7, 38, 44]
Vértice 2: [12, 17, 28]
Vértice 3: [9, 18, 26]
Vértice 4: [18, 26, 45]
Vértice 5: [0, 10, 45]
Vértice 6: [16, 24, 43]
Vértice 7: [1, 13, 22, 27, 29]
Vértice 8: [22, 25, 34]
Vértice 9: [3, 32, 48]
Vértice 10: [5, 34, 46]
Vértice 11: [31, 37, 42]
Vértice 12: [2, 32, 48]
Vértice 13: [7, 17, 24, 44]
Vértice 14: [20, 27, 36]
Vértice 15: [31, 33, 42]
Vértice 16: [6, 23, 39]
Vértice 17: [2, 13, 28, 36, 48]
Vértice 18: [3, 4, 32, 43]
Vértice 19: [21, 37, 47]
Vértice 20: [14, 28, 30]
Vértice 21: [19, 22, 25]
Vértice 22: [0, 7, 8, 21]
Vértice 23: [16, 30, 35]
Vértice 24: [6, 13, 41]
Vértice 25: [8, 21, 47]
Vértice 26: [3, 4, 28, 46]
Vértice 27: [7, 14, 30, 35, 42]
Vértice 28: [2, 17, 20, 26, 36]
Vértice 29: [7, 33, 38]
Vértice 30: [20, 23, 27]
Vértice 31: [11, 15, 38, 40]
Vértice 32: [9, 12, 18, 48]
Vértice 33: [15, 29, 49]
Vértice 34: [0, 8, 10]
Vértice 35: [23, 27, 39]
Vértice 36: [14, 17, 28]
Vértice 37: [11, 19, 40, 43]
Vértice 38: [1, 29, 31, 49]
Vértice 39: [16, 35, 43]
Vértice 40: [31, 37, 47]
Vértice 41: [24, 43, 44]
Vértice 42: [11, 15, 27, 49]
Vértice 43: [6, 18, 37, 39, 41]
Vértice 44: [1, 13, 41]
Vértice 45: [4, 5, 46]
Vértice 46: [10, 26, 45]
Vértice 47: [19, 25, 40]
Vértice 48: [9, 12, 17, 32]
Vértice 49: [33, 38, 42]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 50 vértices, 75 arestas, menor grau: 3
Arestas do fator:
0 - 5
0 - 22
0 - 34
1 - 7
1 - 38
1 - 44
2 - 12
2 - 17
2 - 28
3 - 9
3 - 18
3 - 26
4 - 18
4 - 26
4 - 45
5 - 10
5 - 45
6 - 16
6 - 24
6 - 43
7 - 13
7 - 29
8 - 22
8 - 25
8 - 34
9 - 32
9 - 48
10 - 34
10 - 46
11 - 31
11 - 37
11 - 42
12 - 32
12 - 48
13 - 24
13 - 44
14 - 20
14 - 27
14 - 36
15 - 31
15 - 33
15 - 42
16 - 23
16 - 39
17 - 36
17 - 48
18 - 32
19 - 21
19 - 37
19 - 47
20 - 28
20 - 30
21 - 22
21 - 25
23 - 30
23 - 35
24 - 41
25 - 47
26 - 46
27 - 30
27 - 35
28 - 36
29 - 33
29 - 38
31 - 40
33 - 49
35 - 39
37 - 40
38 - 49
39 - 43
40 - 47
41 - 43
41 - 44
42 - 49
45 - 46
```

---

## Test 39: test_case_039_k3_n50.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 50

**K-Factor:** 3

**Execution Time:** 15.000 ms

**Edges:**

```
0 3
0 13
0 28
1 3
1 28
1 43
2 14
2 19
2 24
3 38
4 5
4 12
4 26
5 25
5 27
5 37
5 48
6 9
6 10
6 15
6 18
7 20
7 36
7 40
8 16
8 27
8 39
9 16
9 27
10 20
10 36
11 14
11 24
11 45
12 17
12 30
13 46
13 49
14 21
14 25
15 23
15 40
15 44
16 18
17 22
17 31
18 20
19 35
19 42
19 47
21 27
21 29
21 39
21 49
22 32
22 33
23 37
23 41
23 44
24 35
25 33
25 38
25 45
26 30
26 48
27 37
28 49
29 39
29 46
29 49
30 31
31 33
32 35
32 42
33 42
34 36
34 40
34 44
37 47
38 43
39 46
41 44
41 47
43 45
47 48
```

### Output

**Reason:** K-fator validado: 75 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 50 vértices, 85 arestas, menor grau: 3
Graus dos vértices: [3, 3, 3, 3, 3, 5, 4, 3, 3, 3, 3, 3, 3, 3, 4, 4, 3, 3, 3, 4, 3, 5, 3, 4, 3, 5, 3, 5, 3, 4, 3, 3, 3, 4, 3, 3, 3, 4, 3, 4, 3, 3, 3, 3, 4, 3, 3, 4, 3, 4]
Adjacências:
Vértice 0: [3, 13, 28]
Vértice 1: [3, 28, 43]
Vértice 2: [14, 19, 24]
Vértice 3: [0, 1, 38]
Vértice 4: [5, 12, 26]
Vértice 5: [4, 25, 27, 37, 48]
Vértice 6: [9, 10, 15, 18]
Vértice 7: [20, 36, 40]
Vértice 8: [16, 27, 39]
Vértice 9: [6, 16, 27]
Vértice 10: [6, 20, 36]
Vértice 11: [14, 24, 45]
Vértice 12: [4, 17, 30]
Vértice 13: [0, 46, 49]
Vértice 14: [2, 11, 21, 25]
Vértice 15: [6, 23, 40, 44]
Vértice 16: [8, 9, 18]
Vértice 17: [12, 22, 31]
Vértice 18: [6, 16, 20]
Vértice 19: [2, 35, 42, 47]
Vértice 20: [7, 10, 18]
Vértice 21: [14, 27, 29, 39, 49]
Vértice 22: [17, 32, 33]
Vértice 23: [15, 37, 41, 44]
Vértice 24: [2, 11, 35]
Vértice 25: [5, 14, 33, 38, 45]
Vértice 26: [4, 30, 48]
Vértice 27: [5, 8, 9, 21, 37]
Vértice 28: [0, 1, 49]
Vértice 29: [21, 39, 46, 49]
Vértice 30: [12, 26, 31]
Vértice 31: [17, 30, 33]
Vértice 32: [22, 35, 42]
Vértice 33: [22, 25, 31, 42]
Vértice 34: [36, 40, 44]
Vértice 35: [19, 24, 32]
Vértice 36: [7, 10, 34]
Vértice 37: [5, 23, 27, 47]
Vértice 38: [3, 25, 43]
Vértice 39: [8, 21, 29, 46]
Vértice 40: [7, 15, 34]
Vértice 41: [23, 44, 47]
Vértice 42: [19, 32, 33]
Vértice 43: [1, 38, 45]
Vértice 44: [15, 23, 34, 41]
Vértice 45: [11, 25, 43]
Vértice 46: [13, 29, 39]
Vértice 47: [19, 37, 41, 48]
Vértice 48: [5, 26, 47]
Vértice 49: [13, 21, 28, 29]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 50 vértices, 75 arestas, menor grau: 3
Arestas do fator:
0 - 3
0 - 13
0 - 28
1 - 3
1 - 28
1 - 43
2 - 14
2 - 19
2 - 24
3 - 38
4 - 5
4 - 12
4 - 26
5 - 25
5 - 48
6 - 9
6 - 10
6 - 18
7 - 20
7 - 36
7 - 40
8 - 16
8 - 27
8 - 39
9 - 16
9 - 27
10 - 20
10 - 36
11 - 14
11 - 24
11 - 45
12 - 17
12 - 30
13 - 46
13 - 49
14 - 21
15 - 23
15 - 40
15 - 44
16 - 18
17 - 22
17 - 31
18 - 20
19 - 35
19 - 42
21 - 29
21 - 49
22 - 32
22 - 33
23 - 37
23 - 41
24 - 35
25 - 38
25 - 45
26 - 30
26 - 48
27 - 37
28 - 49
29 - 39
29 - 46
30 - 31
31 - 33
32 - 35
32 - 42
33 - 42
34 - 36
34 - 40
34 - 44
37 - 47
38 - 43
39 - 46
41 - 44
41 - 47
43 - 45
47 - 48
```

---

## Test 40: test_case_040_k3_n50.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 50

**K-Factor:** 3

**Execution Time:** 15.000 ms

**Edges:**

```
0 11
0 30
0 44
1 9
1 45
1 46
2 3
2 8
2 24
2 28
3 20
3 23
3 27
4 10
4 18
4 25
4 32
5 8
5 24
5 41
5 48
6 13
6 15
6 39
7 23
7 33
7 40
8 43
9 15
9 41
10 18
10 37
11 36
11 42
12 20
12 22
12 28
12 47
13 17
13 45
14 29
14 34
14 38
15 45
16 35
16 39
16 42
17 35
17 39
18 25
18 29
19 23
19 33
19 49
20 24
20 38
21 23
21 26
21 40
22 31
22 41
24 32
25 26
26 32
27 34
27 38
28 31
28 49
29 37
30 36
30 38
30 43
31 46
32 40
33 47
34 37
35 44
35 47
36 41
36 48
38 39
41 46
42 44
43 48
47 49
```

### Output

**Reason:** K-fator validado: 75 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 50 vértices, 85 arestas, menor grau: 3
Graus dos vértices: [3, 3, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, 4, 3, 4, 3, 3, 4, 4, 3, 3, 3, 4, 3, 4, 3, 4, 3, 3, 4, 4, 3, 5, 4, 3, 5, 3, 3, 3, 3, 3, 4, 3, 3]
Adjacências:
Vértice 0: [11, 30, 44]
Vértice 1: [9, 45, 46]
Vértice 2: [3, 8, 24, 28]
Vértice 3: [2, 20, 23, 27]
Vértice 4: [10, 18, 25, 32]
Vértice 5: [8, 24, 41, 48]
Vértice 6: [13, 15, 39]
Vértice 7: [23, 33, 40]
Vértice 8: [2, 5, 43]
Vértice 9: [1, 15, 41]
Vértice 10: [4, 18, 37]
Vértice 11: [0, 36, 42]
Vértice 12: [20, 22, 28, 47]
Vértice 13: [6, 17, 45]
Vértice 14: [29, 34, 38]
Vértice 15: [6, 9, 45]
Vértice 16: [35, 39, 42]
Vértice 17: [13, 35, 39]
Vértice 18: [4, 10, 25, 29]
Vértice 19: [23, 33, 49]
Vértice 20: [3, 12, 24, 38]
Vértice 21: [23, 26, 40]
Vértice 22: [12, 31, 41]
Vértice 23: [3, 7, 19, 21]
Vértice 24: [2, 5, 20, 32]
Vértice 25: [4, 18, 26]
Vértice 26: [21, 25, 32]
Vértice 27: [3, 34, 38]
Vértice 28: [2, 12, 31, 49]
Vértice 29: [14, 18, 37]
Vértice 30: [0, 36, 38, 43]
Vértice 31: [22, 28, 46]
Vértice 32: [4, 24, 26, 40]
Vértice 33: [7, 19, 47]
Vértice 34: [14, 27, 37]
Vértice 35: [16, 17, 44, 47]
Vértice 36: [11, 30, 41, 48]
Vértice 37: [10, 29, 34]
Vértice 38: [14, 20, 27, 30, 39]
Vértice 39: [6, 16, 17, 38]
Vértice 40: [7, 21, 32]
Vértice 41: [5, 9, 22, 36, 46]
Vértice 42: [11, 16, 44]
Vértice 43: [8, 30, 48]
Vértice 44: [0, 35, 42]
Vértice 45: [1, 13, 15]
Vértice 46: [1, 31, 41]
Vértice 47: [12, 33, 35, 49]
Vértice 48: [5, 36, 43]
Vértice 49: [19, 28, 47]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 50 vértices, 75 arestas, menor grau: 3
Arestas do fator:
0 - 11
0 - 30
0 - 44
1 - 9
1 - 45
1 - 46
2 - 3
2 - 8
2 - 24
3 - 20
3 - 27
4 - 10
4 - 25
4 - 32
5 - 8
5 - 24
5 - 48
6 - 13
6 - 15
6 - 39
7 - 23
7 - 33
7 - 40
8 - 43
9 - 15
9 - 41
10 - 18
10 - 37
11 - 36
11 - 42
12 - 22
12 - 28
12 - 47
13 - 17
13 - 45
14 - 29
14 - 34
14 - 38
15 - 45
16 - 35
16 - 39
16 - 42
17 - 35
17 - 39
18 - 25
18 - 29
19 - 23
19 - 33
19 - 49
20 - 24
20 - 38
21 - 23
21 - 26
21 - 40
22 - 31
22 - 41
25 - 26
26 - 32
27 - 34
27 - 38
28 - 31
28 - 49
29 - 37
30 - 36
30 - 43
31 - 46
32 - 40
33 - 47
34 - 37
35 - 44
36 - 48
41 - 46
42 - 44
43 - 48
47 - 49
```

---

## Test 41: test_case_041_k2_n100.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 100

**K-Factor:** 2

**Execution Time:** 25.000 ms

**Edges:**

```
0 29
0 30
1 23
1 54
2 9
2 28
3 9
3 16
4 28
4 97
5 22
5 31
6 42
6 82
6 94
7 19
7 57
8 42
8 73
10 91
10 97
10 99
11 51
11 95
12 73
12 77
13 43
13 57
13 70
14 29
14 85
15 36
15 50
15 81
16 17
17 32
17 68
18 58
18 92
19 64
20 34
20 46
20 53
20 78
21 55
21 59
22 82
23 84
24 35
24 47
24 59
25 65
25 72
25 77
26 48
26 53
27 76
27 84
29 57
30 50
30 68
31 56
32 90
32 98
33 75
33 76
34 53
34 85
35 60
36 47
36 49
36 98
37 68
37 93
38 45
38 72
39 60
39 61
39 80
40 70
40 93
41 44
41 83
43 91
44 65
45 88
46 47
47 61
48 63
48 99
49 52
51 54
52 94
55 96
56 59
56 86
58 89
60 88
61 69
62 75
62 96
63 70
64 67
64 80
66 67
66 78
66 91
67 86
69 81
71 92
71 98
73 86
74 87
74 97
77 90
79 87
79 95
82 99
83 89
95 96
```

### Output

**Reason:** K-fator validado: 100 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 100 vértices, 120 arestas, menor grau: 2
Graus dos vértices: [2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 3, 2, 2, 3, 2, 3, 2, 3, 2, 2, 4, 2, 2, 2, 3, 3, 2, 2, 2, 3, 3, 2, 3, 2, 3, 2, 4, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 4, 3, 2, 2, 2, 2, 3, 2, 2, 3, 3, 2, 3, 3, 3, 2, 2, 3, 2, 3, 3, 3, 2, 3, 2, 2, 3, 2, 2, 2, 3, 2, 2, 2, 2, 3, 2, 2, 2, 3, 2, 2, 2, 2, 3, 2, 2, 2, 3, 3, 3, 3, 3]
Adjacências:
Vértice 0: [29, 30]
Vértice 1: [23, 54]
Vértice 2: [9, 28]
Vértice 3: [9, 16]
Vértice 4: [28, 97]
Vértice 5: [22, 31]
Vértice 6: [42, 82, 94]
Vértice 7: [19, 57]
Vértice 8: [42, 73]
Vértice 9: [2, 3]
Vértice 10: [91, 97, 99]
Vértice 11: [51, 95]
Vértice 12: [73, 77]
Vértice 13: [43, 57, 70]
Vértice 14: [29, 85]
Vértice 15: [36, 50, 81]
Vértice 16: [3, 17]
Vértice 17: [16, 32, 68]
Vértice 18: [58, 92]
Vértice 19: [7, 64]
Vértice 20: [34, 46, 53, 78]
Vértice 21: [55, 59]
Vértice 22: [5, 82]
Vértice 23: [1, 84]
Vértice 24: [35, 47, 59]
Vértice 25: [65, 72, 77]
Vértice 26: [48, 53]
Vértice 27: [76, 84]
Vértice 28: [2, 4]
Vértice 29: [0, 14, 57]
Vértice 30: [0, 50, 68]
Vértice 31: [5, 56]
Vértice 32: [17, 90, 98]
Vértice 33: [75, 76]
Vértice 34: [20, 53, 85]
Vértice 35: [24, 60]
Vértice 36: [15, 47, 49, 98]
Vértice 37: [68, 93]
Vértice 38: [45, 72]
Vértice 39: [60, 61, 80]
Vértice 40: [70, 93]
Vértice 41: [44, 83]
Vértice 42: [6, 8]
Vértice 43: [13, 91]
Vértice 44: [41, 65]
Vértice 45: [38, 88]
Vértice 46: [20, 47]
Vértice 47: [24, 36, 46, 61]
Vértice 48: [26, 63, 99]
Vértice 49: [36, 52]
Vértice 50: [15, 30]
Vértice 51: [11, 54]
Vértice 52: [49, 94]
Vértice 53: [20, 26, 34]
Vértice 54: [1, 51]
Vértice 55: [21, 96]
Vértice 56: [31, 59, 86]
Vértice 57: [7, 13, 29]
Vértice 58: [18, 89]
Vértice 59: [21, 24, 56]
Vértice 60: [35, 39, 88]
Vértice 61: [39, 47, 69]
Vértice 62: [75, 96]
Vértice 63: [48, 70]
Vértice 64: [19, 67, 80]
Vértice 65: [25, 44]
Vértice 66: [67, 78, 91]
Vértice 67: [64, 66, 86]
Vértice 68: [17, 30, 37]
Vértice 69: [61, 81]
Vértice 70: [13, 40, 63]
Vértice 71: [92, 98]
Vértice 72: [25, 38]
Vértice 73: [8, 12, 86]
Vértice 74: [87, 97]
Vértice 75: [33, 62]
Vértice 76: [27, 33]
Vértice 77: [12, 25, 90]
Vértice 78: [20, 66]
Vértice 79: [87, 95]
Vértice 80: [39, 64]
Vértice 81: [15, 69]
Vértice 82: [6, 22, 99]
Vértice 83: [41, 89]
Vértice 84: [23, 27]
Vértice 85: [14, 34]
Vértice 86: [56, 67, 73]
Vértice 87: [74, 79]
Vértice 88: [45, 60]
Vértice 89: [58, 83]
Vértice 90: [32, 77]
Vértice 91: [10, 43, 66]
Vértice 92: [18, 71]
Vértice 93: [37, 40]
Vértice 94: [6, 52]
Vértice 95: [11, 79, 96]
Vértice 96: [55, 62, 95]
Vértice 97: [4, 10, 74]
Vértice 98: [32, 36, 71]
Vértice 99: [10, 48, 82]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 100 vértices, 100 arestas, menor grau: 2
Arestas do fator:
0 - 29
0 - 30
1 - 23
1 - 54
2 - 9
2 - 28
3 - 9
3 - 16
4 - 28
4 - 97
5 - 22
5 - 31
6 - 42
6 - 94
7 - 19
7 - 57
8 - 42
8 - 73
10 - 91
10 - 99
11 - 51
11 - 95
12 - 73
12 - 77
13 - 43
13 - 57
14 - 29
14 - 85
15 - 50
15 - 81
16 - 17
17 - 68
18 - 58
18 - 92
19 - 64
20 - 46
20 - 78
21 - 55
21 - 59
22 - 82
23 - 84
24 - 35
24 - 59
25 - 65
25 - 72
26 - 48
26 - 53
27 - 76
27 - 84
30 - 50
31 - 56
32 - 90
32 - 98
33 - 75
33 - 76
34 - 53
34 - 85
35 - 60
36 - 47
36 - 49
37 - 68
37 - 93
38 - 45
38 - 72
39 - 61
39 - 80
40 - 70
40 - 93
41 - 44
41 - 83
43 - 91
44 - 65
45 - 88
46 - 47
48 - 63
49 - 52
51 - 54
52 - 94
55 - 96
56 - 86
58 - 89
60 - 88
61 - 69
62 - 75
62 - 96
63 - 70
64 - 80
66 - 67
66 - 78
67 - 86
69 - 81
71 - 92
71 - 98
74 - 87
74 - 97
77 - 90
79 - 87
79 - 95
82 - 99
83 - 89
```

---

## Test 42: test_case_042_k2_n100.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 100

**K-Factor:** 2

**Execution Time:** 24.000 ms

**Edges:**

```
0 83
0 93
1 34
1 98
2 32
2 83
3 44
3 53
4 17
4 32
4 36
4 37
5 13
5 21
5 25
5 45
6 50
6 53
7 84
7 87
8 61
8 62
8 91
9 54
9 96
10 49
10 86
11 28
11 55
12 40
12 42
13 82
14 25
14 77
15 63
15 76
16 66
16 95
17 23
17 42
17 97
18 55
18 65
19 27
19 35
20 45
20 71
21 48
22 43
22 68
22 82
23 24
23 71
24 36
24 95
25 37
26 79
26 90
27 32
28 99
29 39
29 74
30 47
30 49
31 51
31 59
33 38
33 87
34 59
35 70
36 60
37 92
38 46
39 40
39 79
40 91
41 45
41 78
42 97
43 69
43 82
44 99
46 70
47 64
48 66
50 64
50 65
51 74
52 67
52 85
54 69
56 63
56 80
57 65
57 88
58 89
58 92
58 99
59 89
60 69
60 75
61 77
61 80
62 88
67 89
68 69
72 75
72 93
73 96
73 98
74 98
76 84
78 81
80 90
81 85
82 96
86 94
87 99
91 94
94 96
```

### Output

**Reason:** K-fator validado: 100 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 100 vértices, 120 arestas, menor grau: 2
Graus dos vértices: [2, 2, 2, 2, 4, 4, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 4, 2, 2, 2, 2, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 3, 3, 2, 3, 3, 2, 3, 3, 2, 3, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 2, 2, 2, 3, 2, 2, 2, 4, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 3, 2, 4, 2, 2, 2, 2, 3, 2, 3, 2, 3, 2, 2, 3, 2, 4, 2, 3, 4]
Adjacências:
Vértice 0: [83, 93]
Vértice 1: [34, 98]
Vértice 2: [32, 83]
Vértice 3: [44, 53]
Vértice 4: [17, 32, 36, 37]
Vértice 5: [13, 21, 25, 45]
Vértice 6: [50, 53]
Vértice 7: [84, 87]
Vértice 8: [61, 62, 91]
Vértice 9: [54, 96]
Vértice 10: [49, 86]
Vértice 11: [28, 55]
Vértice 12: [40, 42]
Vértice 13: [5, 82]
Vértice 14: [25, 77]
Vértice 15: [63, 76]
Vértice 16: [66, 95]
Vértice 17: [4, 23, 42, 97]
Vértice 18: [55, 65]
Vértice 19: [27, 35]
Vértice 20: [45, 71]
Vértice 21: [5, 48]
Vértice 22: [43, 68, 82]
Vértice 23: [17, 24, 71]
Vértice 24: [23, 36, 95]
Vértice 25: [5, 14, 37]
Vértice 26: [79, 90]
Vértice 27: [19, 32]
Vértice 28: [11, 99]
Vértice 29: [39, 74]
Vértice 30: [47, 49]
Vértice 31: [51, 59]
Vértice 32: [2, 4, 27]
Vértice 33: [38, 87]
Vértice 34: [1, 59]
Vértice 35: [19, 70]
Vértice 36: [4, 24, 60]
Vértice 37: [4, 25, 92]
Vértice 38: [33, 46]
Vértice 39: [29, 40, 79]
Vértice 40: [12, 39, 91]
Vértice 41: [45, 78]
Vértice 42: [12, 17, 97]
Vértice 43: [22, 69, 82]
Vértice 44: [3, 99]
Vértice 45: [5, 20, 41]
Vértice 46: [38, 70]
Vértice 47: [30, 64]
Vértice 48: [21, 66]
Vértice 49: [10, 30]
Vértice 50: [6, 64, 65]
Vértice 51: [31, 74]
Vértice 52: [67, 85]
Vértice 53: [3, 6]
Vértice 54: [9, 69]
Vértice 55: [11, 18]
Vértice 56: [63, 80]
Vértice 57: [65, 88]
Vértice 58: [89, 92, 99]
Vértice 59: [31, 34, 89]
Vértice 60: [36, 69, 75]
Vértice 61: [8, 77, 80]
Vértice 62: [8, 88]
Vértice 63: [15, 56]
Vértice 64: [47, 50]
Vértice 65: [18, 50, 57]
Vértice 66: [16, 48]
Vértice 67: [52, 89]
Vértice 68: [22, 69]
Vértice 69: [43, 54, 60, 68]
Vértice 70: [35, 46]
Vértice 71: [20, 23]
Vértice 72: [75, 93]
Vértice 73: [96, 98]
Vértice 74: [29, 51, 98]
Vértice 75: [60, 72]
Vértice 76: [15, 84]
Vértice 77: [14, 61]
Vértice 78: [41, 81]
Vértice 79: [26, 39]
Vértice 80: [56, 61, 90]
Vértice 81: [78, 85]
Vértice 82: [13, 22, 43, 96]
Vértice 83: [0, 2]
Vértice 84: [7, 76]
Vértice 85: [52, 81]
Vértice 86: [10, 94]
Vértice 87: [7, 33, 99]
Vértice 88: [57, 62]
Vértice 89: [58, 59, 67]
Vértice 90: [26, 80]
Vértice 91: [8, 40, 94]
Vértice 92: [37, 58]
Vértice 93: [0, 72]
Vértice 94: [86, 91, 96]
Vértice 95: [16, 24]
Vértice 96: [9, 73, 82, 94]
Vértice 97: [17, 42]
Vértice 98: [1, 73, 74]
Vértice 99: [28, 44, 58, 87]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 100 vértices, 100 arestas, menor grau: 2
Arestas do fator:
0 - 83
0 - 93
1 - 34
1 - 98
2 - 32
2 - 83
3 - 44
3 - 53
4 - 17
4 - 36
5 - 13
5 - 21
6 - 50
6 - 53
7 - 84
7 - 87
8 - 61
8 - 62
9 - 54
9 - 96
10 - 49
10 - 86
11 - 28
11 - 55
12 - 40
12 - 42
13 - 82
14 - 25
14 - 77
15 - 63
15 - 76
16 - 66
16 - 95
17 - 97
18 - 55
18 - 65
19 - 27
19 - 35
20 - 45
20 - 71
21 - 48
22 - 43
22 - 68
23 - 24
23 - 71
24 - 95
25 - 37
26 - 79
26 - 90
27 - 32
28 - 99
29 - 39
29 - 74
30 - 47
30 - 49
31 - 51
31 - 59
33 - 38
33 - 87
34 - 59
35 - 70
36 - 60
37 - 92
38 - 46
39 - 79
40 - 91
41 - 45
41 - 78
42 - 97
43 - 82
44 - 99
46 - 70
47 - 64
48 - 66
50 - 64
51 - 74
52 - 67
52 - 85
54 - 69
56 - 63
56 - 80
57 - 65
57 - 88
58 - 89
58 - 92
60 - 75
61 - 77
62 - 88
67 - 89
68 - 69
72 - 75
72 - 93
73 - 96
73 - 98
76 - 84
78 - 81
80 - 90
81 - 85
86 - 94
91 - 94
```

---

## Test 43: test_case_043_k2_n100.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 100

**K-Factor:** 2

**Execution Time:** 25.000 ms

**Edges:**

```
0 30
0 89
1 9
1 71
2 28
2 46
3 4
3 50
3 63
4 96
5 64
5 97
6 45
6 83
7 75
7 89
8 11
8 52
8 61
8 70
9 17
9 38
10 54
10 95
11 14
11 26
11 87
12 84
12 85
13 41
13 79
14 65
15 25
15 34
15 47
16 29
16 78
16 84
17 27
17 30
17 40
18 29
18 31
19 36
19 48
20 35
20 38
20 98
21 80
21 90
22 46
22 57
22 58
22 68
23 43
23 63
24 48
24 82
25 53
25 76
26 59
27 68
28 44
28 65
30 33
31 59
32 76
32 88
33 35
34 42
36 65
37 41
37 69
38 62
39 57
39 74
40 50
40 85
42 83
43 49
44 90
45 72
46 70
46 78
47 55
47 73
49 56
51 55
51 56
52 94
53 96
54 81
56 91
57 80
58 78
59 70
60 82
60 94
61 62
62 88
63 86
64 72
66 93
66 95
67 70
67 99
69 87
70 91
71 88
73 74
73 79
75 85
77 87
77 92
81 89
81 92
86 93
90 91
91 97
98 99
```

### Output

**Reason:** K-fator validado: 100 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 100 vértices, 120 arestas, menor grau: 2
Graus dos vértices: [2, 2, 2, 3, 2, 2, 2, 2, 4, 3, 2, 4, 2, 2, 2, 3, 3, 4, 2, 2, 3, 2, 4, 2, 2, 3, 2, 2, 3, 2, 3, 2, 2, 2, 2, 2, 2, 2, 3, 2, 3, 2, 2, 2, 2, 2, 4, 3, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 2, 3, 2, 2, 3, 3, 2, 3, 2, 2, 2, 2, 5, 2, 2, 3, 2, 2, 2, 2, 3, 2, 2, 3, 2, 2, 2, 3, 2, 3, 3, 3, 3, 4, 2, 2, 2, 2, 2, 2, 2, 2]
Adjacências:
Vértice 0: [30, 89]
Vértice 1: [9, 71]
Vértice 2: [28, 46]
Vértice 3: [4, 50, 63]
Vértice 4: [3, 96]
Vértice 5: [64, 97]
Vértice 6: [45, 83]
Vértice 7: [75, 89]
Vértice 8: [11, 52, 61, 70]
Vértice 9: [1, 17, 38]
Vértice 10: [54, 95]
Vértice 11: [8, 14, 26, 87]
Vértice 12: [84, 85]
Vértice 13: [41, 79]
Vértice 14: [11, 65]
Vértice 15: [25, 34, 47]
Vértice 16: [29, 78, 84]
Vértice 17: [9, 27, 30, 40]
Vértice 18: [29, 31]
Vértice 19: [36, 48]
Vértice 20: [35, 38, 98]
Vértice 21: [80, 90]
Vértice 22: [46, 57, 58, 68]
Vértice 23: [43, 63]
Vértice 24: [48, 82]
Vértice 25: [15, 53, 76]
Vértice 26: [11, 59]
Vértice 27: [17, 68]
Vértice 28: [2, 44, 65]
Vértice 29: [16, 18]
Vértice 30: [0, 17, 33]
Vértice 31: [18, 59]
Vértice 32: [76, 88]
Vértice 33: [30, 35]
Vértice 34: [15, 42]
Vértice 35: [20, 33]
Vértice 36: [19, 65]
Vértice 37: [41, 69]
Vértice 38: [9, 20, 62]
Vértice 39: [57, 74]
Vértice 40: [17, 50, 85]
Vértice 41: [13, 37]
Vértice 42: [34, 83]
Vértice 43: [23, 49]
Vértice 44: [28, 90]
Vértice 45: [6, 72]
Vértice 46: [2, 22, 70, 78]
Vértice 47: [15, 55, 73]
Vértice 48: [19, 24]
Vértice 49: [43, 56]
Vértice 50: [3, 40]
Vértice 51: [55, 56]
Vértice 52: [8, 94]
Vértice 53: [25, 96]
Vértice 54: [10, 81]
Vértice 55: [47, 51]
Vértice 56: [49, 51, 91]
Vértice 57: [22, 39, 80]
Vértice 58: [22, 78]
Vértice 59: [26, 31, 70]
Vértice 60: [82, 94]
Vértice 61: [8, 62]
Vértice 62: [38, 61, 88]
Vértice 63: [3, 23, 86]
Vértice 64: [5, 72]
Vértice 65: [14, 28, 36]
Vértice 66: [93, 95]
Vértice 67: [70, 99]
Vértice 68: [22, 27]
Vértice 69: [37, 87]
Vértice 70: [8, 46, 59, 67, 91]
Vértice 71: [1, 88]
Vértice 72: [45, 64]
Vértice 73: [47, 74, 79]
Vértice 74: [39, 73]
Vértice 75: [7, 85]
Vértice 76: [25, 32]
Vértice 77: [87, 92]
Vértice 78: [16, 46, 58]
Vértice 79: [13, 73]
Vértice 80: [21, 57]
Vértice 81: [54, 89, 92]
Vértice 82: [24, 60]
Vértice 83: [6, 42]
Vértice 84: [12, 16]
Vértice 85: [12, 40, 75]
Vértice 86: [63, 93]
Vértice 87: [11, 69, 77]
Vértice 88: [32, 62, 71]
Vértice 89: [0, 7, 81]
Vértice 90: [21, 44, 91]
Vértice 91: [56, 70, 90, 97]
Vértice 92: [77, 81]
Vértice 93: [66, 86]
Vértice 94: [52, 60]
Vértice 95: [10, 66]
Vértice 96: [4, 53]
Vértice 97: [5, 91]
Vértice 98: [20, 99]
Vértice 99: [67, 98]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 100 vértices, 100 arestas, menor grau: 2
Arestas do fator:
0 - 30
0 - 89
1 - 9
1 - 71
2 - 28
2 - 46
3 - 4
3 - 50
4 - 96
5 - 64
5 - 97
6 - 45
6 - 83
7 - 75
7 - 89
8 - 52
8 - 61
9 - 38
10 - 54
10 - 95
11 - 14
11 - 26
12 - 84
12 - 85
13 - 41
13 - 79
14 - 65
15 - 34
15 - 47
16 - 29
16 - 84
17 - 27
17 - 40
18 - 29
18 - 31
19 - 36
19 - 48
20 - 35
20 - 98
21 - 80
21 - 90
22 - 58
22 - 68
23 - 43
23 - 63
24 - 48
24 - 82
25 - 53
25 - 76
26 - 59
27 - 68
28 - 44
30 - 33
31 - 59
32 - 76
32 - 88
33 - 35
34 - 42
36 - 65
37 - 41
37 - 69
38 - 62
39 - 57
39 - 74
40 - 50
42 - 83
43 - 49
44 - 90
45 - 72
46 - 78
47 - 55
49 - 56
51 - 55
51 - 56
52 - 94
53 - 96
54 - 81
57 - 80
58 - 78
60 - 82
60 - 94
61 - 62
63 - 86
64 - 72
66 - 93
66 - 95
67 - 70
67 - 99
69 - 87
70 - 91
71 - 88
73 - 74
73 - 79
75 - 85
77 - 87
77 - 92
81 - 92
86 - 93
91 - 97
98 - 99
```

---

## Test 44: test_case_044_k2_n100.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 100

**K-Factor:** 2

**Execution Time:** 24.000 ms

**Edges:**

```
0 11
0 30
1 2
1 96
2 11
2 79
3 53
3 84
4 30
4 85
5 32
5 34
6 37
6 76
6 78
7 15
7 64
8 17
8 60
9 16
9 73
10 36
10 77
11 39
12 18
12 77
12 88
13 26
13 40
13 62
14 25
14 56
15 34
15 83
16 40
17 35
18 33
18 45
19 38
19 83
20 21
20 41
20 97
21 38
22 24
22 85
23 75
23 81
24 40
24 45
25 95
26 65
27 29
27 74
27 97
28 41
28 87
29 46
30 58
30 59
31 53
31 57
31 65
31 72
32 94
33 84
34 99
35 88
36 87
37 48
37 63
39 50
39 63
40 82
42 49
42 54
43 62
43 96
44 66
44 89
46 58
47 51
47 76
47 97
48 86
49 78
49 86
50 64
50 91
51 56
52 67
52 93
53 78
54 80
55 64
55 81
57 59
57 90
58 68
59 63
59 66
60 71
61 67
61 92
63 65
63 94
65 71
68 72
69 79
69 80
70 75
70 89
71 99
73 92
73 93
74 97
74 98
82 90
91 92
95 98
```

### Output

**Reason:** K-fator validado: 100 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 100 vértices, 120 arestas, menor grau: 2
Graus dos vértices: [2, 2, 3, 2, 2, 2, 3, 2, 2, 2, 2, 3, 3, 3, 2, 3, 2, 2, 3, 2, 3, 2, 2, 2, 3, 2, 2, 3, 2, 2, 4, 4, 2, 2, 3, 2, 2, 3, 2, 3, 4, 2, 2, 2, 2, 2, 2, 3, 2, 3, 3, 2, 2, 3, 2, 2, 2, 3, 3, 4, 2, 2, 2, 5, 3, 4, 2, 2, 2, 2, 2, 3, 2, 3, 3, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 4, 2, 2]
Adjacências:
Vértice 0: [11, 30]
Vértice 1: [2, 96]
Vértice 2: [1, 11, 79]
Vértice 3: [53, 84]
Vértice 4: [30, 85]
Vértice 5: [32, 34]
Vértice 6: [37, 76, 78]
Vértice 7: [15, 64]
Vértice 8: [17, 60]
Vértice 9: [16, 73]
Vértice 10: [36, 77]
Vértice 11: [0, 2, 39]
Vértice 12: [18, 77, 88]
Vértice 13: [26, 40, 62]
Vértice 14: [25, 56]
Vértice 15: [7, 34, 83]
Vértice 16: [9, 40]
Vértice 17: [8, 35]
Vértice 18: [12, 33, 45]
Vértice 19: [38, 83]
Vértice 20: [21, 41, 97]
Vértice 21: [20, 38]
Vértice 22: [24, 85]
Vértice 23: [75, 81]
Vértice 24: [22, 40, 45]
Vértice 25: [14, 95]
Vértice 26: [13, 65]
Vértice 27: [29, 74, 97]
Vértice 28: [41, 87]
Vértice 29: [27, 46]
Vértice 30: [0, 4, 58, 59]
Vértice 31: [53, 57, 65, 72]
Vértice 32: [5, 94]
Vértice 33: [18, 84]
Vértice 34: [5, 15, 99]
Vértice 35: [17, 88]
Vértice 36: [10, 87]
Vértice 37: [6, 48, 63]
Vértice 38: [19, 21]
Vértice 39: [11, 50, 63]
Vértice 40: [13, 16, 24, 82]
Vértice 41: [20, 28]
Vértice 42: [49, 54]
Vértice 43: [62, 96]
Vértice 44: [66, 89]
Vértice 45: [18, 24]
Vértice 46: [29, 58]
Vértice 47: [51, 76, 97]
Vértice 48: [37, 86]
Vértice 49: [42, 78, 86]
Vértice 50: [39, 64, 91]
Vértice 51: [47, 56]
Vértice 52: [67, 93]
Vértice 53: [3, 31, 78]
Vértice 54: [42, 80]
Vértice 55: [64, 81]
Vértice 56: [14, 51]
Vértice 57: [31, 59, 90]
Vértice 58: [30, 46, 68]
Vértice 59: [30, 57, 63, 66]
Vértice 60: [8, 71]
Vértice 61: [67, 92]
Vértice 62: [13, 43]
Vértice 63: [37, 39, 59, 65, 94]
Vértice 64: [7, 50, 55]
Vértice 65: [26, 31, 63, 71]
Vértice 66: [44, 59]
Vértice 67: [52, 61]
Vértice 68: [58, 72]
Vértice 69: [79, 80]
Vértice 70: [75, 89]
Vértice 71: [60, 65, 99]
Vértice 72: [31, 68]
Vértice 73: [9, 92, 93]
Vértice 74: [27, 97, 98]
Vértice 75: [23, 70]
Vértice 76: [6, 47]
Vértice 77: [10, 12]
Vértice 78: [6, 49, 53]
Vértice 79: [2, 69]
Vértice 80: [54, 69]
Vértice 81: [23, 55]
Vértice 82: [40, 90]
Vértice 83: [15, 19]
Vértice 84: [3, 33]
Vértice 85: [4, 22]
Vértice 86: [48, 49]
Vértice 87: [28, 36]
Vértice 88: [12, 35]
Vértice 89: [44, 70]
Vértice 90: [57, 82]
Vértice 91: [50, 92]
Vértice 92: [61, 73, 91]
Vértice 93: [52, 73]
Vértice 94: [32, 63]
Vértice 95: [25, 98]
Vértice 96: [1, 43]
Vértice 97: [20, 27, 47, 74]
Vértice 98: [74, 95]
Vértice 99: [34, 71]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 100 vértices, 100 arestas, menor grau: 2
Arestas do fator:
0 - 11
0 - 30
1 - 2
1 - 96
2 - 79
3 - 53
3 - 84
4 - 30
4 - 85
5 - 32
5 - 34
6 - 76
6 - 78
7 - 15
7 - 64
8 - 17
8 - 60
9 - 16
9 - 73
10 - 36
10 - 77
11 - 39
12 - 77
12 - 88
13 - 26
13 - 62
14 - 25
14 - 56
15 - 83
16 - 40
17 - 35
18 - 33
18 - 45
19 - 38
19 - 83
20 - 21
20 - 41
21 - 38
22 - 24
22 - 85
23 - 75
23 - 81
24 - 45
25 - 95
26 - 65
27 - 29
27 - 97
28 - 41
28 - 87
29 - 46
31 - 65
31 - 72
32 - 94
33 - 84
34 - 99
35 - 88
36 - 87
37 - 48
37 - 63
39 - 50
40 - 82
42 - 49
42 - 54
43 - 62
43 - 96
44 - 66
44 - 89
46 - 58
47 - 51
47 - 76
48 - 86
49 - 86
50 - 91
51 - 56
52 - 67
52 - 93
53 - 78
54 - 80
55 - 64
55 - 81
57 - 59
57 - 90
58 - 68
59 - 66
60 - 71
61 - 67
61 - 92
63 - 94
68 - 72
69 - 79
69 - 80
70 - 75
70 - 89
71 - 99
73 - 93
74 - 97
74 - 98
82 - 90
91 - 92
95 - 98
```

---

## Test 45: test_case_045_k2_n100.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 100

**K-Factor:** 2

**Execution Time:** 25.000 ms

**Edges:**

```
0 11
0 26
1 13
1 68
2 24
2 53
2 61
3 39
3 87
4 73
4 80
4 88
5 82
5 93
6 45
6 98
7 85
7 88
7 90
8 73
8 99
9 49
9 90
10 37
10 52
11 59
12 16
12 50
13 55
14 65
14 80
14 89
15 16
15 35
17 33
17 55
17 66
18 22
18 41
19 52
19 53
19 74
20 37
20 47
21 67
21 95
22 31
22 58
23 50
23 95
24 71
24 81
25 32
25 53
26 52
26 66
26 71
27 34
27 40
28 34
28 42
29 56
29 84
30 84
30 91
31 74
32 38
33 46
35 57
36 63
36 98
38 69
39 59
40 48
40 56
40 58
41 66
41 84
42 87
43 68
43 75
43 77
44 75
44 85
45 69
45 78
46 51
47 79
48 62
48 94
49 64
51 93
52 88
54 56
54 79
57 64
58 92
60 78
60 86
60 96
61 67
61 73
62 67
63 76
64 99
65 89
68 96
69 94
70 81
70 90
71 72
72 97
76 83
77 92
78 89
82 97
83 86
86 98
91 99
93 94
```

### Output

**Reason:** K-fator validado: 100 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 100 vértices, 120 arestas, menor grau: 2
Graus dos vértices: [2, 2, 3, 2, 3, 2, 2, 3, 2, 2, 2, 2, 2, 2, 3, 2, 2, 3, 2, 3, 2, 2, 3, 2, 3, 2, 4, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 3, 2, 3, 2, 3, 2, 2, 3, 2, 2, 2, 4, 3, 2, 2, 3, 2, 3, 2, 3, 3, 2, 2, 3, 2, 3, 3, 3, 3, 2, 3, 2, 3, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 3, 2, 3, 2, 3, 3, 3, 2, 2, 3, 3, 2, 2, 2, 3, 3]
Adjacências:
Vértice 0: [11, 26]
Vértice 1: [13, 68]
Vértice 2: [24, 53, 61]
Vértice 3: [39, 87]
Vértice 4: [73, 80, 88]
Vértice 5: [82, 93]
Vértice 6: [45, 98]
Vértice 7: [85, 88, 90]
Vértice 8: [73, 99]
Vértice 9: [49, 90]
Vértice 10: [37, 52]
Vértice 11: [0, 59]
Vértice 12: [16, 50]
Vértice 13: [1, 55]
Vértice 14: [65, 80, 89]
Vértice 15: [16, 35]
Vértice 16: [12, 15]
Vértice 17: [33, 55, 66]
Vértice 18: [22, 41]
Vértice 19: [52, 53, 74]
Vértice 20: [37, 47]
Vértice 21: [67, 95]
Vértice 22: [18, 31, 58]
Vértice 23: [50, 95]
Vértice 24: [2, 71, 81]
Vértice 25: [32, 53]
Vértice 26: [0, 52, 66, 71]
Vértice 27: [34, 40]
Vértice 28: [34, 42]
Vértice 29: [56, 84]
Vértice 30: [84, 91]
Vértice 31: [22, 74]
Vértice 32: [25, 38]
Vértice 33: [17, 46]
Vértice 34: [27, 28]
Vértice 35: [15, 57]
Vértice 36: [63, 98]
Vértice 37: [10, 20]
Vértice 38: [32, 69]
Vértice 39: [3, 59]
Vértice 40: [27, 48, 56, 58]
Vértice 41: [18, 66, 84]
Vértice 42: [28, 87]
Vértice 43: [68, 75, 77]
Vértice 44: [75, 85]
Vértice 45: [6, 69, 78]
Vértice 46: [33, 51]
Vértice 47: [20, 79]
Vértice 48: [40, 62, 94]
Vértice 49: [9, 64]
Vértice 50: [12, 23]
Vértice 51: [46, 93]
Vértice 52: [10, 19, 26, 88]
Vértice 53: [2, 19, 25]
Vértice 54: [56, 79]
Vértice 55: [13, 17]
Vértice 56: [29, 40, 54]
Vértice 57: [35, 64]
Vértice 58: [22, 40, 92]
Vértice 59: [11, 39]
Vértice 60: [78, 86, 96]
Vértice 61: [2, 67, 73]
Vértice 62: [48, 67]
Vértice 63: [36, 76]
Vértice 64: [49, 57, 99]
Vértice 65: [14, 89]
Vértice 66: [17, 26, 41]
Vértice 67: [21, 61, 62]
Vértice 68: [1, 43, 96]
Vértice 69: [38, 45, 94]
Vértice 70: [81, 90]
Vértice 71: [24, 26, 72]
Vértice 72: [71, 97]
Vértice 73: [4, 8, 61]
Vértice 74: [19, 31]
Vértice 75: [43, 44]
Vértice 76: [63, 83]
Vértice 77: [43, 92]
Vértice 78: [45, 60, 89]
Vértice 79: [47, 54]
Vértice 80: [4, 14]
Vértice 81: [24, 70]
Vértice 82: [5, 97]
Vértice 83: [76, 86]
Vértice 84: [29, 30, 41]
Vértice 85: [7, 44]
Vértice 86: [60, 83, 98]
Vértice 87: [3, 42]
Vértice 88: [4, 7, 52]
Vértice 89: [14, 65, 78]
Vértice 90: [7, 9, 70]
Vértice 91: [30, 99]
Vértice 92: [58, 77]
Vértice 93: [5, 51, 94]
Vértice 94: [48, 69, 93]
Vértice 95: [21, 23]
Vértice 96: [60, 68]
Vértice 97: [72, 82]
Vértice 98: [6, 36, 86]
Vértice 99: [8, 64, 91]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 100 vértices, 100 arestas, menor grau: 2
Arestas do fator:
0 - 11
0 - 26
1 - 13
1 - 68
2 - 53
2 - 61
3 - 39
3 - 87
4 - 80
4 - 88
5 - 82
5 - 93
6 - 45
6 - 98
7 - 85
7 - 88
8 - 73
8 - 99
9 - 49
9 - 90
10 - 37
10 - 52
11 - 59
12 - 16
12 - 50
13 - 55
14 - 65
14 - 80
15 - 16
15 - 35
17 - 33
17 - 55
18 - 22
18 - 41
19 - 52
19 - 74
20 - 37
20 - 47
21 - 67
21 - 95
22 - 31
23 - 50
23 - 95
24 - 71
24 - 81
25 - 32
25 - 53
26 - 66
27 - 34
27 - 40
28 - 34
28 - 42
29 - 56
29 - 84
30 - 84
30 - 91
31 - 74
32 - 38
33 - 46
35 - 57
36 - 63
36 - 98
38 - 69
39 - 59
40 - 58
41 - 66
42 - 87
43 - 75
43 - 77
44 - 75
44 - 85
45 - 78
46 - 51
47 - 79
48 - 62
48 - 94
49 - 64
51 - 93
54 - 56
54 - 79
57 - 64
58 - 92
60 - 86
60 - 96
61 - 73
62 - 67
63 - 76
65 - 89
68 - 96
69 - 94
70 - 81
70 - 90
71 - 72
72 - 97
76 - 83
77 - 92
78 - 89
82 - 97
83 - 86
91 - 99
```

---

## Test 46: test_case_046_k2_n100.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 100

**K-Factor:** 2

**Execution Time:** 25.000 ms

**Edges:**

```
0 58
0 66
1 2
1 23
1 25
2 7
3 42
3 49
4 11
4 59
5 37
5 77
6 8
6 39
7 19
8 64
9 57
9 91
10 77
10 79
11 22
11 51
12 13
12 52
12 85
13 30
14 42
14 95
14 97
15 73
15 85
16 67
16 75
17 23
17 34
17 63
17 94
18 37
18 80
19 68
20 60
20 93
20 98
21 81
21 84
22 24
22 43
23 25
23 91
24 31
24 34
24 61
26 36
26 62
27 29
27 46
28 38
28 96
29 57
30 47
31 35
32 47
32 56
32 91
33 78
33 88
34 52
35 71
36 96
37 72
38 71
39 83
40 62
40 93
41 53
41 61
41 63
41 65
42 95
43 75
43 94
44 89
44 93
45 51
45 54
46 98
48 50
48 69
49 76
50 80
51 54
51 84
53 59
54 97
55 70
55 99
56 79
58 82
58 86
59 64
60 66
61 78
63 70
64 65
65 94
67 69
67 72
68 99
69 73
72 92
74 76
74 83
78 81
81 86
82 87
82 88
85 90
86 96
87 92
89 90
```

### Output

**Reason:** K-fator validado: 100 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 100 vértices, 120 arestas, menor grau: 2
Graus dos vértices: [2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 2, 3, 2, 2, 4, 2, 2, 3, 2, 3, 4, 4, 2, 2, 2, 2, 2, 2, 2, 3, 2, 3, 2, 2, 3, 2, 2, 2, 4, 3, 3, 2, 2, 2, 2, 2, 2, 2, 4, 2, 2, 3, 2, 2, 2, 3, 3, 2, 3, 2, 3, 3, 3, 2, 3, 2, 3, 2, 2, 3, 2, 2, 2, 2, 2, 3, 2, 2, 3, 3, 2, 2, 3, 3, 2, 2, 2, 2, 3, 2, 3, 3, 2, 3, 2, 2, 2]
Adjacências:
Vértice 0: [58, 66]
Vértice 1: [2, 23, 25]
Vértice 2: [1, 7]
Vértice 3: [42, 49]
Vértice 4: [11, 59]
Vértice 5: [37, 77]
Vértice 6: [8, 39]
Vértice 7: [2, 19]
Vértice 8: [6, 64]
Vértice 9: [57, 91]
Vértice 10: [77, 79]
Vértice 11: [4, 22, 51]
Vértice 12: [13, 52, 85]
Vértice 13: [12, 30]
Vértice 14: [42, 95, 97]
Vértice 15: [73, 85]
Vértice 16: [67, 75]
Vértice 17: [23, 34, 63, 94]
Vértice 18: [37, 80]
Vértice 19: [7, 68]
Vértice 20: [60, 93, 98]
Vértice 21: [81, 84]
Vértice 22: [11, 24, 43]
Vértice 23: [1, 17, 25, 91]
Vértice 24: [22, 31, 34, 61]
Vértice 25: [1, 23]
Vértice 26: [36, 62]
Vértice 27: [29, 46]
Vértice 28: [38, 96]
Vértice 29: [27, 57]
Vértice 30: [13, 47]
Vértice 31: [24, 35]
Vértice 32: [47, 56, 91]
Vértice 33: [78, 88]
Vértice 34: [17, 24, 52]
Vértice 35: [31, 71]
Vértice 36: [26, 96]
Vértice 37: [5, 18, 72]
Vértice 38: [28, 71]
Vértice 39: [6, 83]
Vértice 40: [62, 93]
Vértice 41: [53, 61, 63, 65]
Vértice 42: [3, 14, 95]
Vértice 43: [22, 75, 94]
Vértice 44: [89, 93]
Vértice 45: [51, 54]
Vértice 46: [27, 98]
Vértice 47: [30, 32]
Vértice 48: [50, 69]
Vértice 49: [3, 76]
Vértice 50: [48, 80]
Vértice 51: [11, 45, 54, 84]
Vértice 52: [12, 34]
Vértice 53: [41, 59]
Vértice 54: [45, 51, 97]
Vértice 55: [70, 99]
Vértice 56: [32, 79]
Vértice 57: [9, 29]
Vértice 58: [0, 82, 86]
Vértice 59: [4, 53, 64]
Vértice 60: [20, 66]
Vértice 61: [24, 41, 78]
Vértice 62: [26, 40]
Vértice 63: [17, 41, 70]
Vértice 64: [8, 59, 65]
Vértice 65: [41, 64, 94]
Vértice 66: [0, 60]
Vértice 67: [16, 69, 72]
Vértice 68: [19, 99]
Vértice 69: [48, 67, 73]
Vértice 70: [55, 63]
Vértice 71: [35, 38]
Vértice 72: [37, 67, 92]
Vértice 73: [15, 69]
Vértice 74: [76, 83]
Vértice 75: [16, 43]
Vértice 76: [49, 74]
Vértice 77: [5, 10]
Vértice 78: [33, 61, 81]
Vértice 79: [10, 56]
Vértice 80: [18, 50]
Vértice 81: [21, 78, 86]
Vértice 82: [58, 87, 88]
Vértice 83: [39, 74]
Vértice 84: [21, 51]
Vértice 85: [12, 15, 90]
Vértice 86: [58, 81, 96]
Vértice 87: [82, 92]
Vértice 88: [33, 82]
Vértice 89: [44, 90]
Vértice 90: [85, 89]
Vértice 91: [9, 23, 32]
Vértice 92: [72, 87]
Vértice 93: [20, 40, 44]
Vértice 94: [17, 43, 65]
Vértice 95: [14, 42]
Vértice 96: [28, 36, 86]
Vértice 97: [14, 54]
Vértice 98: [20, 46]
Vértice 99: [55, 68]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 100 vértices, 100 arestas, menor grau: 2
Arestas do fator:
0 - 58
0 - 66
1 - 2
1 - 25
2 - 7
3 - 42
3 - 49
4 - 11
4 - 59
5 - 37
5 - 77
6 - 8
6 - 39
7 - 19
8 - 64
9 - 57
9 - 91
10 - 77
10 - 79
11 - 22
12 - 13
12 - 52
13 - 30
14 - 95
14 - 97
15 - 73
15 - 85
16 - 67
16 - 75
17 - 34
17 - 63
18 - 37
18 - 80
19 - 68
20 - 60
20 - 98
21 - 81
21 - 84
22 - 24
23 - 25
23 - 91
24 - 31
26 - 36
26 - 62
27 - 29
27 - 46
28 - 38
28 - 96
29 - 57
30 - 47
31 - 35
32 - 47
32 - 56
33 - 78
33 - 88
34 - 52
35 - 71
36 - 96
38 - 71
39 - 83
40 - 62
40 - 93
41 - 53
41 - 61
42 - 95
43 - 75
43 - 94
44 - 89
44 - 93
45 - 51
45 - 54
46 - 98
48 - 50
48 - 69
49 - 76
50 - 80
51 - 84
53 - 59
54 - 97
55 - 70
55 - 99
56 - 79
58 - 86
60 - 66
61 - 78
63 - 70
64 - 65
65 - 94
67 - 72
68 - 99
69 - 73
72 - 92
74 - 76
74 - 83
81 - 86
82 - 87
82 - 88
85 - 90
87 - 92
89 - 90
```

---

## Test 47: test_case_047_k2_n100.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 100

**K-Factor:** 2

**Execution Time:** 24.000 ms

**Edges:**

```
0 28
0 31
0 33
1 73
1 97
2 31
2 78
2 96
3 35
3 86
4 23
4 36
5 50
5 87
6 44
6 69
7 15
7 95
8 56
8 77
9 10
9 93
10 79
10 87
11 56
11 85
12 32
12 81
13 66
13 99
14 88
14 96
15 44
15 59
16 41
16 93
16 96
17 61
17 72
17 83
17 98
18 29
18 90
19 58
19 61
20 39
20 51
21 78
21 84
22 68
22 69
23 45
23 52
24 40
24 70
25 88
25 92
26 76
26 84
27 48
27 60
28 47
28 72
29 31
29 70
30 49
30 57
32 35
33 49
34 42
34 57
36 86
37 47
37 82
38 42
38 59
38 74
39 59
40 98
41 90
43 62
43 75
44 58
44 67
45 54
46 83
46 95
47 53
48 57
48 68
48 75
50 55
50 67
51 64
52 65
52 79
53 60
53 89
54 69
54 71
55 91
58 89
62 91
63 67
63 76
64 80
65 66
68 85
69 84
71 87
73 74
77 98
80 82
81 93
82 93
82 98
83 97
86 92
92 94
94 99
```

### Output

**Reason:** K-fator validado: 100 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 100 vértices, 120 arestas, menor grau: 2
Graus dos vértices: [3, 2, 3, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 3, 3, 4, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 3, 3, 2, 3, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 4, 2, 2, 3, 4, 2, 3, 2, 3, 3, 3, 2, 2, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 3, 3, 4, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 3, 3, 2, 3, 3, 2, 2, 2, 2, 3, 4, 2, 2, 3, 2, 4, 2]
Adjacências:
Vértice 0: [28, 31, 33]
Vértice 1: [73, 97]
Vértice 2: [31, 78, 96]
Vértice 3: [35, 86]
Vértice 4: [23, 36]
Vértice 5: [50, 87]
Vértice 6: [44, 69]
Vértice 7: [15, 95]
Vértice 8: [56, 77]
Vértice 9: [10, 93]
Vértice 10: [9, 79, 87]
Vértice 11: [56, 85]
Vértice 12: [32, 81]
Vértice 13: [66, 99]
Vértice 14: [88, 96]
Vértice 15: [7, 44, 59]
Vértice 16: [41, 93, 96]
Vértice 17: [61, 72, 83, 98]
Vértice 18: [29, 90]
Vértice 19: [58, 61]
Vértice 20: [39, 51]
Vértice 21: [78, 84]
Vértice 22: [68, 69]
Vértice 23: [4, 45, 52]
Vértice 24: [40, 70]
Vértice 25: [88, 92]
Vértice 26: [76, 84]
Vértice 27: [48, 60]
Vértice 28: [0, 47, 72]
Vértice 29: [18, 31, 70]
Vértice 30: [49, 57]
Vértice 31: [0, 2, 29]
Vértice 32: [12, 35]
Vértice 33: [0, 49]
Vértice 34: [42, 57]
Vértice 35: [3, 32]
Vértice 36: [4, 86]
Vértice 37: [47, 82]
Vértice 38: [42, 59, 74]
Vértice 39: [20, 59]
Vértice 40: [24, 98]
Vértice 41: [16, 90]
Vértice 42: [34, 38]
Vértice 43: [62, 75]
Vértice 44: [6, 15, 58, 67]
Vértice 45: [23, 54]
Vértice 46: [83, 95]
Vértice 47: [28, 37, 53]
Vértice 48: [27, 57, 68, 75]
Vértice 49: [30, 33]
Vértice 50: [5, 55, 67]
Vértice 51: [20, 64]
Vértice 52: [23, 65, 79]
Vértice 53: [47, 60, 89]
Vértice 54: [45, 69, 71]
Vértice 55: [50, 91]
Vértice 56: [8, 11]
Vértice 57: [30, 34, 48]
Vértice 58: [19, 44, 89]
Vértice 59: [15, 38, 39]
Vértice 60: [27, 53]
Vértice 61: [17, 19]
Vértice 62: [43, 91]
Vértice 63: [67, 76]
Vértice 64: [51, 80]
Vértice 65: [52, 66]
Vértice 66: [13, 65]
Vértice 67: [44, 50, 63]
Vértice 68: [22, 48, 85]
Vértice 69: [6, 22, 54, 84]
Vértice 70: [24, 29]
Vértice 71: [54, 87]
Vértice 72: [17, 28]
Vértice 73: [1, 74]
Vértice 74: [38, 73]
Vértice 75: [43, 48]
Vértice 76: [26, 63]
Vértice 77: [8, 98]
Vértice 78: [2, 21]
Vértice 79: [10, 52]
Vértice 80: [64, 82]
Vértice 81: [12, 93]
Vértice 82: [37, 80, 93, 98]
Vértice 83: [17, 46, 97]
Vértice 84: [21, 26, 69]
Vértice 85: [11, 68]
Vértice 86: [3, 36, 92]
Vértice 87: [5, 10, 71]
Vértice 88: [14, 25]
Vértice 89: [53, 58]
Vértice 90: [18, 41]
Vértice 91: [55, 62]
Vértice 92: [25, 86, 94]
Vértice 93: [9, 16, 81, 82]
Vértice 94: [92, 99]
Vértice 95: [7, 46]
Vértice 96: [2, 14, 16]
Vértice 97: [1, 83]
Vértice 98: [17, 40, 77, 82]
Vértice 99: [13, 94]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 100 vértices, 100 arestas, menor grau: 2
Arestas do fator:
0 - 31
0 - 33
1 - 73
1 - 97
2 - 31
2 - 78
3 - 35
3 - 86
4 - 23
4 - 36
5 - 50
5 - 87
6 - 44
6 - 69
7 - 15
7 - 95
8 - 56
8 - 77
9 - 10
9 - 93
10 - 79
11 - 56
11 - 85
12 - 32
12 - 81
13 - 66
13 - 99
14 - 88
14 - 96
15 - 59
16 - 41
16 - 96
17 - 61
17 - 72
18 - 29
18 - 90
19 - 58
19 - 61
20 - 39
20 - 51
21 - 78
21 - 84
22 - 68
22 - 69
23 - 45
24 - 40
24 - 70
25 - 88
25 - 92
26 - 76
26 - 84
27 - 48
27 - 60
28 - 47
28 - 72
29 - 70
30 - 49
30 - 57
32 - 35
33 - 49
34 - 42
34 - 57
36 - 86
37 - 47
37 - 82
38 - 42
38 - 74
39 - 59
40 - 98
41 - 90
43 - 62
43 - 75
44 - 67
45 - 54
46 - 83
46 - 95
48 - 75
50 - 55
51 - 64
52 - 65
52 - 79
53 - 60
53 - 89
54 - 71
55 - 91
58 - 89
62 - 91
63 - 67
63 - 76
64 - 80
65 - 66
68 - 85
71 - 87
73 - 74
77 - 98
80 - 82
81 - 93
83 - 97
92 - 94
94 - 99
```

---

## Test 48: test_case_048_k2_n100.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 100

**K-Factor:** 2

**Execution Time:** 24.000 ms

**Edges:**

```
0 48
0 90
1 27
1 32
1 60
2 30
2 78
3 72
3 98
4 14
4 84
5 31
5 51
6 31
6 85
7 17
7 27
8 12
8 26
9 46
9 61
10 50
10 79
11 47
11 68
12 76
12 92
13 23
13 60
14 92
15 66
15 95
16 63
16 83
17 64
18 28
18 38
19 35
19 39
20 33
20 62
21 50
21 96
22 59
22 67
23 83
24 35
24 92
24 94
25 32
25 93
26 30
26 50
26 61
27 69
27 71
28 88
29 56
29 69
30 70
31 89
33 39
33 97
34 54
34 66
36 48
36 52
36 90
37 64
37 82
38 42
38 89
39 75
40 41
40 82
41 89
41 99
42 67
42 97
43 68
43 74
44 54
44 61
45 48
45 71
45 83
46 62
46 65
47 77
49 52
49 75
51 56
53 78
53 84
55 91
55 93
57 85
57 94
58 74
58 80
59 63
59 68
59 80
61 96
63 86
65 91
65 95
70 77
70 98
71 96
72 99
73 86
73 87
75 97
76 94
77 90
79 81
81 87
85 92
88 99
```

### Output

**Reason:** K-fator validado: 100 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 100 vértices, 120 arestas, menor grau: 2
Graus dos vértices: [2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 4, 4, 2, 2, 3, 3, 2, 3, 2, 2, 3, 2, 3, 3, 2, 3, 3, 2, 2, 3, 3, 2, 3, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 4, 2, 4, 2, 3, 2, 3, 2, 2, 3, 2, 3, 3, 2, 2, 2, 3, 2, 3, 2, 2, 2, 2, 2, 3, 2, 3, 2, 2, 2, 3, 3, 2, 4, 2, 3, 2, 3, 3, 2, 3]
Adjacências:
Vértice 0: [48, 90]
Vértice 1: [27, 32, 60]
Vértice 2: [30, 78]
Vértice 3: [72, 98]
Vértice 4: [14, 84]
Vértice 5: [31, 51]
Vértice 6: [31, 85]
Vértice 7: [17, 27]
Vértice 8: [12, 26]
Vértice 9: [46, 61]
Vértice 10: [50, 79]
Vértice 11: [47, 68]
Vértice 12: [8, 76, 92]
Vértice 13: [23, 60]
Vértice 14: [4, 92]
Vértice 15: [66, 95]
Vértice 16: [63, 83]
Vértice 17: [7, 64]
Vértice 18: [28, 38]
Vértice 19: [35, 39]
Vértice 20: [33, 62]
Vértice 21: [50, 96]
Vértice 22: [59, 67]
Vértice 23: [13, 83]
Vértice 24: [35, 92, 94]
Vértice 25: [32, 93]
Vértice 26: [8, 30, 50, 61]
Vértice 27: [1, 7, 69, 71]
Vértice 28: [18, 88]
Vértice 29: [56, 69]
Vértice 30: [2, 26, 70]
Vértice 31: [5, 6, 89]
Vértice 32: [1, 25]
Vértice 33: [20, 39, 97]
Vértice 34: [54, 66]
Vértice 35: [19, 24]
Vértice 36: [48, 52, 90]
Vértice 37: [64, 82]
Vértice 38: [18, 42, 89]
Vértice 39: [19, 33, 75]
Vértice 40: [41, 82]
Vértice 41: [40, 89, 99]
Vértice 42: [38, 67, 97]
Vértice 43: [68, 74]
Vértice 44: [54, 61]
Vértice 45: [48, 71, 83]
Vértice 46: [9, 62, 65]
Vértice 47: [11, 77]
Vértice 48: [0, 36, 45]
Vértice 49: [52, 75]
Vértice 50: [10, 21, 26]
Vértice 51: [5, 56]
Vértice 52: [36, 49]
Vértice 53: [78, 84]
Vértice 54: [34, 44]
Vértice 55: [91, 93]
Vértice 56: [29, 51]
Vértice 57: [85, 94]
Vértice 58: [74, 80]
Vértice 59: [22, 63, 68, 80]
Vértice 60: [1, 13]
Vértice 61: [9, 26, 44, 96]
Vértice 62: [20, 46]
Vértice 63: [16, 59, 86]
Vértice 64: [17, 37]
Vértice 65: [46, 91, 95]
Vértice 66: [15, 34]
Vértice 67: [22, 42]
Vértice 68: [11, 43, 59]
Vértice 69: [27, 29]
Vértice 70: [30, 77, 98]
Vértice 71: [27, 45, 96]
Vértice 72: [3, 99]
Vértice 73: [86, 87]
Vértice 74: [43, 58]
Vértice 75: [39, 49, 97]
Vértice 76: [12, 94]
Vértice 77: [47, 70, 90]
Vértice 78: [2, 53]
Vértice 79: [10, 81]
Vértice 80: [58, 59]
Vértice 81: [79, 87]
Vértice 82: [37, 40]
Vértice 83: [16, 23, 45]
Vértice 84: [4, 53]
Vértice 85: [6, 57, 92]
Vértice 86: [63, 73]
Vértice 87: [73, 81]
Vértice 88: [28, 99]
Vértice 89: [31, 38, 41]
Vértice 90: [0, 36, 77]
Vértice 91: [55, 65]
Vértice 92: [12, 14, 24, 85]
Vértice 93: [25, 55]
Vértice 94: [24, 57, 76]
Vértice 95: [15, 65]
Vértice 96: [21, 61, 71]
Vértice 97: [33, 42, 75]
Vértice 98: [3, 70]
Vértice 99: [41, 72, 88]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 100 vértices, 100 arestas, menor grau: 2
Arestas do fator:
0 - 48
0 - 90
1 - 32
1 - 60
2 - 30
2 - 78
3 - 72
3 - 98
4 - 14
4 - 84
5 - 31
5 - 51
6 - 31
6 - 85
7 - 17
7 - 27
8 - 12
8 - 26
9 - 46
9 - 61
10 - 50
10 - 79
11 - 47
11 - 68
12 - 76
13 - 23
13 - 60
14 - 92
15 - 66
15 - 95
16 - 63
16 - 83
17 - 64
18 - 28
18 - 38
19 - 35
19 - 39
20 - 33
20 - 62
21 - 50
21 - 96
22 - 59
22 - 67
23 - 83
24 - 35
24 - 92
25 - 32
25 - 93
26 - 30
27 - 69
28 - 88
29 - 56
29 - 69
33 - 39
34 - 54
34 - 66
36 - 52
36 - 90
37 - 64
37 - 82
38 - 89
40 - 41
40 - 82
41 - 89
42 - 67
42 - 97
43 - 68
43 - 74
44 - 54
44 - 61
45 - 48
45 - 71
46 - 62
47 - 77
49 - 52
49 - 75
51 - 56
53 - 78
53 - 84
55 - 91
55 - 93
57 - 85
57 - 94
58 - 74
58 - 80
59 - 80
63 - 86
65 - 91
65 - 95
70 - 77
70 - 98
71 - 96
72 - 99
73 - 86
73 - 87
75 - 97
76 - 94
79 - 81
81 - 87
88 - 99
```

---

## Test 49: test_case_049_k2_n100.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 100

**K-Factor:** 2

**Execution Time:** 24.000 ms

**Edges:**

```
0 77
0 96
1 61
1 75
1 81
2 18
2 33
3 41
3 87
4 11
4 83
4 93
5 29
5 34
5 52
5 72
6 10
6 27
7 12
7 60
7 99
8 94
8 96
9 49
9 54
9 87
10 63
10 81
10 83
11 68
11 69
12 67
12 84
13 49
13 71
14 54
14 94
15 59
15 81
16 35
16 82
17 67
17 69
18 28
19 25
19 37
20 55
20 84
21 45
21 58
21 89
22 76
22 89
23 50
23 78
24 44
24 59
25 42
26 40
26 47
27 55
27 88
28 72
28 89
29 42
29 48
30 50
30 75
31 63
31 91
32 43
32 62
33 70
34 41
34 56
35 39
35 69
36 89
36 92
37 53
38 51
38 87
38 90
39 95
40 97
42 72
43 86
44 80
45 67
46 64
46 82
47 98
48 51
48 70
48 91
51 64
52 98
53 85
55 82
56 68
57 77
57 79
58 73
60 72
60 97
60 99
61 95
62 73
63 86
65 66
65 90
66 92
70 74
71 78
74 85
76 80
79 93
83 88
83 97
87 88
```

### Output

**Reason:** K-fator validado: 100 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 100 vértices, 120 arestas, menor grau: 2
Graus dos vértices: [2, 3, 2, 2, 3, 4, 2, 3, 2, 3, 4, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 3, 3, 3, 2, 2, 2, 2, 3, 3, 2, 2, 3, 2, 2, 2, 3, 2, 2, 2, 2, 2, 4, 2, 2, 3, 2, 2, 2, 3, 2, 2, 2, 2, 4, 2, 2, 3, 2, 2, 2, 3, 2, 3, 3, 2, 4, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 4, 2, 2, 2, 4, 3, 4, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2]
Adjacências:
Vértice 0: [77, 96]
Vértice 1: [61, 75, 81]
Vértice 2: [18, 33]
Vértice 3: [41, 87]
Vértice 4: [11, 83, 93]
Vértice 5: [29, 34, 52, 72]
Vértice 6: [10, 27]
Vértice 7: [12, 60, 99]
Vértice 8: [94, 96]
Vértice 9: [49, 54, 87]
Vértice 10: [6, 63, 81, 83]
Vértice 11: [4, 68, 69]
Vértice 12: [7, 67, 84]
Vértice 13: [49, 71]
Vértice 14: [54, 94]
Vértice 15: [59, 81]
Vértice 16: [35, 82]
Vértice 17: [67, 69]
Vértice 18: [2, 28]
Vértice 19: [25, 37]
Vértice 20: [55, 84]
Vértice 21: [45, 58, 89]
Vértice 22: [76, 89]
Vértice 23: [50, 78]
Vértice 24: [44, 59]
Vértice 25: [19, 42]
Vértice 26: [40, 47]
Vértice 27: [6, 55, 88]
Vértice 28: [18, 72, 89]
Vértice 29: [5, 42, 48]
Vértice 30: [50, 75]
Vértice 31: [63, 91]
Vértice 32: [43, 62]
Vértice 33: [2, 70]
Vértice 34: [5, 41, 56]
Vértice 35: [16, 39, 69]
Vértice 36: [89, 92]
Vértice 37: [19, 53]
Vértice 38: [51, 87, 90]
Vértice 39: [35, 95]
Vértice 40: [26, 97]
Vértice 41: [3, 34]
Vértice 42: [25, 29, 72]
Vértice 43: [32, 86]
Vértice 44: [24, 80]
Vértice 45: [21, 67]
Vértice 46: [64, 82]
Vértice 47: [26, 98]
Vértice 48: [29, 51, 70, 91]
Vértice 49: [9, 13]
Vértice 50: [23, 30]
Vértice 51: [38, 48, 64]
Vértice 52: [5, 98]
Vértice 53: [37, 85]
Vértice 54: [9, 14]
Vértice 55: [20, 27, 82]
Vértice 56: [34, 68]
Vértice 57: [77, 79]
Vértice 58: [21, 73]
Vértice 59: [15, 24]
Vértice 60: [7, 72, 97, 99]
Vértice 61: [1, 95]
Vértice 62: [32, 73]
Vértice 63: [10, 31, 86]
Vértice 64: [46, 51]
Vértice 65: [66, 90]
Vértice 66: [65, 92]
Vértice 67: [12, 17, 45]
Vértice 68: [11, 56]
Vértice 69: [11, 17, 35]
Vértice 70: [33, 48, 74]
Vértice 71: [13, 78]
Vértice 72: [5, 28, 42, 60]
Vértice 73: [58, 62]
Vértice 74: [70, 85]
Vértice 75: [1, 30]
Vértice 76: [22, 80]
Vértice 77: [0, 57]
Vértice 78: [23, 71]
Vértice 79: [57, 93]
Vértice 80: [44, 76]
Vértice 81: [1, 10, 15]
Vértice 82: [16, 46, 55]
Vértice 83: [4, 10, 88, 97]
Vértice 84: [12, 20]
Vértice 85: [53, 74]
Vértice 86: [43, 63]
Vértice 87: [3, 9, 38, 88]
Vértice 88: [27, 83, 87]
Vértice 89: [21, 22, 28, 36]
Vértice 90: [38, 65]
Vértice 91: [31, 48]
Vértice 92: [36, 66]
Vértice 93: [4, 79]
Vértice 94: [8, 14]
Vértice 95: [39, 61]
Vértice 96: [0, 8]
Vértice 97: [40, 60, 83]
Vértice 98: [47, 52]
Vértice 99: [7, 60]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 100 vértices, 100 arestas, menor grau: 2
Arestas do fator:
0 - 77
0 - 96
1 - 61
1 - 75
2 - 18
2 - 33
3 - 41
3 - 87
4 - 83
4 - 93
5 - 52
5 - 72
6 - 10
6 - 27
7 - 12
7 - 99
8 - 94
8 - 96
9 - 49
9 - 54
10 - 81
11 - 68
11 - 69
12 - 84
13 - 49
13 - 71
14 - 54
14 - 94
15 - 59
15 - 81
16 - 35
16 - 82
17 - 67
17 - 69
18 - 28
19 - 25
19 - 37
20 - 55
20 - 84
21 - 45
21 - 58
22 - 76
22 - 89
23 - 50
23 - 78
24 - 44
24 - 59
25 - 42
26 - 40
26 - 47
27 - 55
28 - 72
29 - 42
29 - 48
30 - 50
30 - 75
31 - 63
31 - 91
32 - 43
32 - 62
33 - 70
34 - 41
34 - 56
35 - 39
36 - 89
36 - 92
37 - 53
38 - 51
38 - 90
39 - 95
40 - 97
43 - 86
44 - 80
45 - 67
46 - 64
46 - 82
47 - 98
48 - 91
51 - 64
52 - 98
53 - 85
56 - 68
57 - 77
57 - 79
58 - 73
60 - 97
60 - 99
61 - 95
62 - 73
63 - 86
65 - 66
65 - 90
66 - 92
70 - 74
71 - 78
74 - 85
76 - 80
79 - 93
83 - 88
87 - 88
```

---

## Test 50: test_case_050_k2_n100.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 100

**K-Factor:** 2

**Execution Time:** 24.000 ms

**Edges:**

```
0 19
0 47
0 50
1 63
1 68
2 26
2 40
3 34
3 41
4 22
4 84
5 59
5 80
6 12
6 44
7 78
7 88
8 18
8 67
8 82
9 38
9 46
9 50
10 17
10 64
11 27
11 70
12 55
13 14
13 58
13 61
14 76
15 45
15 91
16 77
16 85
17 21
17 38
17 83
18 50
18 75
19 28
20 38
20 99
21 36
21 55
21 58
22 40
23 87
23 92
24 27
24 60
25 36
25 74
25 78
26 75
28 73
29 55
29 89
30 86
30 99
31 32
31 33
31 48
32 66
32 85
33 88
34 38
34 57
34 63
35 53
35 60
35 96
37 70
37 81
38 61
39 80
39 91
41 90
42 48
42 56
42 69
42 79
42 83
43 89
43 90
44 64
45 97
46 67
46 94
47 92
48 51
48 87
49 69
49 86
51 58
52 79
52 97
53 71
53 95
54 56
54 87
55 83
56 95
57 62
59 81
61 94
62 98
63 65
63 76
65 93
66 93
68 74
71 79
72 78
72 84
73 82
76 77
80 92
96 98
```

### Output

**Reason:** K-fator validado: 100 arestas, todos os graus iguais a 2

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 100 vértices, 120 arestas, menor grau: 2
Graus dos vértices: [3, 2, 2, 2, 2, 2, 2, 2, 3, 3, 2, 2, 2, 3, 2, 2, 2, 4, 3, 2, 2, 4, 2, 2, 2, 3, 2, 2, 2, 2, 2, 3, 3, 2, 4, 3, 2, 2, 5, 2, 2, 2, 5, 2, 2, 2, 3, 2, 4, 2, 3, 2, 2, 3, 2, 4, 3, 2, 3, 2, 2, 3, 2, 4, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 3, 3, 3, 2, 2, 3, 2, 2, 2, 3, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2]
Adjacências:
Vértice 0: [19, 47, 50]
Vértice 1: [63, 68]
Vértice 2: [26, 40]
Vértice 3: [34, 41]
Vértice 4: [22, 84]
Vértice 5: [59, 80]
Vértice 6: [12, 44]
Vértice 7: [78, 88]
Vértice 8: [18, 67, 82]
Vértice 9: [38, 46, 50]
Vértice 10: [17, 64]
Vértice 11: [27, 70]
Vértice 12: [6, 55]
Vértice 13: [14, 58, 61]
Vértice 14: [13, 76]
Vértice 15: [45, 91]
Vértice 16: [77, 85]
Vértice 17: [10, 21, 38, 83]
Vértice 18: [8, 50, 75]
Vértice 19: [0, 28]
Vértice 20: [38, 99]
Vértice 21: [17, 36, 55, 58]
Vértice 22: [4, 40]
Vértice 23: [87, 92]
Vértice 24: [27, 60]
Vértice 25: [36, 74, 78]
Vértice 26: [2, 75]
Vértice 27: [11, 24]
Vértice 28: [19, 73]
Vértice 29: [55, 89]
Vértice 30: [86, 99]
Vértice 31: [32, 33, 48]
Vértice 32: [31, 66, 85]
Vértice 33: [31, 88]
Vértice 34: [3, 38, 57, 63]
Vértice 35: [53, 60, 96]
Vértice 36: [21, 25]
Vértice 37: [70, 81]
Vértice 38: [9, 17, 20, 34, 61]
Vértice 39: [80, 91]
Vértice 40: [2, 22]
Vértice 41: [3, 90]
Vértice 42: [48, 56, 69, 79, 83]
Vértice 43: [89, 90]
Vértice 44: [6, 64]
Vértice 45: [15, 97]
Vértice 46: [9, 67, 94]
Vértice 47: [0, 92]
Vértice 48: [31, 42, 51, 87]
Vértice 49: [69, 86]
Vértice 50: [0, 9, 18]
Vértice 51: [48, 58]
Vértice 52: [79, 97]
Vértice 53: [35, 71, 95]
Vértice 54: [56, 87]
Vértice 55: [12, 21, 29, 83]
Vértice 56: [42, 54, 95]
Vértice 57: [34, 62]
Vértice 58: [13, 21, 51]
Vértice 59: [5, 81]
Vértice 60: [24, 35]
Vértice 61: [13, 38, 94]
Vértice 62: [57, 98]
Vértice 63: [1, 34, 65, 76]
Vértice 64: [10, 44]
Vértice 65: [63, 93]
Vértice 66: [32, 93]
Vértice 67: [8, 46]
Vértice 68: [1, 74]
Vértice 69: [42, 49]
Vértice 70: [11, 37]
Vértice 71: [53, 79]
Vértice 72: [78, 84]
Vértice 73: [28, 82]
Vértice 74: [25, 68]
Vértice 75: [18, 26]
Vértice 76: [14, 63, 77]
Vértice 77: [16, 76]
Vértice 78: [7, 25, 72]
Vértice 79: [42, 52, 71]
Vértice 80: [5, 39, 92]
Vértice 81: [37, 59]
Vértice 82: [8, 73]
Vértice 83: [17, 42, 55]
Vértice 84: [4, 72]
Vértice 85: [16, 32]
Vértice 86: [30, 49]
Vértice 87: [23, 48, 54]
Vértice 88: [7, 33]
Vértice 89: [29, 43]
Vértice 90: [41, 43]
Vértice 91: [15, 39]
Vértice 92: [23, 47, 80]
Vértice 93: [65, 66]
Vértice 94: [46, 61]
Vértice 95: [53, 56]
Vértice 96: [35, 98]
Vértice 97: [45, 52]
Vértice 98: [62, 96]
Vértice 99: [20, 30]

Digite o valor de k (para encontrar um k-fator): menor grau: 2
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
2-fator encontrado:
Fator: 100 vértices, 100 arestas, menor grau: 2
Arestas do fator:
0 - 19
0 - 47
1 - 63
1 - 68
2 - 26
2 - 40
3 - 34
3 - 41
4 - 22
4 - 84
5 - 59
5 - 80
6 - 12
6 - 44
7 - 78
7 - 88
8 - 67
8 - 82
9 - 38
9 - 50
10 - 17
10 - 64
11 - 27
11 - 70
12 - 55
13 - 14
13 - 61
14 - 76
15 - 45
15 - 91
16 - 77
16 - 85
17 - 83
18 - 50
18 - 75
19 - 28
20 - 38
20 - 99
21 - 36
21 - 58
22 - 40
23 - 87
23 - 92
24 - 27
24 - 60
25 - 36
25 - 74
26 - 75
28 - 73
29 - 55
29 - 89
30 - 86
30 - 99
31 - 33
31 - 48
32 - 66
32 - 85
33 - 88
34 - 57
35 - 60
35 - 96
37 - 70
37 - 81
39 - 80
39 - 91
41 - 90
42 - 69
42 - 83
43 - 89
43 - 90
44 - 64
45 - 97
46 - 67
46 - 94
47 - 92
48 - 51
49 - 69
49 - 86
51 - 58
52 - 79
52 - 97
53 - 71
53 - 95
54 - 56
54 - 87
56 - 95
57 - 62
59 - 81
61 - 94
62 - 98
63 - 65
65 - 93
66 - 93
68 - 74
71 - 79
72 - 78
72 - 84
73 - 82
76 - 77
96 - 98
```

---

## Test 51: test_case_051_k3_n100.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 100

**K-Factor:** 3

**Execution Time:** 44.000 ms

**Edges:**

```
0 55
0 69
0 71
1 4
1 65
1 80
2 14
2 40
2 78
2 84
3 7
3 59
3 70
4 24
4 28
5 6
5 37
5 54
5 90
6 60
6 81
7 66
7 99
8 38
8 52
8 87
8 95
9 42
9 45
9 86
10 31
10 82
10 90
11 36
11 52
11 95
12 18
12 51
12 56
12 94
13 71
13 72
13 83
13 86
14 46
14 72
14 83
14 93
15 16
15 19
15 57
16 39
16 42
17 38
17 67
17 76
18 36
18 44
18 98
19 51
19 94
20 26
20 42
20 64
20 99
21 64
21 87
21 94
21 95
22 40
22 50
22 70
22 84
23 55
23 69
23 70
24 79
24 80
25 61
25 74
25 88
26 56
26 58
26 59
27 45
27 79
27 85
28 65
28 97
29 45
29 59
29 85
29 86
30 67
30 76
30 97
31 66
31 73
31 96
32 34
32 44
32 77
33 46
33 53
33 83
34 41
34 75
35 48
35 49
35 89
36 63
37 81
37 91
38 41
38 75
39 43
39 57
39 68
40 57
40 61
41 77
42 68
43 65
43 76
43 82
43 97
44 60
44 74
44 88
46 89
47 48
47 49
47 82
48 96
49 53
50 58
50 91
51 57
52 63
53 89
54 58
54 71
54 91
55 66
56 64
56 87
58 84
59 99
60 62
60 90
61 66
61 78
62 73
62 81
63 98
66 70
67 75
68 86
69 93
71 93
72 93
73 90
74 78
77 88
79 92
80 92
82 96
85 92
89 92
94 98
```

### Output

**Reason:** K-fator validado: 150 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 100 vértices, 170 arestas, menor grau: 3
Graus dos vértices: [3, 3, 4, 3, 3, 4, 3, 3, 4, 3, 3, 3, 4, 4, 5, 3, 3, 3, 4, 3, 4, 4, 4, 3, 3, 3, 4, 3, 3, 4, 3, 4, 3, 3, 3, 3, 3, 3, 4, 4, 4, 3, 4, 5, 5, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 5, 3, 3, 3, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 4, 3, 3, 4, 4, 3, 4, 4, 4, 3, 3, 3, 3, 3]
Adjacências:
Vértice 0: [55, 69, 71]
Vértice 1: [4, 65, 80]
Vértice 2: [14, 40, 78, 84]
Vértice 3: [7, 59, 70]
Vértice 4: [1, 24, 28]
Vértice 5: [6, 37, 54, 90]
Vértice 6: [5, 60, 81]
Vértice 7: [3, 66, 99]
Vértice 8: [38, 52, 87, 95]
Vértice 9: [42, 45, 86]
Vértice 10: [31, 82, 90]
Vértice 11: [36, 52, 95]
Vértice 12: [18, 51, 56, 94]
Vértice 13: [71, 72, 83, 86]
Vértice 14: [2, 46, 72, 83, 93]
Vértice 15: [16, 19, 57]
Vértice 16: [15, 39, 42]
Vértice 17: [38, 67, 76]
Vértice 18: [12, 36, 44, 98]
Vértice 19: [15, 51, 94]
Vértice 20: [26, 42, 64, 99]
Vértice 21: [64, 87, 94, 95]
Vértice 22: [40, 50, 70, 84]
Vértice 23: [55, 69, 70]
Vértice 24: [4, 79, 80]
Vértice 25: [61, 74, 88]
Vértice 26: [20, 56, 58, 59]
Vértice 27: [45, 79, 85]
Vértice 28: [4, 65, 97]
Vértice 29: [45, 59, 85, 86]
Vértice 30: [67, 76, 97]
Vértice 31: [10, 66, 73, 96]
Vértice 32: [34, 44, 77]
Vértice 33: [46, 53, 83]
Vértice 34: [32, 41, 75]
Vértice 35: [48, 49, 89]
Vértice 36: [11, 18, 63]
Vértice 37: [5, 81, 91]
Vértice 38: [8, 17, 41, 75]
Vértice 39: [16, 43, 57, 68]
Vértice 40: [2, 22, 57, 61]
Vértice 41: [34, 38, 77]
Vértice 42: [9, 16, 20, 68]
Vértice 43: [39, 65, 76, 82, 97]
Vértice 44: [18, 32, 60, 74, 88]
Vértice 45: [9, 27, 29]
Vértice 46: [14, 33, 89]
Vértice 47: [48, 49, 82]
Vértice 48: [35, 47, 96]
Vértice 49: [35, 47, 53]
Vértice 50: [22, 58, 91]
Vértice 51: [12, 19, 57]
Vértice 52: [8, 11, 63]
Vértice 53: [33, 49, 89]
Vértice 54: [5, 58, 71, 91]
Vértice 55: [0, 23, 66]
Vértice 56: [12, 26, 64, 87]
Vértice 57: [15, 39, 40, 51]
Vértice 58: [26, 50, 54, 84]
Vértice 59: [3, 26, 29, 99]
Vértice 60: [6, 44, 62, 90]
Vértice 61: [25, 40, 66, 78]
Vértice 62: [60, 73, 81]
Vértice 63: [36, 52, 98]
Vértice 64: [20, 21, 56]
Vértice 65: [1, 28, 43]
Vértice 66: [7, 31, 55, 61, 70]
Vértice 67: [17, 30, 75]
Vértice 68: [39, 42, 86]
Vértice 69: [0, 23, 93]
Vértice 70: [3, 22, 23, 66]
Vértice 71: [0, 13, 54, 93]
Vértice 72: [13, 14, 93]
Vértice 73: [31, 62, 90]
Vértice 74: [25, 44, 78]
Vértice 75: [34, 38, 67]
Vértice 76: [17, 30, 43]
Vértice 77: [32, 41, 88]
Vértice 78: [2, 61, 74]
Vértice 79: [24, 27, 92]
Vértice 80: [1, 24, 92]
Vértice 81: [6, 37, 62]
Vértice 82: [10, 43, 47, 96]
Vértice 83: [13, 14, 33]
Vértice 84: [2, 22, 58]
Vértice 85: [27, 29, 92]
Vértice 86: [9, 13, 29, 68]
Vértice 87: [8, 21, 56]
Vértice 88: [25, 44, 77]
Vértice 89: [35, 46, 53, 92]
Vértice 90: [5, 10, 60, 73]
Vértice 91: [37, 50, 54]
Vértice 92: [79, 80, 85, 89]
Vértice 93: [14, 69, 71, 72]
Vértice 94: [12, 19, 21, 98]
Vértice 95: [8, 11, 21]
Vértice 96: [31, 48, 82]
Vértice 97: [28, 30, 43]
Vértice 98: [18, 63, 94]
Vértice 99: [7, 20, 59]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 100 vértices, 150 arestas, menor grau: 3
Arestas do fator:
0 - 55
0 - 69
0 - 71
1 - 4
1 - 65
1 - 80
2 - 40
2 - 78
2 - 84
3 - 7
3 - 59
3 - 70
4 - 24
4 - 28
5 - 6
5 - 37
5 - 54
6 - 60
6 - 81
7 - 66
7 - 99
8 - 52
8 - 87
8 - 95
9 - 42
9 - 45
9 - 86
10 - 31
10 - 82
10 - 90
11 - 36
11 - 52
11 - 95
12 - 18
12 - 51
12 - 94
13 - 72
13 - 83
13 - 86
14 - 46
14 - 72
14 - 83
15 - 16
15 - 19
15 - 57
16 - 39
16 - 42
17 - 38
17 - 67
17 - 76
18 - 36
18 - 98
19 - 51
19 - 94
20 - 26
20 - 64
20 - 99
21 - 64
21 - 87
21 - 95
22 - 40
22 - 50
22 - 84
23 - 55
23 - 69
23 - 70
24 - 79
24 - 80
25 - 61
25 - 74
25 - 88
26 - 56
26 - 58
27 - 45
27 - 79
27 - 85
28 - 65
28 - 97
29 - 45
29 - 59
29 - 85
30 - 67
30 - 76
30 - 97
31 - 73
31 - 96
32 - 34
32 - 44
32 - 77
33 - 46
33 - 53
33 - 83
34 - 41
34 - 75
35 - 48
35 - 49
35 - 89
36 - 63
37 - 81
37 - 91
38 - 41
38 - 75
39 - 57
39 - 68
40 - 61
41 - 77
42 - 68
43 - 65
43 - 76
43 - 97
44 - 74
44 - 88
46 - 89
47 - 48
47 - 49
47 - 82
48 - 96
49 - 53
50 - 58
50 - 91
51 - 57
52 - 63
53 - 89
54 - 71
54 - 91
55 - 66
56 - 64
56 - 87
58 - 84
59 - 99
60 - 62
60 - 90
61 - 78
62 - 73
62 - 81
63 - 98
66 - 70
67 - 75
68 - 86
69 - 93
71 - 93
72 - 93
73 - 90
74 - 78
77 - 88
79 - 92
80 - 92
82 - 96
85 - 92
94 - 98
```

---

## Test 52: test_case_052_k3_n100.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 100

**K-Factor:** 3

**Execution Time:** 43.000 ms

**Edges:**

```
0 27
0 49
0 83
1 14
1 63
1 88
2 5
2 51
2 79
3 50
3 76
3 78
4 35
4 38
4 60
4 77
4 96
5 37
5 56
5 97
6 12
6 61
6 85
7 15
7 20
7 97
8 17
8 35
8 73
9 32
9 76
9 78
10 41
10 60
10 64
11 18
11 39
11 44
11 52
12 36
12 92
13 54
13 68
13 73
13 93
14 33
14 58
14 65
14 73
15 53
15 81
16 29
16 47
16 66
17 65
17 70
18 34
18 47
19 30
19 59
19 99
20 23
20 98
21 36
21 45
21 69
21 91
22 44
22 86
22 95
23 80
23 97
24 32
24 57
24 82
25 32
25 57
25 78
26 27
26 31
26 35
27 42
27 69
28 61
28 67
28 68
28 94
29 39
29 86
30 69
30 90
31 42
31 70
31 96
33 57
33 62
33 88
34 52
34 91
34 99
35 70
36 71
36 74
37 59
37 79
38 48
38 49
38 83
39 47
40 61
40 67
40 85
41 46
41 89
42 83
43 45
43 52
43 91
44 71
44 74
45 99
46 60
46 69
46 96
48 54
48 82
49 54
50 55
50 72
51 56
51 80
53 84
53 87
54 75
55 84
55 87
56 92
56 98
57 75
58 63
58 89
58 99
59 90
62 67
62 94
63 64
63 70
64 89
65 73
65 93
66 86
66 95
68 77
68 96
69 96
69 99
71 92
72 76
72 87
72 95
74 95
75 82
77 93
79 90
80 98
81 84
81 97
83 94
85 92
88 94
```

### Output

**Reason:** K-fator validado: 150 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 100 vértices, 170 arestas, menor grau: 3
Graus dos vértices: [3, 3, 3, 3, 5, 4, 3, 3, 3, 3, 3, 4, 3, 4, 5, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, 4, 4, 3, 3, 4, 3, 4, 4, 4, 4, 3, 4, 3, 3, 3, 3, 3, 4, 3, 4, 3, 3, 3, 3, 3, 3, 3, 4, 3, 4, 4, 4, 3, 3, 3, 3, 4, 3, 4, 3, 3, 4, 6, 4, 3, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 4, 4, 5, 4, 3, 5]
Adjacências:
Vértice 0: [27, 49, 83]
Vértice 1: [14, 63, 88]
Vértice 2: [5, 51, 79]
Vértice 3: [50, 76, 78]
Vértice 4: [35, 38, 60, 77, 96]
Vértice 5: [2, 37, 56, 97]
Vértice 6: [12, 61, 85]
Vértice 7: [15, 20, 97]
Vértice 8: [17, 35, 73]
Vértice 9: [32, 76, 78]
Vértice 10: [41, 60, 64]
Vértice 11: [18, 39, 44, 52]
Vértice 12: [6, 36, 92]
Vértice 13: [54, 68, 73, 93]
Vértice 14: [1, 33, 58, 65, 73]
Vértice 15: [7, 53, 81]
Vértice 16: [29, 47, 66]
Vértice 17: [8, 65, 70]
Vértice 18: [11, 34, 47]
Vértice 19: [30, 59, 99]
Vértice 20: [7, 23, 98]
Vértice 21: [36, 45, 69, 91]
Vértice 22: [44, 86, 95]
Vértice 23: [20, 80, 97]
Vértice 24: [32, 57, 82]
Vértice 25: [32, 57, 78]
Vértice 26: [27, 31, 35]
Vértice 27: [0, 26, 42, 69]
Vértice 28: [61, 67, 68, 94]
Vértice 29: [16, 39, 86]
Vértice 30: [19, 69, 90]
Vértice 31: [26, 42, 70, 96]
Vértice 32: [9, 24, 25]
Vértice 33: [14, 57, 62, 88]
Vértice 34: [18, 52, 91, 99]
Vértice 35: [4, 8, 26, 70]
Vértice 36: [12, 21, 71, 74]
Vértice 37: [5, 59, 79]
Vértice 38: [4, 48, 49, 83]
Vértice 39: [11, 29, 47]
Vértice 40: [61, 67, 85]
Vértice 41: [10, 46, 89]
Vértice 42: [27, 31, 83]
Vértice 43: [45, 52, 91]
Vértice 44: [11, 22, 71, 74]
Vértice 45: [21, 43, 99]
Vértice 46: [41, 60, 69, 96]
Vértice 47: [16, 18, 39]
Vértice 48: [38, 54, 82]
Vértice 49: [0, 38, 54]
Vértice 50: [3, 55, 72]
Vértice 51: [2, 56, 80]
Vértice 52: [11, 34, 43]
Vértice 53: [15, 84, 87]
Vértice 54: [13, 48, 49, 75]
Vértice 55: [50, 84, 87]
Vértice 56: [5, 51, 92, 98]
Vértice 57: [24, 25, 33, 75]
Vértice 58: [14, 63, 89, 99]
Vértice 59: [19, 37, 90]
Vértice 60: [4, 10, 46]
Vértice 61: [6, 28, 40]
Vértice 62: [33, 67, 94]
Vértice 63: [1, 58, 64, 70]
Vértice 64: [10, 63, 89]
Vértice 65: [14, 17, 73, 93]
Vértice 66: [16, 86, 95]
Vértice 67: [28, 40, 62]
Vértice 68: [13, 28, 77, 96]
Vértice 69: [21, 27, 30, 46, 96, 99]
Vértice 70: [17, 31, 35, 63]
Vértice 71: [36, 44, 92]
Vértice 72: [50, 76, 87, 95]
Vértice 73: [8, 13, 14, 65]
Vértice 74: [36, 44, 95]
Vértice 75: [54, 57, 82]
Vértice 76: [3, 9, 72]
Vértice 77: [4, 68, 93]
Vértice 78: [3, 9, 25]
Vértice 79: [2, 37, 90]
Vértice 80: [23, 51, 98]
Vértice 81: [15, 84, 97]
Vértice 82: [24, 48, 75]
Vértice 83: [0, 38, 42, 94]
Vértice 84: [53, 55, 81]
Vértice 85: [6, 40, 92]
Vértice 86: [22, 29, 66]
Vértice 87: [53, 55, 72]
Vértice 88: [1, 33, 94]
Vértice 89: [41, 58, 64]
Vértice 90: [30, 59, 79]
Vértice 91: [21, 34, 43]
Vértice 92: [12, 56, 71, 85]
Vértice 93: [13, 65, 77]
Vértice 94: [28, 62, 83, 88]
Vértice 95: [22, 66, 72, 74]
Vértice 96: [4, 31, 46, 68, 69]
Vértice 97: [5, 7, 23, 81]
Vértice 98: [20, 56, 80]
Vértice 99: [19, 34, 45, 58, 69]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 100 vértices, 150 arestas, menor grau: 3
Arestas do fator:
0 - 27
0 - 49
0 - 83
1 - 14
1 - 63
1 - 88
2 - 5
2 - 51
2 - 79
3 - 50
3 - 76
3 - 78
4 - 38
4 - 60
4 - 77
5 - 37
5 - 56
6 - 12
6 - 61
6 - 85
7 - 15
7 - 20
7 - 97
8 - 17
8 - 35
8 - 73
9 - 32
9 - 76
9 - 78
10 - 41
10 - 60
10 - 64
11 - 18
11 - 39
11 - 52
12 - 36
12 - 92
13 - 68
13 - 73
13 - 93
14 - 33
14 - 58
15 - 53
15 - 81
16 - 29
16 - 47
16 - 66
17 - 65
17 - 70
18 - 34
18 - 47
19 - 30
19 - 59
19 - 99
20 - 23
20 - 98
21 - 45
21 - 69
21 - 91
22 - 44
22 - 86
22 - 95
23 - 80
23 - 97
24 - 32
24 - 57
24 - 82
25 - 32
25 - 57
25 - 78
26 - 27
26 - 31
26 - 35
27 - 42
28 - 61
28 - 67
28 - 68
29 - 39
29 - 86
30 - 69
30 - 90
31 - 42
31 - 96
33 - 62
33 - 88
34 - 52
34 - 91
35 - 70
36 - 71
36 - 74
37 - 59
37 - 79
38 - 48
38 - 49
39 - 47
40 - 61
40 - 67
40 - 85
41 - 46
41 - 89
42 - 83
43 - 45
43 - 52
43 - 91
44 - 71
44 - 74
45 - 99
46 - 60
46 - 96
48 - 54
48 - 82
49 - 54
50 - 55
50 - 72
51 - 56
51 - 80
53 - 84
53 - 87
54 - 75
55 - 84
55 - 87
56 - 98
57 - 75
58 - 89
58 - 99
59 - 90
62 - 67
62 - 94
63 - 64
63 - 70
64 - 89
65 - 73
65 - 93
66 - 86
66 - 95
68 - 77
69 - 96
71 - 92
72 - 76
72 - 87
74 - 95
75 - 82
77 - 93
79 - 90
80 - 98
81 - 84
81 - 97
83 - 94
85 - 92
88 - 94
```

---

## Test 53: test_case_053_k3_n100.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 100

**K-Factor:** 3

**Execution Time:** 44.000 ms

**Edges:**

```
0 12
0 54
0 59
0 74
0 84
1 36
1 56
1 81
2 11
2 42
2 79
3 27
3 43
3 97
4 28
4 47
4 88
5 47
5 55
5 90
6 13
6 50
6 69
6 73
7 72
7 74
7 84
8 10
8 57
8 85
9 16
9 45
9 70
9 98
10 32
10 51
10 52
11 22
11 35
11 76
11 90
12 57
12 65
12 85
13 34
13 89
14 19
14 33
14 62
15 30
15 56
15 77
16 18
16 64
16 83
16 86
17 67
17 91
17 96
18 60
18 63
19 27
19 48
20 38
20 39
20 45
20 53
21 23
21 54
21 83
21 91
22 35
22 95
23 29
23 99
24 28
24 83
24 94
25 31
25 43
25 88
25 97
26 30
26 83
26 94
27 58
27 61
28 75
29 67
29 91
29 96
30 49
31 61
31 93
32 55
32 80
32 99
33 39
33 53
34 65
34 73
35 68
35 76
36 40
36 61
37 41
37 69
37 73
38 41
38 42
38 69
39 66
39 80
40 56
40 77
41 87
42 87
43 58
44 47
44 88
44 90
45 66
46 63
46 70
46 83
46 98
47 85
48 58
48 62
49 77
49 83
50 71
50 72
50 74
51 60
51 82
52 82
52 85
53 62
54 80
54 83
54 99
55 78
56 58
57 89
59 67
59 96
60 86
61 81
63 64
64 98
65 89
66 70
66 87
68 92
68 95
71 92
71 95
72 92
75 88
75 94
76 79
78 80
78 90
79 87
81 93
82 86
84 96
89 92
93 97
```

### Output

**Reason:** K-fator validado: 150 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 100 vértices, 170 arestas, menor grau: 3
Graus dos vértices: [5, 3, 3, 3, 3, 3, 4, 3, 3, 4, 4, 5, 4, 3, 3, 3, 5, 3, 3, 3, 4, 4, 3, 3, 3, 4, 3, 4, 3, 4, 3, 3, 4, 3, 3, 4, 3, 3, 4, 4, 3, 3, 3, 3, 3, 3, 4, 4, 3, 3, 4, 3, 3, 3, 5, 3, 4, 3, 4, 3, 3, 4, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 7, 3, 4, 3, 4, 4, 4, 4, 3, 4, 3, 3, 3, 4, 3, 3, 3]
Adjacências:
Vértice 0: [12, 54, 59, 74, 84]
Vértice 1: [36, 56, 81]
Vértice 2: [11, 42, 79]
Vértice 3: [27, 43, 97]
Vértice 4: [28, 47, 88]
Vértice 5: [47, 55, 90]
Vértice 6: [13, 50, 69, 73]
Vértice 7: [72, 74, 84]
Vértice 8: [10, 57, 85]
Vértice 9: [16, 45, 70, 98]
Vértice 10: [8, 32, 51, 52]
Vértice 11: [2, 22, 35, 76, 90]
Vértice 12: [0, 57, 65, 85]
Vértice 13: [6, 34, 89]
Vértice 14: [19, 33, 62]
Vértice 15: [30, 56, 77]
Vértice 16: [9, 18, 64, 83, 86]
Vértice 17: [67, 91, 96]
Vértice 18: [16, 60, 63]
Vértice 19: [14, 27, 48]
Vértice 20: [38, 39, 45, 53]
Vértice 21: [23, 54, 83, 91]
Vértice 22: [11, 35, 95]
Vértice 23: [21, 29, 99]
Vértice 24: [28, 83, 94]
Vértice 25: [31, 43, 88, 97]
Vértice 26: [30, 83, 94]
Vértice 27: [3, 19, 58, 61]
Vértice 28: [4, 24, 75]
Vértice 29: [23, 67, 91, 96]
Vértice 30: [15, 26, 49]
Vértice 31: [25, 61, 93]
Vértice 32: [10, 55, 80, 99]
Vértice 33: [14, 39, 53]
Vértice 34: [13, 65, 73]
Vértice 35: [11, 22, 68, 76]
Vértice 36: [1, 40, 61]
Vértice 37: [41, 69, 73]
Vértice 38: [20, 41, 42, 69]
Vértice 39: [20, 33, 66, 80]
Vértice 40: [36, 56, 77]
Vértice 41: [37, 38, 87]
Vértice 42: [2, 38, 87]
Vértice 43: [3, 25, 58]
Vértice 44: [47, 88, 90]
Vértice 45: [9, 20, 66]
Vértice 46: [63, 70, 83, 98]
Vértice 47: [4, 5, 44, 85]
Vértice 48: [19, 58, 62]
Vértice 49: [30, 77, 83]
Vértice 50: [6, 71, 72, 74]
Vértice 51: [10, 60, 82]
Vértice 52: [10, 82, 85]
Vértice 53: [20, 33, 62]
Vértice 54: [0, 21, 80, 83, 99]
Vértice 55: [5, 32, 78]
Vértice 56: [1, 15, 40, 58]
Vértice 57: [8, 12, 89]
Vértice 58: [27, 43, 48, 56]
Vértice 59: [0, 67, 96]
Vértice 60: [18, 51, 86]
Vértice 61: [27, 31, 36, 81]
Vértice 62: [14, 48, 53]
Vértice 63: [18, 46, 64]
Vértice 64: [16, 63, 98]
Vértice 65: [12, 34, 89]
Vértice 66: [39, 45, 70, 87]
Vértice 67: [17, 29, 59]
Vértice 68: [35, 92, 95]
Vértice 69: [6, 37, 38]
Vértice 70: [9, 46, 66]
Vértice 71: [50, 92, 95]
Vértice 72: [7, 50, 92]
Vértice 73: [6, 34, 37]
Vértice 74: [0, 7, 50]
Vértice 75: [28, 88, 94]
Vértice 76: [11, 35, 79]
Vértice 77: [15, 40, 49]
Vértice 78: [55, 80, 90]
Vértice 79: [2, 76, 87]
Vértice 80: [32, 39, 54, 78]
Vértice 81: [1, 61, 93]
Vértice 82: [51, 52, 86]
Vértice 83: [16, 21, 24, 26, 46, 49, 54]
Vértice 84: [0, 7, 96]
Vértice 85: [8, 12, 47, 52]
Vértice 86: [16, 60, 82]
Vértice 87: [41, 42, 66, 79]
Vértice 88: [4, 25, 44, 75]
Vértice 89: [13, 57, 65, 92]
Vértice 90: [5, 11, 44, 78]
Vértice 91: [17, 21, 29]
Vértice 92: [68, 71, 72, 89]
Vértice 93: [31, 81, 97]
Vértice 94: [24, 26, 75]
Vértice 95: [22, 68, 71]
Vértice 96: [17, 29, 59, 84]
Vértice 97: [3, 25, 93]
Vértice 98: [9, 46, 64]
Vértice 99: [23, 32, 54]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 100 vértices, 150 arestas, menor grau: 3
Arestas do fator:
0 - 59
0 - 74
0 - 84
1 - 36
1 - 56
1 - 81
2 - 11
2 - 42
2 - 79
3 - 27
3 - 43
3 - 97
4 - 28
4 - 47
4 - 88
5 - 47
5 - 55
5 - 90
6 - 13
6 - 69
6 - 73
7 - 72
7 - 74
7 - 84
8 - 10
8 - 57
8 - 85
9 - 45
9 - 70
9 - 98
10 - 51
10 - 52
11 - 22
11 - 76
12 - 57
12 - 65
12 - 85
13 - 34
13 - 89
14 - 19
14 - 33
14 - 62
15 - 30
15 - 56
15 - 77
16 - 18
16 - 64
16 - 86
17 - 67
17 - 91
17 - 96
18 - 60
18 - 63
19 - 27
19 - 48
20 - 39
20 - 45
20 - 53
21 - 23
21 - 54
21 - 91
22 - 35
22 - 95
23 - 29
23 - 99
24 - 28
24 - 83
24 - 94
25 - 31
25 - 43
25 - 97
26 - 30
26 - 83
26 - 94
27 - 58
28 - 75
29 - 67
29 - 91
30 - 49
31 - 61
31 - 93
32 - 55
32 - 80
32 - 99
33 - 39
33 - 53
34 - 65
34 - 73
35 - 68
35 - 76
36 - 40
36 - 61
37 - 41
37 - 69
37 - 73
38 - 41
38 - 42
38 - 69
39 - 66
40 - 56
40 - 77
41 - 87
42 - 87
43 - 58
44 - 47
44 - 88
44 - 90
45 - 66
46 - 63
46 - 70
46 - 98
48 - 58
48 - 62
49 - 77
49 - 83
50 - 71
50 - 72
50 - 74
51 - 60
51 - 82
52 - 82
52 - 85
53 - 62
54 - 80
54 - 99
55 - 78
57 - 89
59 - 67
59 - 96
60 - 86
61 - 81
63 - 64
64 - 98
65 - 89
66 - 70
68 - 92
68 - 95
71 - 92
71 - 95
72 - 92
75 - 88
75 - 94
76 - 79
78 - 80
78 - 90
79 - 87
81 - 93
82 - 86
84 - 96
93 - 97
```

---

## Test 54: test_case_054_k3_n100.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 100

**K-Factor:** 3

**Execution Time:** 44.000 ms

**Edges:**

```
0 21
0 64
0 91
1 5
1 56
1 98
2 72
2 83
2 91
3 40
3 42
3 82
4 10
4 27
4 30
5 41
5 51
6 55
6 92
6 94
7 31
7 37
7 66
7 79
8 18
8 39
8 67
8 93
9 29
9 61
9 84
10 35
10 39
10 44
10 64
10 81
11 13
11 49
11 55
11 63
12 28
12 76
12 86
13 25
13 85
14 28
14 58
14 76
14 87
15 43
15 45
15 54
16 61
16 73
16 88
17 36
17 38
17 48
18 59
18 80
19 27
19 30
19 52
19 68
19 78
20 50
20 53
20 65
21 97
21 99
22 24
22 57
22 65
23 26
23 46
23 96
24 26
24 46
25 42
25 63
26 57
26 65
27 44
28 34
29 33
29 49
30 39
30 93
31 36
31 38
31 82
32 33
32 49
32 63
33 84
34 86
34 90
35 51
35 81
35 89
36 95
37 46
37 96
38 47
39 52
39 74
40 47
40 85
41 50
41 56
41 78
42 85
43 81
43 89
44 99
45 70
45 81
47 82
48 80
48 95
50 58
50 62
51 89
51 98
52 71
53 54
53 58
53 75
54 70
54 88
55 58
55 62
55 89
56 92
57 75
59 60
59 93
60 80
60 95
61 68
62 94
64 98
64 99
65 75
66 87
66 96
67 72
67 83
68 73
68 84
69 71
69 86
69 90
70 77
71 74
72 97
73 77
74 90
75 81
76 79
77 88
78 92
78 94
79 87
80 91
82 87
83 93
83 97
89 98
91 97
```

### Output

**Reason:** K-fator validado: 150 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 100 vértices, 170 arestas, menor grau: 3
Graus dos vértices: [3, 3, 3, 3, 3, 3, 3, 4, 4, 3, 6, 4, 3, 3, 4, 3, 3, 3, 3, 5, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 4, 4, 3, 3, 3, 4, 3, 3, 3, 5, 3, 4, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 3, 4, 4, 5, 3, 3, 4, 3, 3, 3, 3, 3, 4, 4, 3, 3, 4, 3, 3, 3, 3, 3, 3, 4, 3, 3, 4, 3, 4, 5, 4, 4, 3, 3, 3, 4, 3, 5, 3, 4, 3, 4, 3, 3, 3, 4, 4, 3]
Adjacências:
Vértice 0: [21, 64, 91]
Vértice 1: [5, 56, 98]
Vértice 2: [72, 83, 91]
Vértice 3: [40, 42, 82]
Vértice 4: [10, 27, 30]
Vértice 5: [1, 41, 51]
Vértice 6: [55, 92, 94]
Vértice 7: [31, 37, 66, 79]
Vértice 8: [18, 39, 67, 93]
Vértice 9: [29, 61, 84]
Vértice 10: [4, 35, 39, 44, 64, 81]
Vértice 11: [13, 49, 55, 63]
Vértice 12: [28, 76, 86]
Vértice 13: [11, 25, 85]
Vértice 14: [28, 58, 76, 87]
Vértice 15: [43, 45, 54]
Vértice 16: [61, 73, 88]
Vértice 17: [36, 38, 48]
Vértice 18: [8, 59, 80]
Vértice 19: [27, 30, 52, 68, 78]
Vértice 20: [50, 53, 65]
Vértice 21: [0, 97, 99]
Vértice 22: [24, 57, 65]
Vértice 23: [26, 46, 96]
Vértice 24: [22, 26, 46]
Vértice 25: [13, 42, 63]
Vértice 26: [23, 24, 57, 65]
Vértice 27: [4, 19, 44]
Vértice 28: [12, 14, 34]
Vértice 29: [9, 33, 49]
Vértice 30: [4, 19, 39, 93]
Vértice 31: [7, 36, 38, 82]
Vértice 32: [33, 49, 63]
Vértice 33: [29, 32, 84]
Vértice 34: [28, 86, 90]
Vértice 35: [10, 51, 81, 89]
Vértice 36: [17, 31, 95]
Vértice 37: [7, 46, 96]
Vértice 38: [17, 31, 47]
Vértice 39: [8, 10, 30, 52, 74]
Vértice 40: [3, 47, 85]
Vértice 41: [5, 50, 56, 78]
Vértice 42: [3, 25, 85]
Vértice 43: [15, 81, 89]
Vértice 44: [10, 27, 99]
Vértice 45: [15, 70, 81]
Vértice 46: [23, 24, 37]
Vértice 47: [38, 40, 82]
Vértice 48: [17, 80, 95]
Vértice 49: [11, 29, 32]
Vértice 50: [20, 41, 58, 62]
Vértice 51: [5, 35, 89, 98]
Vértice 52: [19, 39, 71]
Vértice 53: [20, 54, 58, 75]
Vértice 54: [15, 53, 70, 88]
Vértice 55: [6, 11, 58, 62, 89]
Vértice 56: [1, 41, 92]
Vértice 57: [22, 26, 75]
Vértice 58: [14, 50, 53, 55]
Vértice 59: [18, 60, 93]
Vértice 60: [59, 80, 95]
Vértice 61: [9, 16, 68]
Vértice 62: [50, 55, 94]
Vértice 63: [11, 25, 32]
Vértice 64: [0, 10, 98, 99]
Vértice 65: [20, 22, 26, 75]
Vértice 66: [7, 87, 96]
Vértice 67: [8, 72, 83]
Vértice 68: [19, 61, 73, 84]
Vértice 69: [71, 86, 90]
Vértice 70: [45, 54, 77]
Vértice 71: [52, 69, 74]
Vértice 72: [2, 67, 97]
Vértice 73: [16, 68, 77]
Vértice 74: [39, 71, 90]
Vértice 75: [53, 57, 65, 81]
Vértice 76: [12, 14, 79]
Vértice 77: [70, 73, 88]
Vértice 78: [19, 41, 92, 94]
Vértice 79: [7, 76, 87]
Vértice 80: [18, 48, 60, 91]
Vértice 81: [10, 35, 43, 45, 75]
Vértice 82: [3, 31, 47, 87]
Vértice 83: [2, 67, 93, 97]
Vértice 84: [9, 33, 68]
Vértice 85: [13, 40, 42]
Vértice 86: [12, 34, 69]
Vértice 87: [14, 66, 79, 82]
Vértice 88: [16, 54, 77]
Vértice 89: [35, 43, 51, 55, 98]
Vértice 90: [34, 69, 74]
Vértice 91: [0, 2, 80, 97]
Vértice 92: [6, 56, 78]
Vértice 93: [8, 30, 59, 83]
Vértice 94: [6, 62, 78]
Vértice 95: [36, 48, 60]
Vértice 96: [23, 37, 66]
Vértice 97: [21, 72, 83, 91]
Vértice 98: [1, 51, 64, 89]
Vértice 99: [21, 44, 64]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 100 vértices, 150 arestas, menor grau: 3
Arestas do fator:
0 - 21
0 - 64
0 - 91
1 - 5
1 - 56
1 - 98
2 - 72
2 - 83
2 - 91
3 - 40
3 - 42
3 - 82
4 - 10
4 - 27
4 - 30
5 - 41
5 - 51
6 - 55
6 - 92
6 - 94
7 - 37
7 - 66
7 - 79
8 - 18
8 - 39
8 - 67
9 - 29
9 - 61
9 - 84
10 - 35
10 - 44
11 - 13
11 - 49
11 - 63
12 - 28
12 - 76
12 - 86
13 - 25
13 - 85
14 - 28
14 - 76
14 - 87
15 - 43
15 - 45
15 - 54
16 - 61
16 - 73
16 - 88
17 - 36
17 - 38
17 - 48
18 - 59
18 - 80
19 - 27
19 - 30
19 - 52
20 - 50
20 - 53
20 - 65
21 - 97
21 - 99
22 - 24
22 - 57
22 - 65
23 - 26
23 - 46
23 - 96
24 - 26
24 - 46
25 - 42
25 - 63
26 - 57
27 - 44
28 - 34
29 - 33
29 - 49
30 - 93
31 - 36
31 - 38
31 - 82
32 - 33
32 - 49
32 - 63
33 - 84
34 - 86
34 - 90
35 - 51
35 - 81
36 - 95
37 - 46
37 - 96
38 - 47
39 - 52
39 - 74
40 - 47
40 - 85
41 - 56
41 - 78
42 - 85
43 - 81
43 - 89
44 - 99
45 - 70
45 - 81
47 - 82
48 - 80
48 - 95
50 - 58
50 - 62
51 - 89
52 - 71
53 - 58
53 - 75
54 - 70
54 - 88
55 - 58
55 - 62
56 - 92
57 - 75
59 - 60
59 - 93
60 - 80
60 - 95
61 - 68
62 - 94
64 - 98
64 - 99
65 - 75
66 - 87
66 - 96
67 - 72
67 - 83
68 - 73
68 - 84
69 - 71
69 - 86
69 - 90
70 - 77
71 - 74
72 - 97
73 - 77
74 - 90
76 - 79
77 - 88
78 - 92
78 - 94
79 - 87
83 - 93
89 - 98
91 - 97
```

---

## Test 55: test_case_055_k3_n100.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 100

**K-Factor:** 3

**Execution Time:** 43.000 ms

**Edges:**

```
0 2
0 7
0 19
0 32
0 42
1 15
1 17
1 24
1 88
2 39
2 56
3 31
3 42
3 52
3 91
4 40
4 48
4 74
5 9
5 51
5 88
6 25
6 49
6 61
7 18
7 39
7 77
8 57
8 67
8 82
9 82
9 86
10 19
10 23
10 36
11 53
11 69
11 90
12 46
12 70
12 89
13 26
13 27
13 45
13 79
14 55
14 64
14 80
15 22
15 59
16 34
16 41
16 47
17 69
17 90
18 37
18 38
18 54
19 48
19 73
20 53
20 63
20 90
21 33
21 47
21 62
22 30
22 84
23 60
23 73
24 59
24 69
25 45
25 96
25 99
26 35
26 44
26 50
27 60
27 73
28 43
28 92
28 96
29 41
29 47
29 62
29 69
30 52
30 59
30 67
31 37
31 59
31 71
31 97
32 77
32 80
33 93
33 95
34 72
34 91
35 53
35 63
36 48
36 74
37 42
38 76
38 99
39 85
39 93
40 68
40 89
41 72
42 54
43 61
43 83
44 63
44 66
44 81
45 49
46 65
46 97
47 75
48 94
49 79
50 66
50 87
51 81
51 86
52 84
52 98
53 62
54 99
55 75
55 78
56 85
56 98
57 76
57 88
58 65
58 81
58 86
60 79
61 96
62 95
63 98
64 75
64 83
65 70
66 93
67 76
67 99
68 74
68 97
69 93
70 81
71 72
71 91
75 92
77 78
78 80
79 94
82 88
83 92
84 94
84 97
85 94
87 93
87 95
89 97
94 98
```

### Output

**Reason:** K-fator validado: 150 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 100 vértices, 170 arestas, menor grau: 3
Graus dos vértices: [5, 4, 3, 4, 3, 3, 3, 4, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 4, 4, 3, 3, 3, 3, 3, 4, 4, 3, 3, 4, 4, 5, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 4, 3, 4, 3, 3, 4, 4, 3, 3, 3, 4, 4, 3, 3, 3, 3, 3, 4, 3, 3, 4, 4, 3, 3, 3, 4, 3, 5, 3, 3, 3, 3, 3, 4, 3, 3, 3, 4, 3, 4, 3, 3, 4, 3, 3, 3, 4, 3, 3, 3, 3, 5, 5, 3, 3, 5, 4, 4]
Adjacências:
Vértice 0: [2, 7, 19, 32, 42]
Vértice 1: [15, 17, 24, 88]
Vértice 2: [0, 39, 56]
Vértice 3: [31, 42, 52, 91]
Vértice 4: [40, 48, 74]
Vértice 5: [9, 51, 88]
Vértice 6: [25, 49, 61]
Vértice 7: [0, 18, 39, 77]
Vértice 8: [57, 67, 82]
Vértice 9: [5, 82, 86]
Vértice 10: [19, 23, 36]
Vértice 11: [53, 69, 90]
Vértice 12: [46, 70, 89]
Vértice 13: [26, 27, 45, 79]
Vértice 14: [55, 64, 80]
Vértice 15: [1, 22, 59]
Vértice 16: [34, 41, 47]
Vértice 17: [1, 69, 90]
Vértice 18: [7, 37, 38, 54]
Vértice 19: [0, 10, 48, 73]
Vértice 20: [53, 63, 90]
Vértice 21: [33, 47, 62]
Vértice 22: [15, 30, 84]
Vértice 23: [10, 60, 73]
Vértice 24: [1, 59, 69]
Vértice 25: [6, 45, 96, 99]
Vértice 26: [13, 35, 44, 50]
Vértice 27: [13, 60, 73]
Vértice 28: [43, 92, 96]
Vértice 29: [41, 47, 62, 69]
Vértice 30: [22, 52, 59, 67]
Vértice 31: [3, 37, 59, 71, 97]
Vértice 32: [0, 77, 80]
Vértice 33: [21, 93, 95]
Vértice 34: [16, 72, 91]
Vértice 35: [26, 53, 63]
Vértice 36: [10, 48, 74]
Vértice 37: [18, 31, 42]
Vértice 38: [18, 76, 99]
Vértice 39: [2, 7, 85, 93]
Vértice 40: [4, 68, 89]
Vértice 41: [16, 29, 72]
Vértice 42: [0, 3, 37, 54]
Vértice 43: [28, 61, 83]
Vértice 44: [26, 63, 66, 81]
Vértice 45: [13, 25, 49]
Vértice 46: [12, 65, 97]
Vértice 47: [16, 21, 29, 75]
Vértice 48: [4, 19, 36, 94]
Vértice 49: [6, 45, 79]
Vértice 50: [26, 66, 87]
Vértice 51: [5, 81, 86]
Vértice 52: [3, 30, 84, 98]
Vértice 53: [11, 20, 35, 62]
Vértice 54: [18, 42, 99]
Vértice 55: [14, 75, 78]
Vértice 56: [2, 85, 98]
Vértice 57: [8, 76, 88]
Vértice 58: [65, 81, 86]
Vértice 59: [15, 24, 30, 31]
Vértice 60: [23, 27, 79]
Vértice 61: [6, 43, 96]
Vértice 62: [21, 29, 53, 95]
Vértice 63: [20, 35, 44, 98]
Vértice 64: [14, 75, 83]
Vértice 65: [46, 58, 70]
Vértice 66: [44, 50, 93]
Vértice 67: [8, 30, 76, 99]
Vértice 68: [40, 74, 97]
Vértice 69: [11, 17, 24, 29, 93]
Vértice 70: [12, 65, 81]
Vértice 71: [31, 72, 91]
Vértice 72: [34, 41, 71]
Vértice 73: [19, 23, 27]
Vértice 74: [4, 36, 68]
Vértice 75: [47, 55, 64, 92]
Vértice 76: [38, 57, 67]
Vértice 77: [7, 32, 78]
Vértice 78: [55, 77, 80]
Vértice 79: [13, 49, 60, 94]
Vértice 80: [14, 32, 78]
Vértice 81: [44, 51, 58, 70]
Vértice 82: [8, 9, 88]
Vértice 83: [43, 64, 92]
Vértice 84: [22, 52, 94, 97]
Vértice 85: [39, 56, 94]
Vértice 86: [9, 51, 58]
Vértice 87: [50, 93, 95]
Vértice 88: [1, 5, 57, 82]
Vértice 89: [12, 40, 97]
Vértice 90: [11, 17, 20]
Vértice 91: [3, 34, 71]
Vértice 92: [28, 75, 83]
Vértice 93: [33, 39, 66, 69, 87]
Vértice 94: [48, 79, 84, 85, 98]
Vértice 95: [33, 62, 87]
Vértice 96: [25, 28, 61]
Vértice 97: [31, 46, 68, 84, 89]
Vértice 98: [52, 56, 63, 94]
Vértice 99: [25, 38, 54, 67]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 100 vértices, 150 arestas, menor grau: 3
Arestas do fator:
0 - 2
0 - 7
0 - 32
1 - 15
1 - 17
1 - 24
2 - 39
2 - 56
3 - 31
3 - 42
3 - 91
4 - 40
4 - 48
4 - 74
5 - 9
5 - 51
5 - 88
6 - 25
6 - 49
6 - 61
7 - 39
7 - 77
8 - 57
8 - 67
8 - 82
9 - 82
9 - 86
10 - 19
10 - 23
10 - 36
11 - 53
11 - 69
11 - 90
12 - 46
12 - 70
12 - 89
13 - 27
13 - 45
13 - 79
14 - 55
14 - 64
14 - 80
15 - 22
15 - 59
16 - 34
16 - 41
16 - 47
17 - 69
17 - 90
18 - 37
18 - 38
18 - 54
19 - 48
19 - 73
20 - 53
20 - 63
20 - 90
21 - 33
21 - 47
21 - 62
22 - 30
22 - 84
23 - 60
23 - 73
24 - 59
24 - 69
25 - 45
25 - 96
26 - 35
26 - 44
26 - 50
27 - 60
27 - 73
28 - 43
28 - 92
28 - 96
29 - 41
29 - 47
29 - 62
30 - 52
30 - 59
31 - 37
31 - 71
32 - 77
32 - 80
33 - 93
33 - 95
34 - 72
34 - 91
35 - 53
35 - 63
36 - 48
36 - 74
37 - 42
38 - 76
38 - 99
39 - 85
40 - 68
40 - 89
41 - 72
42 - 54
43 - 61
43 - 83
44 - 63
44 - 66
45 - 49
46 - 65
46 - 97
49 - 79
50 - 66
50 - 87
51 - 81
51 - 86
52 - 84
52 - 98
54 - 99
55 - 75
55 - 78
56 - 85
56 - 98
57 - 76
57 - 88
58 - 65
58 - 81
58 - 86
60 - 79
61 - 96
62 - 95
64 - 75
64 - 83
65 - 70
66 - 93
67 - 76
67 - 99
68 - 74
68 - 97
70 - 81
71 - 72
71 - 91
75 - 92
77 - 78
78 - 80
82 - 88
83 - 92
84 - 94
85 - 94
87 - 93
87 - 95
89 - 97
94 - 98
```

---

## Test 56: test_case_056_k3_n100.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 100

**K-Factor:** 3

**Execution Time:** 45.000 ms

**Edges:**

```
0 36
0 37
0 87
1 48
1 59
1 91
2 38
2 51
2 58
3 21
3 32
3 63
3 75
4 19
4 42
4 76
4 82
5 11
5 29
5 59
5 78
6 21
6 92
6 94
6 98
7 55
7 72
7 84
8 25
8 55
8 56
8 84
9 32
9 50
9 75
10 51
10 58
10 74
11 16
11 35
11 77
12 62
12 64
12 74
13 18
13 85
13 94
14 40
14 86
14 87
15 17
15 42
15 45
15 53
16 30
16 55
16 56
17 64
17 81
18 24
18 88
19 59
19 90
19 91
20 26
20 27
20 67
21 72
21 84
22 44
22 49
22 54
22 68
23 31
23 34
23 35
23 42
24 94
24 98
25 76
25 82
25 85
26 71
26 79
27 45
27 61
27 71
28 67
28 92
28 97
29 66
29 96
30 36
30 37
31 46
31 57
31 78
32 65
33 37
33 40
33 87
34 57
34 95
35 57
35 90
35 91
36 56
37 82
38 47
38 93
39 44
39 68
39 80
40 83
41 54
41 73
41 83
42 95
43 52
43 60
43 93
44 99
45 62
45 64
46 54
46 73
47 58
47 89
48 63
48 87
48 99
49 63
49 99
50 65
50 81
50 92
51 69
52 63
52 66
52 89
53 65
53 81
54 86
55 73
56 82
57 73
59 63
60 66
60 96
61 67
61 70
61 97
62 69
68 79
69 74
70 92
70 97
70 98
71 80
72 75
76 88
77 78
77 90
78 79
78 96
79 80
82 95
83 86
85 88
89 93
```

### Output

**Reason:** K-fator validado: 150 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 100 vértices, 170 arestas, menor grau: 3
Graus dos vértices: [3, 3, 3, 4, 4, 4, 4, 3, 4, 3, 3, 4, 3, 3, 3, 4, 4, 3, 3, 4, 3, 4, 4, 4, 3, 4, 3, 4, 3, 3, 3, 4, 3, 3, 3, 5, 3, 4, 3, 3, 3, 3, 4, 3, 3, 4, 3, 3, 4, 3, 4, 3, 4, 3, 4, 4, 4, 4, 3, 4, 3, 4, 3, 5, 3, 3, 3, 3, 3, 3, 4, 3, 3, 4, 3, 3, 3, 3, 5, 4, 3, 3, 5, 3, 3, 3, 3, 4, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, 3, 3]
Adjacências:
Vértice 0: [36, 37, 87]
Vértice 1: [48, 59, 91]
Vértice 2: [38, 51, 58]
Vértice 3: [21, 32, 63, 75]
Vértice 4: [19, 42, 76, 82]
Vértice 5: [11, 29, 59, 78]
Vértice 6: [21, 92, 94, 98]
Vértice 7: [55, 72, 84]
Vértice 8: [25, 55, 56, 84]
Vértice 9: [32, 50, 75]
Vértice 10: [51, 58, 74]
Vértice 11: [5, 16, 35, 77]
Vértice 12: [62, 64, 74]
Vértice 13: [18, 85, 94]
Vértice 14: [40, 86, 87]
Vértice 15: [17, 42, 45, 53]
Vértice 16: [11, 30, 55, 56]
Vértice 17: [15, 64, 81]
Vértice 18: [13, 24, 88]
Vértice 19: [4, 59, 90, 91]
Vértice 20: [26, 27, 67]
Vértice 21: [3, 6, 72, 84]
Vértice 22: [44, 49, 54, 68]
Vértice 23: [31, 34, 35, 42]
Vértice 24: [18, 94, 98]
Vértice 25: [8, 76, 82, 85]
Vértice 26: [20, 71, 79]
Vértice 27: [20, 45, 61, 71]
Vértice 28: [67, 92, 97]
Vértice 29: [5, 66, 96]
Vértice 30: [16, 36, 37]
Vértice 31: [23, 46, 57, 78]
Vértice 32: [3, 9, 65]
Vértice 33: [37, 40, 87]
Vértice 34: [23, 57, 95]
Vértice 35: [11, 23, 57, 90, 91]
Vértice 36: [0, 30, 56]
Vértice 37: [0, 30, 33, 82]
Vértice 38: [2, 47, 93]
Vértice 39: [44, 68, 80]
Vértice 40: [14, 33, 83]
Vértice 41: [54, 73, 83]
Vértice 42: [4, 15, 23, 95]
Vértice 43: [52, 60, 93]
Vértice 44: [22, 39, 99]
Vértice 45: [15, 27, 62, 64]
Vértice 46: [31, 54, 73]
Vértice 47: [38, 58, 89]
Vértice 48: [1, 63, 87, 99]
Vértice 49: [22, 63, 99]
Vértice 50: [9, 65, 81, 92]
Vértice 51: [2, 10, 69]
Vértice 52: [43, 63, 66, 89]
Vértice 53: [15, 65, 81]
Vértice 54: [22, 41, 46, 86]
Vértice 55: [7, 8, 16, 73]
Vértice 56: [8, 16, 36, 82]
Vértice 57: [31, 34, 35, 73]
Vértice 58: [2, 10, 47]
Vértice 59: [1, 5, 19, 63]
Vértice 60: [43, 66, 96]
Vértice 61: [27, 67, 70, 97]
Vértice 62: [12, 45, 69]
Vértice 63: [3, 48, 49, 52, 59]
Vértice 64: [12, 17, 45]
Vértice 65: [32, 50, 53]
Vértice 66: [29, 52, 60]
Vértice 67: [20, 28, 61]
Vértice 68: [22, 39, 79]
Vértice 69: [51, 62, 74]
Vértice 70: [61, 92, 97, 98]
Vértice 71: [26, 27, 80]
Vértice 72: [7, 21, 75]
Vértice 73: [41, 46, 55, 57]
Vértice 74: [10, 12, 69]
Vértice 75: [3, 9, 72]
Vértice 76: [4, 25, 88]
Vértice 77: [11, 78, 90]
Vértice 78: [5, 31, 77, 79, 96]
Vértice 79: [26, 68, 78, 80]
Vértice 80: [39, 71, 79]
Vértice 81: [17, 50, 53]
Vértice 82: [4, 25, 37, 56, 95]
Vértice 83: [40, 41, 86]
Vértice 84: [7, 8, 21]
Vértice 85: [13, 25, 88]
Vértice 86: [14, 54, 83]
Vértice 87: [0, 14, 33, 48]
Vértice 88: [18, 76, 85]
Vértice 89: [47, 52, 93]
Vértice 90: [19, 35, 77]
Vértice 91: [1, 19, 35]
Vértice 92: [6, 28, 50, 70]
Vértice 93: [38, 43, 89]
Vértice 94: [6, 13, 24]
Vértice 95: [34, 42, 82]
Vértice 96: [29, 60, 78]
Vértice 97: [28, 61, 70]
Vértice 98: [6, 24, 70]
Vértice 99: [44, 48, 49]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 100 vértices, 150 arestas, menor grau: 3
Arestas do fator:
0 - 36
0 - 37
0 - 87
1 - 48
1 - 59
1 - 91
2 - 38
2 - 51
2 - 58
3 - 21
3 - 32
3 - 75
4 - 42
4 - 76
4 - 82
5 - 11
5 - 29
5 - 78
6 - 92
6 - 94
6 - 98
7 - 55
7 - 72
7 - 84
8 - 25
8 - 56
8 - 84
9 - 32
9 - 50
9 - 75
10 - 51
10 - 58
10 - 74
11 - 16
11 - 77
12 - 62
12 - 64
12 - 74
13 - 18
13 - 85
13 - 94
14 - 40
14 - 86
14 - 87
15 - 17
15 - 45
15 - 53
16 - 30
16 - 55
17 - 64
17 - 81
18 - 24
18 - 88
19 - 59
19 - 90
19 - 91
20 - 26
20 - 27
20 - 67
21 - 72
21 - 84
22 - 44
22 - 49
22 - 68
23 - 31
23 - 34
23 - 42
24 - 94
24 - 98
25 - 76
25 - 85
26 - 71
26 - 79
27 - 61
27 - 71
28 - 67
28 - 92
28 - 97
29 - 66
29 - 96
30 - 36
30 - 37
31 - 46
31 - 57
32 - 65
33 - 37
33 - 40
33 - 87
34 - 57
34 - 95
35 - 57
35 - 90
35 - 91
36 - 56
38 - 47
38 - 93
39 - 44
39 - 68
39 - 80
40 - 83
41 - 54
41 - 73
41 - 83
42 - 95
43 - 52
43 - 60
43 - 93
44 - 99
45 - 62
45 - 64
46 - 54
46 - 73
47 - 58
47 - 89
48 - 63
48 - 99
49 - 63
49 - 99
50 - 65
50 - 81
51 - 69
52 - 66
52 - 89
53 - 65
53 - 81
54 - 86
55 - 73
56 - 82
59 - 63
60 - 66
60 - 96
61 - 67
61 - 97
62 - 69
68 - 79
69 - 74
70 - 92
70 - 97
70 - 98
71 - 80
72 - 75
76 - 88
77 - 78
77 - 90
78 - 96
79 - 80
82 - 95
83 - 86
85 - 88
89 - 93
```

---

## Test 57: test_case_057_k3_n100.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 100

**K-Factor:** 3

**Execution Time:** 44.000 ms

**Edges:**

```
0 3
0 16
0 27
0 93
1 43
1 66
1 67
2 9
2 48
2 69
3 23
3 40
4 6
4 72
4 81
4 91
5 29
5 57
5 81
6 26
6 60
7 11
7 22
7 54
8 59
8 71
8 75
9 38
9 39
10 26
10 56
10 97
11 35
11 98
12 15
12 20
12 70
12 75
13 36
13 54
13 93
14 36
14 86
14 93
15 42
15 73
16 22
16 40
16 46
17 37
17 41
17 49
17 53
18 50
18 59
18 89
19 55
19 88
19 90
20 29
20 57
20 93
21 32
21 42
21 73
22 24
22 40
22 48
22 98
23 27
23 34
23 77
24 36
24 54
25 53
25 77
25 82
26 99
27 33
28 40
28 45
28 46
28 74
29 85
30 41
30 83
30 87
31 43
31 67
31 80
32 65
32 92
33 34
33 83
34 96
35 49
35 94
37 68
37 79
37 88
38 43
38 48
38 63
39 51
39 69
39 93
41 64
41 96
42 92
43 51
44 58
44 62
44 72
45 48
45 61
45 63
46 56
47 50
47 59
47 71
49 68
50 52
50 98
51 80
52 76
52 89
53 79
55 58
55 62
55 81
56 74
57 70
58 78
60 91
60 99
61 88
61 90
62 83
62 88
63 90
64 72
64 87
65 84
65 95
66 77
66 82
67 82
68 94
69 80
70 73
71 86
71 90
72 78
73 89
74 97
75 85
75 86
75 93
76 84
76 95
77 79
78 87
78 88
81 85
83 96
84 89
85 91
92 95
94 98
97 99
```

### Output

**Reason:** K-fator validado: 150 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 100 vértices, 170 arestas, menor grau: 3
Graus dos vértices: [4, 3, 3, 3, 4, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 4, 4, 3, 3, 4, 3, 6, 4, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 3, 4, 3, 4, 3, 3, 4, 3, 4, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 3, 5, 3, 4, 4, 3, 3, 4, 3, 4, 3, 4, 3, 3, 5, 4, 4, 3, 3, 6, 3, 3, 3, 3, 4, 3]
Adjacências:
Vértice 0: [3, 16, 27, 93]
Vértice 1: [43, 66, 67]
Vértice 2: [9, 48, 69]
Vértice 3: [0, 23, 40]
Vértice 4: [6, 72, 81, 91]
Vértice 5: [29, 57, 81]
Vértice 6: [4, 26, 60]
Vértice 7: [11, 22, 54]
Vértice 8: [59, 71, 75]
Vértice 9: [2, 38, 39]
Vértice 10: [26, 56, 97]
Vértice 11: [7, 35, 98]
Vértice 12: [15, 20, 70, 75]
Vértice 13: [36, 54, 93]
Vértice 14: [36, 86, 93]
Vértice 15: [12, 42, 73]
Vértice 16: [0, 22, 40, 46]
Vértice 17: [37, 41, 49, 53]
Vértice 18: [50, 59, 89]
Vértice 19: [55, 88, 90]
Vértice 20: [12, 29, 57, 93]
Vértice 21: [32, 42, 73]
Vértice 22: [7, 16, 24, 40, 48, 98]
Vértice 23: [3, 27, 34, 77]
Vértice 24: [22, 36, 54]
Vértice 25: [53, 77, 82]
Vértice 26: [6, 10, 99]
Vértice 27: [0, 23, 33]
Vértice 28: [40, 45, 46, 74]
Vértice 29: [5, 20, 85]
Vértice 30: [41, 83, 87]
Vértice 31: [43, 67, 80]
Vértice 32: [21, 65, 92]
Vértice 33: [27, 34, 83]
Vértice 34: [23, 33, 96]
Vértice 35: [11, 49, 94]
Vértice 36: [13, 14, 24]
Vértice 37: [17, 68, 79, 88]
Vértice 38: [9, 43, 48, 63]
Vértice 39: [9, 51, 69, 93]
Vértice 40: [3, 16, 22, 28]
Vértice 41: [17, 30, 64, 96]
Vértice 42: [15, 21, 92]
Vértice 43: [1, 31, 38, 51]
Vértice 44: [58, 62, 72]
Vértice 45: [28, 48, 61, 63]
Vértice 46: [16, 28, 56]
Vértice 47: [50, 59, 71]
Vértice 48: [2, 22, 38, 45]
Vértice 49: [17, 35, 68]
Vértice 50: [18, 47, 52, 98]
Vértice 51: [39, 43, 80]
Vértice 52: [50, 76, 89]
Vértice 53: [17, 25, 79]
Vértice 54: [7, 13, 24]
Vértice 55: [19, 58, 62, 81]
Vértice 56: [10, 46, 74]
Vértice 57: [5, 20, 70]
Vértice 58: [44, 55, 78]
Vértice 59: [8, 18, 47]
Vértice 60: [6, 91, 99]
Vértice 61: [45, 88, 90]
Vértice 62: [44, 55, 83, 88]
Vértice 63: [38, 45, 90]
Vértice 64: [41, 72, 87]
Vértice 65: [32, 84, 95]
Vértice 66: [1, 77, 82]
Vértice 67: [1, 31, 82]
Vértice 68: [37, 49, 94]
Vértice 69: [2, 39, 80]
Vértice 70: [12, 57, 73]
Vértice 71: [8, 47, 86, 90]
Vértice 72: [4, 44, 64, 78]
Vértice 73: [15, 21, 70, 89]
Vértice 74: [28, 56, 97]
Vértice 75: [8, 12, 85, 86, 93]
Vértice 76: [52, 84, 95]
Vértice 77: [23, 25, 66, 79]
Vértice 78: [58, 72, 87, 88]
Vértice 79: [37, 53, 77]
Vértice 80: [31, 51, 69]
Vértice 81: [4, 5, 55, 85]
Vértice 82: [25, 66, 67]
Vértice 83: [30, 33, 62, 96]
Vértice 84: [65, 76, 89]
Vértice 85: [29, 75, 81, 91]
Vértice 86: [14, 71, 75]
Vértice 87: [30, 64, 78]
Vértice 88: [19, 37, 61, 62, 78]
Vértice 89: [18, 52, 73, 84]
Vértice 90: [19, 61, 63, 71]
Vértice 91: [4, 60, 85]
Vértice 92: [32, 42, 95]
Vértice 93: [0, 13, 14, 20, 39, 75]
Vértice 94: [35, 68, 98]
Vértice 95: [65, 76, 92]
Vértice 96: [34, 41, 83]
Vértice 97: [10, 74, 99]
Vértice 98: [11, 22, 50, 94]
Vértice 99: [26, 60, 97]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 100 vértices, 150 arestas, menor grau: 3
Arestas do fator:
0 - 3
0 - 16
0 - 27
1 - 43
1 - 66
1 - 67
2 - 9
2 - 48
2 - 69
3 - 23
3 - 40
4 - 6
4 - 81
4 - 91
5 - 29
5 - 57
5 - 81
6 - 26
6 - 60
7 - 11
7 - 22
7 - 54
8 - 59
8 - 71
8 - 75
9 - 38
9 - 39
10 - 26
10 - 56
10 - 97
11 - 35
11 - 98
12 - 15
12 - 20
12 - 70
13 - 36
13 - 54
13 - 93
14 - 36
14 - 86
14 - 93
15 - 42
15 - 73
16 - 40
16 - 46
17 - 37
17 - 49
17 - 53
18 - 50
18 - 59
18 - 89
19 - 55
19 - 88
19 - 90
20 - 29
20 - 57
21 - 32
21 - 42
21 - 73
22 - 24
22 - 98
23 - 27
23 - 34
24 - 36
24 - 54
25 - 53
25 - 77
25 - 82
26 - 99
27 - 33
28 - 40
28 - 46
28 - 74
29 - 85
30 - 41
30 - 83
30 - 87
31 - 43
31 - 67
31 - 80
32 - 65
32 - 92
33 - 34
33 - 83
34 - 96
35 - 49
35 - 94
37 - 68
37 - 79
38 - 48
38 - 63
39 - 51
39 - 69
41 - 64
41 - 96
42 - 92
43 - 51
44 - 58
44 - 62
44 - 72
45 - 48
45 - 61
45 - 63
46 - 56
47 - 50
47 - 59
47 - 71
49 - 68
50 - 52
51 - 80
52 - 76
52 - 89
53 - 79
55 - 58
55 - 62
56 - 74
57 - 70
58 - 78
60 - 91
60 - 99
61 - 88
61 - 90
62 - 88
63 - 90
64 - 72
64 - 87
65 - 84
65 - 95
66 - 77
66 - 82
67 - 82
68 - 94
69 - 80
70 - 73
71 - 86
72 - 78
74 - 97
75 - 86
75 - 93
76 - 84
76 - 95
77 - 79
78 - 87
81 - 85
83 - 96
84 - 89
85 - 91
92 - 95
94 - 98
97 - 99
```

---

## Test 58: test_case_058_k3_n100.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 100

**K-Factor:** 3

**Execution Time:** 45.000 ms

**Edges:**

```
0 6
0 37
0 94
1 33
1 57
1 73
2 4
2 28
2 92
3 12
3 37
3 77
3 94
4 78
4 97
5 11
5 35
5 57
5 87
6 49
6 82
7 12
7 50
7 66
7 72
8 31
8 74
8 88
9 30
9 42
9 67
10 14
10 51
10 60
10 97
11 33
11 85
11 96
12 55
12 84
13 20
13 63
13 72
14 27
14 39
14 43
15 29
15 66
15 68
16 20
16 60
16 63
17 46
17 53
17 98
18 42
18 60
18 63
19 31
19 62
19 74
20 80
21 26
21 54
21 96
21 99
22 25
22 27
22 43
23 38
23 47
23 49
23 69
23 75
24 34
24 71
24 95
25 47
25 61
25 64
26 31
26 33
26 62
27 51
28 34
28 78
28 81
29 71
29 95
30 44
30 83
32 77
32 88
32 94
33 56
33 59
33 65
34 38
34 75
35 54
35 96
36 41
36 55
36 84
37 81
37 82
37 84
38 95
39 54
39 61
39 99
40 51
40 78
40 97
41 47
41 64
42 59
43 64
44 61
44 99
45 57
45 58
45 73
46 76
46 86
47 48
47 84
48 69
48 75
48 93
49 56
49 79
50 55
50 60
50 89
52 76
52 86
52 93
53 56
53 86
56 98
57 91
58 87
58 91
59 60
59 67
61 83
62 65
62 84
65 73
66 89
67 83
68 71
68 89
69 82
69 90
70 74
70 77
70 88
72 80
72 81
76 80
76 90
79 82
79 98
80 92
81 92
85 87
85 91
90 93
```

### Output

**Reason:** K-fator validado: 150 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 100 vértices, 170 arestas, menor grau: 3
Graus dos vértices: [3, 3, 3, 4, 3, 4, 3, 4, 3, 3, 4, 4, 4, 3, 4, 3, 3, 3, 3, 3, 3, 4, 3, 5, 3, 4, 4, 3, 4, 3, 3, 3, 3, 6, 4, 3, 3, 5, 3, 4, 3, 3, 3, 3, 3, 3, 3, 5, 4, 4, 4, 3, 3, 3, 3, 3, 4, 4, 3, 4, 5, 4, 4, 3, 3, 3, 3, 3, 3, 4, 3, 3, 4, 3, 3, 3, 4, 3, 3, 3, 4, 4, 4, 3, 5, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3]
Adjacências:
Vértice 0: [6, 37, 94]
Vértice 1: [33, 57, 73]
Vértice 2: [4, 28, 92]
Vértice 3: [12, 37, 77, 94]
Vértice 4: [2, 78, 97]
Vértice 5: [11, 35, 57, 87]
Vértice 6: [0, 49, 82]
Vértice 7: [12, 50, 66, 72]
Vértice 8: [31, 74, 88]
Vértice 9: [30, 42, 67]
Vértice 10: [14, 51, 60, 97]
Vértice 11: [5, 33, 85, 96]
Vértice 12: [3, 7, 55, 84]
Vértice 13: [20, 63, 72]
Vértice 14: [10, 27, 39, 43]
Vértice 15: [29, 66, 68]
Vértice 16: [20, 60, 63]
Vértice 17: [46, 53, 98]
Vértice 18: [42, 60, 63]
Vértice 19: [31, 62, 74]
Vértice 20: [13, 16, 80]
Vértice 21: [26, 54, 96, 99]
Vértice 22: [25, 27, 43]
Vértice 23: [38, 47, 49, 69, 75]
Vértice 24: [34, 71, 95]
Vértice 25: [22, 47, 61, 64]
Vértice 26: [21, 31, 33, 62]
Vértice 27: [14, 22, 51]
Vértice 28: [2, 34, 78, 81]
Vértice 29: [15, 71, 95]
Vértice 30: [9, 44, 83]
Vértice 31: [8, 19, 26]
Vértice 32: [77, 88, 94]
Vértice 33: [1, 11, 26, 56, 59, 65]
Vértice 34: [24, 28, 38, 75]
Vértice 35: [5, 54, 96]
Vértice 36: [41, 55, 84]
Vértice 37: [0, 3, 81, 82, 84]
Vértice 38: [23, 34, 95]
Vértice 39: [14, 54, 61, 99]
Vértice 40: [51, 78, 97]
Vértice 41: [36, 47, 64]
Vértice 42: [9, 18, 59]
Vértice 43: [14, 22, 64]
Vértice 44: [30, 61, 99]
Vértice 45: [57, 58, 73]
Vértice 46: [17, 76, 86]
Vértice 47: [23, 25, 41, 48, 84]
Vértice 48: [47, 69, 75, 93]
Vértice 49: [6, 23, 56, 79]
Vértice 50: [7, 55, 60, 89]
Vértice 51: [10, 27, 40]
Vértice 52: [76, 86, 93]
Vértice 53: [17, 56, 86]
Vértice 54: [21, 35, 39]
Vértice 55: [12, 36, 50]
Vértice 56: [33, 49, 53, 98]
Vértice 57: [1, 5, 45, 91]
Vértice 58: [45, 87, 91]
Vértice 59: [33, 42, 60, 67]
Vértice 60: [10, 16, 18, 50, 59]
Vértice 61: [25, 39, 44, 83]
Vértice 62: [19, 26, 65, 84]
Vértice 63: [13, 16, 18]
Vértice 64: [25, 41, 43]
Vértice 65: [33, 62, 73]
Vértice 66: [7, 15, 89]
Vértice 67: [9, 59, 83]
Vértice 68: [15, 71, 89]
Vértice 69: [23, 48, 82, 90]
Vértice 70: [74, 77, 88]
Vértice 71: [24, 29, 68]
Vértice 72: [7, 13, 80, 81]
Vértice 73: [1, 45, 65]
Vértice 74: [8, 19, 70]
Vértice 75: [23, 34, 48]
Vértice 76: [46, 52, 80, 90]
Vértice 77: [3, 32, 70]
Vértice 78: [4, 28, 40]
Vértice 79: [49, 82, 98]
Vértice 80: [20, 72, 76, 92]
Vértice 81: [28, 37, 72, 92]
Vértice 82: [6, 37, 69, 79]
Vértice 83: [30, 61, 67]
Vértice 84: [12, 36, 37, 47, 62]
Vértice 85: [11, 87, 91]
Vértice 86: [46, 52, 53]
Vértice 87: [5, 58, 85]
Vértice 88: [8, 32, 70]
Vértice 89: [50, 66, 68]
Vértice 90: [69, 76, 93]
Vértice 91: [57, 58, 85]
Vértice 92: [2, 80, 81]
Vértice 93: [48, 52, 90]
Vértice 94: [0, 3, 32]
Vértice 95: [24, 29, 38]
Vértice 96: [11, 21, 35]
Vértice 97: [4, 10, 40]
Vértice 98: [17, 56, 79]
Vértice 99: [21, 39, 44]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 100 vértices, 150 arestas, menor grau: 3
Arestas do fator:
0 - 6
0 - 37
0 - 94
1 - 33
1 - 57
1 - 73
2 - 4
2 - 28
2 - 92
3 - 37
3 - 77
3 - 94
4 - 78
4 - 97
5 - 11
5 - 35
5 - 87
6 - 49
6 - 82
7 - 12
7 - 50
7 - 66
8 - 31
8 - 74
8 - 88
9 - 30
9 - 42
9 - 67
10 - 14
10 - 51
10 - 97
11 - 85
11 - 96
12 - 55
12 - 84
13 - 20
13 - 63
13 - 72
14 - 27
14 - 43
15 - 29
15 - 66
15 - 68
16 - 20
16 - 60
16 - 63
17 - 46
17 - 53
17 - 98
18 - 42
18 - 60
18 - 63
19 - 31
19 - 62
19 - 74
20 - 80
21 - 54
21 - 96
21 - 99
22 - 25
22 - 27
22 - 43
23 - 38
23 - 47
23 - 75
24 - 34
24 - 71
24 - 95
25 - 47
25 - 64
26 - 31
26 - 33
26 - 62
27 - 51
28 - 78
28 - 81
29 - 71
29 - 95
30 - 44
30 - 83
32 - 77
32 - 88
32 - 94
33 - 65
34 - 38
34 - 75
35 - 54
35 - 96
36 - 41
36 - 55
36 - 84
37 - 84
38 - 95
39 - 54
39 - 61
39 - 99
40 - 51
40 - 78
40 - 97
41 - 47
41 - 64
42 - 59
43 - 64
44 - 61
44 - 99
45 - 57
45 - 58
45 - 73
46 - 76
46 - 86
48 - 69
48 - 75
48 - 93
49 - 56
49 - 79
50 - 55
50 - 89
52 - 76
52 - 86
52 - 93
53 - 56
53 - 86
56 - 98
57 - 91
58 - 87
58 - 91
59 - 60
59 - 67
61 - 83
62 - 65
65 - 73
66 - 89
67 - 83
68 - 71
68 - 89
69 - 82
69 - 90
70 - 74
70 - 77
70 - 88
72 - 80
72 - 81
76 - 90
79 - 82
79 - 98
80 - 92
81 - 92
85 - 87
85 - 91
90 - 93
```

---

## Test 59: test_case_059_k3_n100.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 100

**K-Factor:** 3

**Execution Time:** 44.000 ms

**Edges:**

```
0 37
0 75
0 88
1 27
1 28
1 48
2 31
2 43
2 59
2 72
3 30
3 56
3 71
4 32
4 50
4 64
5 16
5 31
5 72
6 54
6 56
6 60
7 26
7 47
7 49
7 70
8 13
8 15
8 39
8 58
9 23
9 40
9 83
10 12
10 97
10 98
11 13
11 42
11 82
11 84
12 25
12 29
12 85
13 18
14 20
14 34
14 92
15 18
15 57
16 24
16 93
17 33
17 38
17 44
17 51
18 84
19 34
19 74
19 96
20 46
20 65
20 80
21 22
21 27
21 28
22 57
22 87
23 91
23 99
24 27
24 48
24 56
25 35
25 97
26 41
26 86
27 52
28 87
29 37
29 70
29 75
30 73
30 81
31 93
32 42
32 45
33 69
33 88
34 46
34 47
34 93
35 62
35 65
35 85
36 55
36 66
36 86
37 41
38 39
38 47
38 81
38 94
39 67
39 76
39 95
40 90
40 99
41 70
41 99
42 64
43 62
43 63
43 82
44 69
44 98
45 50
45 79
46 74
47 71
47 79
48 93
49 66
49 86
50 94
51 97
51 98
52 69
52 75
52 88
53 55
53 66
53 68
53 77
54 55
54 68
56 73
56 95
57 58
58 87
59 63
59 82
60 68
60 73
61 65
61 74
61 96
62 67
62 94
62 95
63 72
64 84
64 90
65 89
66 97
67 82
71 81
76 90
76 99
77 78
77 80
77 83
78 91
78 92
79 94
80 92
83 91
85 89
87 89
89 96
90 95
```

### Output

**Reason:** K-fator validado: 150 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 100 vértices, 170 arestas, menor grau: 3
Graus dos vértices: [3, 3, 4, 3, 3, 3, 3, 4, 4, 3, 3, 4, 4, 3, 3, 3, 3, 4, 3, 3, 4, 3, 3, 3, 4, 3, 3, 4, 3, 4, 3, 3, 3, 3, 5, 4, 3, 3, 5, 5, 3, 4, 3, 4, 3, 3, 3, 5, 3, 3, 3, 3, 4, 4, 3, 3, 5, 3, 3, 3, 3, 3, 5, 3, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 4, 3, 3, 3, 3, 4, 3, 4, 4, 3, 3, 4, 4, 4, 3, 4, 3, 4]
Adjacências:
Vértice 0: [37, 75, 88]
Vértice 1: [27, 28, 48]
Vértice 2: [31, 43, 59, 72]
Vértice 3: [30, 56, 71]
Vértice 4: [32, 50, 64]
Vértice 5: [16, 31, 72]
Vértice 6: [54, 56, 60]
Vértice 7: [26, 47, 49, 70]
Vértice 8: [13, 15, 39, 58]
Vértice 9: [23, 40, 83]
Vértice 10: [12, 97, 98]
Vértice 11: [13, 42, 82, 84]
Vértice 12: [10, 25, 29, 85]
Vértice 13: [8, 11, 18]
Vértice 14: [20, 34, 92]
Vértice 15: [8, 18, 57]
Vértice 16: [5, 24, 93]
Vértice 17: [33, 38, 44, 51]
Vértice 18: [13, 15, 84]
Vértice 19: [34, 74, 96]
Vértice 20: [14, 46, 65, 80]
Vértice 21: [22, 27, 28]
Vértice 22: [21, 57, 87]
Vértice 23: [9, 91, 99]
Vértice 24: [16, 27, 48, 56]
Vértice 25: [12, 35, 97]
Vértice 26: [7, 41, 86]
Vértice 27: [1, 21, 24, 52]
Vértice 28: [1, 21, 87]
Vértice 29: [12, 37, 70, 75]
Vértice 30: [3, 73, 81]
Vértice 31: [2, 5, 93]
Vértice 32: [4, 42, 45]
Vértice 33: [17, 69, 88]
Vértice 34: [14, 19, 46, 47, 93]
Vértice 35: [25, 62, 65, 85]
Vértice 36: [55, 66, 86]
Vértice 37: [0, 29, 41]
Vértice 38: [17, 39, 47, 81, 94]
Vértice 39: [8, 38, 67, 76, 95]
Vértice 40: [9, 90, 99]
Vértice 41: [26, 37, 70, 99]
Vértice 42: [11, 32, 64]
Vértice 43: [2, 62, 63, 82]
Vértice 44: [17, 69, 98]
Vértice 45: [32, 50, 79]
Vértice 46: [20, 34, 74]
Vértice 47: [7, 34, 38, 71, 79]
Vértice 48: [1, 24, 93]
Vértice 49: [7, 66, 86]
Vértice 50: [4, 45, 94]
Vértice 51: [17, 97, 98]
Vértice 52: [27, 69, 75, 88]
Vértice 53: [55, 66, 68, 77]
Vértice 54: [6, 55, 68]
Vértice 55: [36, 53, 54]
Vértice 56: [3, 6, 24, 73, 95]
Vértice 57: [15, 22, 58]
Vértice 58: [8, 57, 87]
Vértice 59: [2, 63, 82]
Vértice 60: [6, 68, 73]
Vértice 61: [65, 74, 96]
Vértice 62: [35, 43, 67, 94, 95]
Vértice 63: [43, 59, 72]
Vértice 64: [4, 42, 84, 90]
Vértice 65: [20, 35, 61, 89]
Vértice 66: [36, 49, 53, 97]
Vértice 67: [39, 62, 82]
Vértice 68: [53, 54, 60]
Vértice 69: [33, 44, 52]
Vértice 70: [7, 29, 41]
Vértice 71: [3, 47, 81]
Vértice 72: [2, 5, 63]
Vértice 73: [30, 56, 60]
Vértice 74: [19, 46, 61]
Vértice 75: [0, 29, 52]
Vértice 76: [39, 90, 99]
Vértice 77: [53, 78, 80, 83]
Vértice 78: [77, 91, 92]
Vértice 79: [45, 47, 94]
Vértice 80: [20, 77, 92]
Vértice 81: [30, 38, 71]
Vértice 82: [11, 43, 59, 67]
Vértice 83: [9, 77, 91]
Vértice 84: [11, 18, 64]
Vértice 85: [12, 35, 89]
Vértice 86: [26, 36, 49]
Vértice 87: [22, 28, 58, 89]
Vértice 88: [0, 33, 52]
Vértice 89: [65, 85, 87, 96]
Vértice 90: [40, 64, 76, 95]
Vértice 91: [23, 78, 83]
Vértice 92: [14, 78, 80]
Vértice 93: [16, 31, 34, 48]
Vértice 94: [38, 50, 62, 79]
Vértice 95: [39, 56, 62, 90]
Vértice 96: [19, 61, 89]
Vértice 97: [10, 25, 51, 66]
Vértice 98: [10, 44, 51]
Vértice 99: [23, 40, 41, 76]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 100 vértices, 150 arestas, menor grau: 3
Arestas do fator:
0 - 37
0 - 75
0 - 88
1 - 27
1 - 28
1 - 48
2 - 31
2 - 59
2 - 72
3 - 30
3 - 56
3 - 71
4 - 32
4 - 50
4 - 64
5 - 16
5 - 31
5 - 72
6 - 54
6 - 56
6 - 60
7 - 26
7 - 49
7 - 70
8 - 13
8 - 15
8 - 58
9 - 23
9 - 40
9 - 83
10 - 12
10 - 97
10 - 98
11 - 13
11 - 42
11 - 84
12 - 25
12 - 85
13 - 18
14 - 20
14 - 34
14 - 92
15 - 18
15 - 57
16 - 24
16 - 93
17 - 33
17 - 44
17 - 51
18 - 84
19 - 34
19 - 74
19 - 96
20 - 46
20 - 80
21 - 22
21 - 27
21 - 28
22 - 57
22 - 87
23 - 91
23 - 99
24 - 27
24 - 48
25 - 35
25 - 97
26 - 41
26 - 86
28 - 87
29 - 37
29 - 70
29 - 75
30 - 73
30 - 81
31 - 93
32 - 42
32 - 45
33 - 69
33 - 88
34 - 46
35 - 65
35 - 85
36 - 55
36 - 66
36 - 86
37 - 41
38 - 47
38 - 81
38 - 94
39 - 67
39 - 76
39 - 95
40 - 90
40 - 99
41 - 70
42 - 64
43 - 62
43 - 63
43 - 82
44 - 69
44 - 98
45 - 50
45 - 79
46 - 74
47 - 71
47 - 79
48 - 93
49 - 66
49 - 86
50 - 94
51 - 97
51 - 98
52 - 69
52 - 75
52 - 88
53 - 55
53 - 66
53 - 68
54 - 55
54 - 68
56 - 73
57 - 58
58 - 87
59 - 63
59 - 82
60 - 68
60 - 73
61 - 65
61 - 74
61 - 96
62 - 67
62 - 95
63 - 72
64 - 84
65 - 89
67 - 82
71 - 81
76 - 90
76 - 99
77 - 78
77 - 80
77 - 83
78 - 91
78 - 92
79 - 94
80 - 92
83 - 91
85 - 89
89 - 96
90 - 95
```

---

## Test 60: test_case_060_k3_n100.txt

**Status:** ✅ PASSOU

### Input

**Number of Vertices:** 100

**K-Factor:** 3

**Execution Time:** 44.000 ms

**Edges:**

```
0 22
0 52
0 77
1 32
1 52
1 72
2 29
2 79
2 96
3 22
3 52
3 72
3 83
4 31
4 38
4 58
4 94
5 54
5 89
5 99
6 46
6 53
6 58
7 25
7 31
7 76
7 88
8 25
8 77
8 88
9 21
9 45
9 83
10 54
10 81
10 99
11 33
11 36
11 48
12 18
12 37
12 60
12 84
13 63
13 79
13 96
14 29
14 41
14 96
15 42
15 50
15 95
16 19
16 46
16 53
16 60
17 26
17 51
17 67
17 92
18 70
18 75
19 80
19 92
20 33
20 71
20 76
21 62
21 82
21 84
22 24
23 34
23 43
23 71
23 90
24 25
24 73
24 77
26 32
26 56
27 47
27 80
27 93
28 29
28 34
28 41
28 91
30 45
30 83
30 95
31 66
32 67
33 40
33 53
34 55
35 47
35 80
35 92
36 78
36 85
37 42
37 50
37 63
37 73
38 64
38 66
38 69
39 71
39 75
39 76
40 48
40 76
40 87
41 55
42 87
43 55
43 74
43 92
44 70
44 71
44 75
45 85
45 87
46 92
47 59
48 85
49 51
49 78
49 81
49 86
50 64
51 56
51 68
51 84
53 69
54 65
56 98
57 62
57 82
57 94
58 69
59 64
59 93
60 70
60 81
60 94
61 78
61 85
61 86
62 83
63 65
63 97
64 73
65 89
66 88
67 72
68 87
68 90
68 98
73 93
74 90
74 98
79 97
81 91
82 84
84 94
86 91
87 95
89 97
91 99
```

### Output

**Reason:** K-fator validado: 150 arestas, todos os graus iguais a 3

**Full Output:**

```
Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):
grafo orgiginal G:
Grafo: 100 vértices, 170 arestas, menor grau: 3
Graus dos vértices: [3, 3, 3, 4, 4, 3, 3, 4, 3, 3, 3, 3, 4, 3, 3, 3, 4, 4, 3, 3, 3, 4, 3, 4, 4, 3, 3, 3, 4, 3, 3, 3, 3, 4, 3, 3, 3, 5, 4, 3, 4, 3, 3, 4, 3, 4, 3, 3, 3, 4, 3, 5, 3, 4, 3, 3, 3, 3, 3, 3, 5, 3, 3, 4, 4, 3, 3, 3, 4, 3, 3, 4, 3, 4, 3, 3, 4, 3, 3, 3, 3, 4, 3, 4, 5, 4, 3, 5, 3, 3, 3, 4, 5, 3, 4, 3, 3, 3, 3, 3]
Adjacências:
Vértice 0: [22, 52, 77]
Vértice 1: [32, 52, 72]
Vértice 2: [29, 79, 96]
Vértice 3: [22, 52, 72, 83]
Vértice 4: [31, 38, 58, 94]
Vértice 5: [54, 89, 99]
Vértice 6: [46, 53, 58]
Vértice 7: [25, 31, 76, 88]
Vértice 8: [25, 77, 88]
Vértice 9: [21, 45, 83]
Vértice 10: [54, 81, 99]
Vértice 11: [33, 36, 48]
Vértice 12: [18, 37, 60, 84]
Vértice 13: [63, 79, 96]
Vértice 14: [29, 41, 96]
Vértice 15: [42, 50, 95]
Vértice 16: [19, 46, 53, 60]
Vértice 17: [26, 51, 67, 92]
Vértice 18: [12, 70, 75]
Vértice 19: [16, 80, 92]
Vértice 20: [33, 71, 76]
Vértice 21: [9, 62, 82, 84]
Vértice 22: [0, 3, 24]
Vértice 23: [34, 43, 71, 90]
Vértice 24: [22, 25, 73, 77]
Vértice 25: [7, 8, 24]
Vértice 26: [17, 32, 56]
Vértice 27: [47, 80, 93]
Vértice 28: [29, 34, 41, 91]
Vértice 29: [2, 14, 28]
Vértice 30: [45, 83, 95]
Vértice 31: [4, 7, 66]
Vértice 32: [1, 26, 67]
Vértice 33: [11, 20, 40, 53]
Vértice 34: [23, 28, 55]
Vértice 35: [47, 80, 92]
Vértice 36: [11, 78, 85]
Vértice 37: [12, 42, 50, 63, 73]
Vértice 38: [4, 64, 66, 69]
Vértice 39: [71, 75, 76]
Vértice 40: [33, 48, 76, 87]
Vértice 41: [14, 28, 55]
Vértice 42: [15, 37, 87]
Vértice 43: [23, 55, 74, 92]
Vértice 44: [70, 71, 75]
Vértice 45: [9, 30, 85, 87]
Vértice 46: [6, 16, 92]
Vértice 47: [27, 35, 59]
Vértice 48: [11, 40, 85]
Vértice 49: [51, 78, 81, 86]
Vértice 50: [15, 37, 64]
Vértice 51: [17, 49, 56, 68, 84]
Vértice 52: [0, 1, 3]
Vértice 53: [6, 16, 33, 69]
Vértice 54: [5, 10, 65]
Vértice 55: [34, 41, 43]
Vértice 56: [26, 51, 98]
Vértice 57: [62, 82, 94]
Vértice 58: [4, 6, 69]
Vértice 59: [47, 64, 93]
Vértice 60: [12, 16, 70, 81, 94]
Vértice 61: [78, 85, 86]
Vértice 62: [21, 57, 83]
Vértice 63: [13, 37, 65, 97]
Vértice 64: [38, 50, 59, 73]
Vértice 65: [54, 63, 89]
Vértice 66: [31, 38, 88]
Vértice 67: [17, 32, 72]
Vértice 68: [51, 87, 90, 98]
Vértice 69: [38, 53, 58]
Vértice 70: [18, 44, 60]
Vértice 71: [20, 23, 39, 44]
Vértice 72: [1, 3, 67]
Vértice 73: [24, 37, 64, 93]
Vértice 74: [43, 90, 98]
Vértice 75: [18, 39, 44]
Vértice 76: [7, 20, 39, 40]
Vértice 77: [0, 8, 24]
Vértice 78: [36, 49, 61]
Vértice 79: [2, 13, 97]
Vértice 80: [19, 27, 35]
Vértice 81: [10, 49, 60, 91]
Vértice 82: [21, 57, 84]
Vértice 83: [3, 9, 30, 62]
Vértice 84: [12, 21, 51, 82, 94]
Vértice 85: [36, 45, 48, 61]
Vértice 86: [49, 61, 91]
Vértice 87: [40, 42, 45, 68, 95]
Vértice 88: [7, 8, 66]
Vértice 89: [5, 65, 97]
Vértice 90: [23, 68, 74]
Vértice 91: [28, 81, 86, 99]
Vértice 92: [17, 19, 35, 43, 46]
Vértice 93: [27, 59, 73]
Vértice 94: [4, 57, 60, 84]
Vértice 95: [15, 30, 87]
Vértice 96: [2, 13, 14]
Vértice 97: [63, 79, 89]
Vértice 98: [56, 68, 74]
Vértice 99: [5, 10, 91]

Digite o valor de k (para encontrar um k-fator): menor grau: 3
Criando grafo inflado ... 
grafo inflado criado!
Buscando emparelhamento maximo no grafo inflado ...
emparelhamento encontrado!
emparelhamento é perfeito!
3-fator encontrado:
Fator: 100 vértices, 150 arestas, menor grau: 3
Arestas do fator:
0 - 22
0 - 52
0 - 77
1 - 32
1 - 52
1 - 72
2 - 29
2 - 79
2 - 96
3 - 22
3 - 52
3 - 72
4 - 31
4 - 38
4 - 58
5 - 54
5 - 89
5 - 99
6 - 46
6 - 53
6 - 58
7 - 25
7 - 31
7 - 88
8 - 25
8 - 77
8 - 88
9 - 21
9 - 45
9 - 83
10 - 54
10 - 81
10 - 99
11 - 33
11 - 36
11 - 48
12 - 18
12 - 60
12 - 84
13 - 63
13 - 79
13 - 96
14 - 29
14 - 41
14 - 96
15 - 42
15 - 50
15 - 95
16 - 19
16 - 46
16 - 53
17 - 26
17 - 51
17 - 67
18 - 70
18 - 75
19 - 80
19 - 92
20 - 33
20 - 71
20 - 76
21 - 62
21 - 82
22 - 24
23 - 34
23 - 43
23 - 90
24 - 25
24 - 77
26 - 32
26 - 56
27 - 47
27 - 80
27 - 93
28 - 29
28 - 34
28 - 41
30 - 45
30 - 83
30 - 95
31 - 66
32 - 67
33 - 40
34 - 55
35 - 47
35 - 80
35 - 92
36 - 78
36 - 85
37 - 42
37 - 50
37 - 73
38 - 66
38 - 69
39 - 71
39 - 75
39 - 76
40 - 48
40 - 76
41 - 55
42 - 87
43 - 55
43 - 74
44 - 70
44 - 71
44 - 75
45 - 87
46 - 92
47 - 59
48 - 85
49 - 78
49 - 81
49 - 86
50 - 64
51 - 56
51 - 68
53 - 69
54 - 65
56 - 98
57 - 62
57 - 82
57 - 94
58 - 69
59 - 64
59 - 93
60 - 70
60 - 94
61 - 78
61 - 85
61 - 86
62 - 83
63 - 65
63 - 97
64 - 73
65 - 89
66 - 88
67 - 72
68 - 90
68 - 98
73 - 93
74 - 90
74 - 98
79 - 97
81 - 91
82 - 84
84 - 94
86 - 91
87 - 95
89 - 97
91 - 99
```

---

## Average Time by Number of Vertices

| Number of Vertices | Average Time |
| ---: | ---: |
| 10 | 4.000 ms |
| 50 | 12.200 ms |
| 100 | 34.200 ms |
