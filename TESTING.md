# 🧪 Script de Testes Automatizado - K-Factor Algorithm

## Como Usar

### Executar todos os testes
```bash
bash run_tests.sh
```

Isso vai:
1. ✅ Compilar o projeto automaticamente (se necessário)
2. 🏃 Executar 7 testes com diferentes grafos e valores de k
3. 🖨️ Imprimir resultados formatados no console
4. 📄 Registrar todos os resultados em `TEST_RESULTS_EXECUTION.log`

### Resultado Esperado
```
✅ 6/7 testes com resultado esperado

Teste 1      K4 com k=2                                    ✅ PASSOU
Teste 2      K4 com k=3                                    ✅ PASSOU
Teste 3      K(3,3) com k=3                                ✅ PASSOU
Teste 4      C6 com k=2                                    ✅ PASSOU
Teste 5      K5 com k=2                                    ✅ PASSOU
Teste 6      K5 com k=3 (Impossível)                      ❌ ESPERADO
Teste 7      K5 com k=4                                    ✅ PASSOU
```

---

## 📋 Testes Inclusos

| # | Grafo | K | Tipo | Resultado |
|---|-------|---|------|-----------|
| 1 | K4 | 2 | Completo 3-regular | ✅ Encontra 2-fator |
| 2 | K4 | 3 | Completo 3-regular | ✅ Encontra 3-fator |
| 3 | K(3,3) | 3 | Bipartido 3-regular | ✅ Encontra 3-fator |
| 4 | C6 | 2 | Ciclo 2-regular | ✅ Encontra 2-fator |
| 5 | K5 | 2 | Completo 4-regular | ✅ Encontra 2-fator |
| 6 | K5 | 3 | Completo 4-regular | ❌ **Impossível** |
| 7 | K5 | 4 | Completo 4-regular | ✅ Encontra 4-fator |

---

## 🔍 Por que Teste 6 Falha?

**Handshaking Lemma - Prova Matemática:**

Um 3-fator exigiria que todos os 5 vértices tivessem grau exatamente 3.

```
Soma de graus = 5 × 3 = 15 (ímpar)
```

Mas por definição: **Soma de graus = 2 × número de arestas** (sempre par)

Como 15 é ímpar, é **matematicamente impossível** criar um 3-fator em K5! ✅

---

## 📊 Arquivos Gerados

- `TEST_RESULTS_EXECUTION.log` - Log completo de uma execução
- `TEST_RESULTS.md` - Análise detalhada com exemplos
- `test_cases.txt` - 8 casos de teste documentados

---

## ⚙️ Detalhes Técnicos

- **Linguagem:** Bash
- **Dependências:** Compilador C++ (clang/gcc)
- **Tempo de execução:** ~2-3 segundos
- **Saída:** Console colorido + arquivo log

---

## 💡 Customize os Testes

Para adicionar seus próprios testes, edite `run_tests.sh` e adicione uma nova chamada:

```bash
# Seu novo teste
if run_test NUM "Nome do Teste" K "Número de Vértices" "aresta1" "aresta2" ...; then
    ((passed++))
    results[NUM]="✅ PASSOU"
else
    results[NUM]="❌ FALHOU"
fi
```

---

## 📚 Leitura Adicional

- Consulte `TEST_RESULTS.md` para análise matemática detalhada
- Leia `test_cases.txt` para exemplos de entrada
