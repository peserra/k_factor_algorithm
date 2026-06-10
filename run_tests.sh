#!/bin/bash

# Script de Testes Automatizado para K-Factor Algorithm
# Testa casos gerados por tests-generator.py

EXECUTABLE="./output/acha_k_fator"
OUTPUT_LOG="TEST_RESULTS_EXECUTION.log"
TEST_DIR="./tests"
TEST_RESULTS_DIR="./test-results"
TEST_PATTERN="test_case_*.txt"
MARKDOWN_REPORT="$TEST_RESULTS_DIR/TEST_REPORT.md"
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

# Criar pasta de resultados se não existir
mkdir -p "$TEST_RESULTS_DIR"

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

# Função para extrair k-factor do nome do arquivo
extract_k_factor() {
    local filename=$1
    # Extrai k do padrão test_case_X_kK_nN.txt
    if [[ $filename =~ _k([0-9]+)_ ]]; then
        echo "${BASH_REMATCH[1]}"
    fi
}

# Função para gerar relatório em Markdown
generate_markdown_report() {
    local total=$1
    local passed=$2
    local success_rate=0

    if [ "$total" -gt 0 ]; then
        success_rate=$(echo "scale=1; ($passed * 100) / $total" | bc)
    fi

    {
        echo "# K-Factor Algorithm - Test Report"
        echo ""
        echo "**Data/Hora:** $TIMESTAMP"
        echo ""
        echo "## Summary"
        echo ""
        echo "- **Total Tests:** $total"
        echo "- **Passed:** $passed"
        echo "- **Failed/No Solution:** $((total - passed))"
        echo "- **Success Rate:** ${success_rate}%"
        echo ""
        echo "---"
        echo ""

        for i in "${!test_files[@]}"; do
            test_num=$((i + 1))
            echo "## Test $test_num: ${test_filename[$test_num]}"
            echo ""
            echo "**Status:** ${test_status[$test_num]}"
            echo ""
            echo "### Input"
            echo ""
            echo "**Number of Vertices:** ${test_vertices[$test_num]}"
            echo ""
            echo "**K-Factor:** ${test_k[$test_num]}"
            echo ""
            echo "**Edges:**"
            echo ""
            echo "\`\`\`"
            echo "${test_edges[$test_num]}"
            echo "\`\`\`"
            echo ""
            echo "### Output"
            echo ""
            if [ -z "${test_reason[$test_num]}" ]; then
                echo "No additional information."
            else
                echo "**Reason:** ${test_reason[$test_num]}"
            fi
            echo ""
            echo "**Full Output:**"
            echo ""
            echo "\`\`\`"
            echo "${test_output[$test_num]}"
            echo "\`\`\`"
            echo ""
            echo "---"
            echo ""
        done
    } > "$MARKDOWN_REPORT"
}

run_test_from_file() {
    local num=$1
    local filepath=$2
    local filename=$(basename "$filepath")

    # Extrai k-factor do nome do arquivo
    local k=$(extract_k_factor "$filename")

    if [ -z "$k" ]; then
        echo -e "${RED}❌ Erro: Não consegui extrair k-factor do nome: $filename${NC}"
        return 2
    fi

    # Lê o arquivo: primeira linha é número de vértices, depois as arestas
    if [ ! -f "$filepath" ]; then
        echo -e "${RED}❌ Erro: Arquivo não encontrado: $filepath${NC}"
        return 2
    fi

    local vertices=$(head -1 "$filepath")
    local edges=$(tail -n +2 "$filepath")

    echo -e "\n${YELLOW}[TESTE $num] $filename (k=$k)${NC}"
    echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"

    # Prepara input: número de vértices, arestas, linha vazia, k-factor
    local input="$vertices"$'\n'"$edges"$'\n'$'\n'"$k"

    # Executa teste
    local output=$(printf "%b" "$input" | "$EXECUTABLE" 2>&1)
    local exit_code=$?

    # Armazena dados do teste
    test_vertices[$num]="$vertices"
    test_edges[$num]="$edges"
    test_k[$num]="$k"
    test_output[$num]="$output"
    test_filename[$num]="$filename"

    # Verifica resultado
    if echo "$output" | grep -q "fator encontrado\|Fator encontrado"; then
        echo -e "${GREEN}✅ PASSOU${NC}\n"
        echo "$output" | head -5
        echo ""
        test_status[$num]="✅ PASSOU"
        test_reason[$num]="K-fator encontrado com sucesso"
        return 0
    elif echo "$output" | grep -q "Não existe\|não existe"; then
        echo -e "${YELLOW}⚠️ NÃO EXISTE${NC}\n"
        echo "$output" | head -5
        echo ""
        test_status[$num]="⚠️ NÃO EXISTE"
        test_reason[$num]=$(echo "$output" | grep -i "não existe" | head -1)
        return 1
    else
        echo -e "${RED}❌ FALHOU${NC}\n"
        echo "$output" | head -10
        echo ""
        test_status[$num]="❌ FALHOU"
        test_reason[$num]=$(echo "$output" | tail -5)
        return 2
    fi
}

# Executar testes
declare -a results
declare -a test_files
declare -a test_names
declare -a test_vertices
declare -a test_edges
declare -a test_k
declare -a test_output
declare -a test_filename
declare -a test_status
declare -a test_reason
passed=0
total=0

# Encontrar todos os arquivos de teste
echo -e "${YELLOW}Procurando arquivos de teste no padrão: $TEST_PATTERN${NC}\n"
for test_file in "$TEST_DIR"/$TEST_PATTERN; do
    if [ -f "$test_file" ]; then
        test_files+=("$test_file")
        test_names+=("$(basename "$test_file")")
        echo "Encontrado: $(basename "$test_file")"
    fi
done

if [ ${#test_files[@]} -eq 0 ]; then
    echo -e "${YELLOW}⚠️ Nenhum arquivo de teste encontrado!${NC}"
    echo "Execute tests-generator.py primeiro para gerar os testes."
    exit 1
fi

echo ""
echo -e "${BLUE}Total de testes encontrados: ${#test_files[@]}${NC}\n"

# Executar cada teste
for i in "${!test_files[@]}"; do
    test_num=$((i + 1))
    if run_test_from_file "$test_num" "${test_files[$i]}"; then
        ((passed++))
        results[$test_num]="✅ PASSOU"
    else
        ret=$?
        if [ $ret -eq 1 ]; then
            results[$test_num]="⚠️ NÃO EXISTE"
        else
            results[$test_num]="❌ FALHOU"
        fi
    fi
    ((total++))
done

echo -e "\n${BLUE}╔════════════════════════════════════════════════════════════╗${NC}"
echo -e "${BLUE}║                    RESUMO DOS TESTES                        ║${NC}"
echo -e "${BLUE}╚════════════════════════════════════════════════════════════╝${NC}\n"

echo -e "$(printf '%-12s %-45s %-15s\n' 'Teste' 'Arquivo' 'Resultado')"
echo -e "$(printf '%-12s %-45s %-15s\n' '─────' '─────────────────────────────────────────────' '──────────')"

{
    echo ""
    echo "╔════════════════════════════════════════════════════════════╗"
    echo "║                    RESUMO DOS TESTES                        ║"
    echo "╚════════════════════════════════════════════════════════════╝"
    echo ""
    printf '%-12s %-45s %-15s\n' "Teste" "Arquivo" "Resultado"
    printf '%-12s %-45s %-15s\n' "─────" "──────────────────────────────────────────────" "──────────"
} >> "$OUTPUT_LOG"

for i in "${!test_files[@]}"; do
    test_num=$((i + 1))
    printf '%-12s %-45s %s\n' "Teste $test_num" "${test_names[$i]}" "${results[$test_num]}"
    printf '%-12s %-45s %s\n' "Teste $test_num" "${test_names[$i]}" "${results[$test_num]}" >> "$OUTPUT_LOG"
done

echo ""
echo -e "${GREEN}✅ $passed/$total testes com sucesso${NC}\n"

{
    echo ""
    echo "✅ $passed/$total testes com sucesso"
    echo ""
    echo "Observações:"
    echo "- Os testes foram gerados automaticamente por tests-generator.py"
    echo "- O k-factor foi extraído do nome de cada arquivo de teste"
    echo "- Relatório detalhado salvo em Markdown"
    echo ""
    echo "Fim da execução: $(date "+%Y-%m-%d %H:%M:%S")"
} >> "$OUTPUT_LOG"

echo -e "${BLUE}📄 Log completo salvo em: ${YELLOW}$OUTPUT_LOG${NC}"
echo -e "${BLUE}📊 Relatório Markdown salvo em: ${YELLOW}$MARKDOWN_REPORT${NC}\n"

# Gerar relatório em Markdown
generate_markdown_report "$total" "$passed"
