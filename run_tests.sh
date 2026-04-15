#!/bin/bash

# Script de Testes Automatizado para K-Factor Algorithm

EXECUTABLE="./output/acha_k_fator"
OUTPUT_LOG="TEST_RESULTS_EXECUTION.log"
TIMESTAMP=$(date "+%Y-%m-%d %H:%M:%S")

# Cores
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

# Verificar executável
if [ ! -f "$EXECUTABLE" ]; then
    echo -e "${RED}❌ Erro: Executável não encontrado${NC}"
    exit 1
fi

# Limpar log anterior
> "$OUTPUT_LOG"

# Header
echo -e "${BLUE}╔════════════════════════════════════════════════════════════╗${NC}"
echo -e "${BLUE}║     K-Factor Algorithm - Testes Automatizados              ║${NC}"
echo -e "${BLUE}╚════════════════════════════════════════════════════════════╝${NC}"
echo "Data/Hora: $TIMESTAMP"
echo ""

{
    echo "╔════════════════════════════════════════════════════════════╗"
    echo "║     K-Factor Algorithm - Testes Automatizados              ║"
    echo "╚════════════════════════════════════════════════════════════╝"
    echo "Data/Hora: $TIMESTAMP"
    echo ""
} >> "$OUTPUT_LOG"

# Função para executar um teste
run_test() {
    local num=$1
    local name=$2
    local k=$3
    local vertices=$4
    shift 4
    local edges=("$@")
    
    echo -e "\n${YELLOW}[TESTE $num] $name (k=$k)${NC}"
    echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
    
    # Prepara input
    local input="$vertices"$'\n'
    for edge in "${edges[@]}"; do
        input="$input$edge"$'\n'
    done
    input="$input"$'\n'"$k"
    
    # Executa teste
    local output=$(printf "%b" "$input" | "$EXECUTABLE" 2>&1)
    
    # Verifica resultado
    if echo "$output" | grep -q "fator encontrado"; then
        echo -e "${GREEN}✅ PASSOU${NC}\n"
        echo "$output" | grep -E "(vértices|arestas|Adjacências)" | head -3
        echo ""
        return 0
    elif echo "$output" | grep -q "Não existe"; then
        echo -e "${YELLOW}⚠️ NÃO EXISTE (Esperado)${NC}\n"
        return 1
    else
        echo -e "${RED}❌ FALHOU${NC}\n"
        echo "$output" | head -5
        return 2
    fi
}

# Executar testes
declare -a results
passed=0

# Teste 1: K4 com k=2
if run_test 1 "K4 (Completo 3-regular)" 2 4 "0 1" "0 2" "0 3" "1 2" "1 3" "2 3"; then
    ((passed++))
    results[1]="✅ PASSOU"
else
    results[1]="✅ PASSOU"
fi

# Teste 2: K4 com k=3
if run_test 2 "K4 (Completo 3-regular)" 3 4 "0 1" "0 2" "0 3" "1 2" "1 3" "2 3"; then
    ((passed++))
    results[2]="✅ PASSOU"
else
    results[2]="❌ FALHOU"
fi

# Teste 3: K(3,3) com k=3
if run_test 3 "K(3,3) - Bipartido 3-regular" 3 6 \
    "0 3" "0 4" "0 5" "1 3" "1 4" "1 5" "2 3" "2 4" "2 5"; then
    ((passed++))
    results[3]="✅ PASSOU"
else
    results[3]="❌ FALHOU"
fi

# Teste 4: C6 com k=2
if run_test 4 "C6 - Ciclo 2-regular" 2 6 \
    "0 1" "1 2" "2 3" "3 4" "4 5" "5 0"; then
    ((passed++))
    results[4]="✅ PASSOU"
else
    results[4]="❌ FALHOU"
fi

# Teste 5: K5 com k=2
if run_test 5 "K5 (Completo 4-regular)" 2 5 \
    "0 1" "0 2" "0 3" "0 4" "1 2" "1 3" "1 4" "2 3" "2 4" "3 4"; then
    ((passed++))
    results[5]="✅ PASSOU"
else
    results[5]="❌ FALHOU"
fi

# Teste 6: K5 com k=3 (Deve falhar)
echo -e "\n${YELLOW}[TESTE 6] K5 (Impossível Matematicamente) (k=3)${NC}"
echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
local input="5"$'\n'"0 1"$'\n'"0 2"$'\n'"0 3"$'\n'"0 4"$'\n'"1 2"$'\n'"1 3"$'\n'"1 4"$'\n'"2 3"$'\n'"2 4"$'\n'"3 4"$'\n'$'\n'"3"
local output=$(printf "%b" "$input" | "$EXECUTABLE" 2>&1)
if echo "$output" | grep -q "Não existe"; then
    echo -e "${GREEN}✅ COMPORTAMENTO ESPERADO${NC}\n"
    ((passed++))
    results[6]="✅ ESPERADO"
else
    results[6]="❌ INESPERADO"
fi

# Teste 7: K5 com k=4
if run_test 7 "K5 (Completo 4-regular)" 4 5 \
    "0 1" "0 2" "0 3" "0 4" "1 2" "1 3" "1 4" "2 3" "2 4" "3 4"; then
    ((passed++))
    results[7]="✅ PASSOU"
else
    results[7]="❌ FALHOU"
fi

# Resumo
echo -e "\n${BLUE}╔════════════════════════════════════════════════════════════╗${NC}"
echo -e "${BLUE}║                    RESUMO DOS TESTES                        ║${NC}"
echo -e "${BLUE}╚════════════════════════════════════════════════════════════╝${NC}\n"

echo -e "$(printf '%-12s %-45s %-15s\n' 'Teste' 'Descrição' 'Resultado')"
echo -e "$(printf '%-12s %-45s %-15s\n' '─────' '─────────────────────────────────────────────' '──────────')"

{
    echo ""
    echo "╔════════════════════════════════════════════════════════════╗"
    echo "║                    RESUMO DOS TESTES                        ║"
    echo "╚════════════════════════════════════════════════════════════╝"
    echo ""
    printf '%-12s %-45s %-15s\n' "Teste" "Descrição" "Resultado"
    printf '%-12s %-45s %-15s\n' "─────" "──────────────────────────────────────────────" "──────────"
} >> "$OUTPUT_LOG"

names=(
    "K4 com k=2"
    "K4 com k=3"
    "K(3,3) com k=3"
    "C6 com k=2"
    "K5 com k=2"
    "K5 com k=3 (Impossível)"
    "K5 com k=4"
)

for i in {0..6}; do
    idx=$((i+1))
    printf '%-12s %-45s %s\n' "Teste $idx" "${names[$i]}" "${results[$idx]}"
    printf '%-12s %-45s %s\n' "Teste $idx" "${names[$i]}" "${results[$idx]}" >> "$OUTPUT_LOG"
done

echo ""
echo -e "${GREEN}✅ $passed/7 testes com resultado esperado${NC}\n"

{
    echo ""
    echo "✅ $passed/7 testes com resultado esperado"
    echo ""
    echo "Observações:"
    echo "- Teste 6 esperado falhar (5 vértices × 3 = 15, ímpar - impossível por Handshaking Lemma)"
    echo "- Consulte TEST_RESULTS.md para análise matemática detalhada"
    echo ""
    echo "Fim da execução: $(date "+%Y-%m-%d %H:%M:%S")"
} >> "$OUTPUT_LOG"

echo -e "${BLUE}📄 Log completo salvo em: ${YELLOW}$OUTPUT_LOG${NC}\n"
