#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

int busca_binaria(std::vector<int> &vetor_ordenado, int valor_buscado) {

    int esq = 0;
    int dir = vetor_ordenado.size() - 1;

    while(esq <= dir) {

        int meio = floor((double)(esq + dir) / 2);
        
        if(vetor_ordenado[meio] == valor_buscado) {
            return meio;
        } else if(vetor_ordenado[meio] < valor_buscado) {
            esq = meio + 1;
        } else {
            dir = meio - 1;
        }
    }
    return -1;
}
int mapeia_numero(std::vector<int> &vetor_ordenado, int numero) {
    int numero_retorno = 0;
    for(int n : vetor_ordenado) {
        if(n == numero) {
            numero_retorno = numero;
        }
        if (n < numero) {
            numero_retorno = n;
        }
    }
    return numero_retorno;
}
int encontra_indice(std::vector<int> &vetor_ordenado, int numero) {
    int numero_mapeado = mapeia_numero(vetor_ordenado, numero);
    if((int)vetor_ordenado.size() == 0) {
        return -1;
    }

    return busca_binaria(vetor_ordenado, numero_mapeado);    
}

int main() {

    std::vector<std::vector<int>> grafo_adjacencias;
    std::vector<std::vector<int>> grafo_linha_adjacencias;
    std::vector<int> intervalos_busca;
    int soma_vizinhanca = 0;
    int k = 2;
    int indice_conversao;

    // grafo da folha teste
    grafo_adjacencias.push_back(std::vector<int>{1, 2});              // 0 1 2 3
    grafo_adjacencias.push_back(std::vector<int>{0, 2, 3});           // 4 5 6 7 8 
    grafo_adjacencias.push_back(std::vector<int>{0, 1, 4});           // 9 10 11 12 13
    grafo_adjacencias.push_back(std::vector<int>{1, 4, 5, 6});        // 14 15 16 17 18 19
    grafo_adjacencias.push_back(std::vector<int>{2, 3, 6});           // 20 21 22 23 24
    grafo_adjacencias.push_back(std::vector<int>{3, 6});              // 25 26 27 28 
    grafo_adjacencias.push_back(std::vector<int>{3, 4, 5});           // 29 30 31 32 33

    for(int i = 0; i < (int)grafo_adjacencias.size(); i++) {

        // criar tabela de busca de vertices
        indice_conversao = i * k + soma_vizinhanca;
        soma_vizinhanca += grafo_adjacencias[i].size();
        intervalos_busca.push_back(indice_conversao);
        
        //criar G'
        std::vector<int> vertice_linha = {}; 

        for (int i = 0; i < (int)grafo_adjacencias[i].size() + k - 1; i++){
            vertice_linha.push_back(i + indice_conversao);
            std::cout << i + indice_conversao << " " << std::ends;
        } 
        grafo_linha_adjacencias.push_back(vertice_linha);
        std::cout << '\n' << std::ends;
    }

}

