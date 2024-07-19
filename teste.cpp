#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

#define toDigit(c) (c-'0')



typedef struct Grafo {
    std::vector<std::vector<int>> adjacencias = {};
    std::vector<int> graus_vertices = {};
    int numero_vertices = 0;
    int numero_arestas = 0;
} Grafo;

typedef struct Aresta {
    int u = 0;
    int v = 0;
} Aresta;

std::vector<int> TABELA_INTERVALOS_BUSCA;

int busca_binaria(std::vector<int> &vetor_ordenado, int valor_buscado) {

    int esq = 0;
    int dir = vetor_ordenado.size() - 1;

    while(esq <= dir) {

        int meio = floor((double)(esq + dir) / 2);
        
        if(vetor_ordenado[meio] == valor_buscado) {
            return meio;
        }
        else if(vetor_ordenado[meio] < valor_buscado) {
            esq = meio + 1;
        } else {
            dir = meio - 1;
        }
    }
    return -1;
}


int busca_binaria_alterada(std::vector<int> &vetor_ordenado, int valor_buscado) {

    int esq = 0;
    int dir = vetor_ordenado.size() - 1;
    int indice_retorno = -1;
    
    while(esq <= dir) {

        int meio = floor((double)(esq + dir) / 2);
        
        if(vetor_ordenado[meio] <= valor_buscado) {
            indice_retorno = meio;
            esq = meio + 1;
        } else {
            dir = meio - 1;
        }
    }
    return indice_retorno;
}

void adiciona_aresta(Grafo &grafo, Aresta &aresta){
    grafo.adjacencias[aresta.u].push_back(aresta.v);
    grafo.adjacencias[aresta.v].push_back(aresta.u);
    grafo.numero_arestas ++;
}

Grafo cria_grafo(int numero_vertices){
    Grafo novo_grafo;

    novo_grafo.numero_vertices = numero_vertices;

    for(int v = 0; v < numero_vertices; v++){
       std::vector<int> adjacencia = {};
       novo_grafo.adjacencias.push_back(adjacencia); 
    }
    return novo_grafo;
}

int encontra_indice(std::vector<int> &vetor_ordenado, int numero) {
    if((int)vetor_ordenado.size() == 0) {
        return -1;
    }
    return busca_binaria_alterada(vetor_ordenado, numero);    
}

Grafo cria_grafo_inflado(Grafo g, int k) {
    Grafo g_linha = cria_grafo(k * g.numero_vertices + 2 * g.numero_arestas);
    int soma_vizinhanca = 0;
    int indice_conversao;

    for(int i = 0; i < (int)g.adjacencias.size(); i++) {
        // criar tabela de busca de vertices
        indice_conversao = i * k + soma_vizinhanca;
        soma_vizinhanca += g.adjacencias[i].size();
        TABELA_INTERVALOS_BUSCA.push_back(indice_conversao);
    }
}

int main() {

    // le entrada para montar o grafo
    int numero_vertices = 0;
    std::string linha;
    std::cin >> numero_vertices;
    std::cin.ignore();
    Grafo grafo = cria_grafo(numero_vertices);

    while (getline(std::cin,linha)){
        if(linha.empty())
            break;
        
        Aresta aresta;
        aresta.u = toDigit(linha[0]);
        aresta.v = toDigit(linha.length() - 1);

        adiciona_aresta(grafo, aresta);
    }
    std::cout << "Numero de arestas de G: " << grafo.numero_arestas << std::endl;
    std::cout << "Numero de vértices de G: " << grafo.numero_vertices << std::endl;

    

    // algoritmo pra encontrar o k fator










    // std::vector<std::vector<int>> grafo_adjacencias;
    // std::vector<std::vector<int>> grafo_linha_adjacencias;
    // std::vector<int> TABELA_INTERVALOS_BUSCA;
    // int soma_vizinhanca = 0;
    // int k = 2;
    // int indice_conversao;
    // //acumulador grau
    // // conversor de indices de G -> G' 
    // // grafo da folha teste
    // grafo_adjacencias.push_back(std::vector<int>{1, 2});              // 0 1 2 3
    // grafo_adjacencias.push_back(std::vector<int>{0, 2, 3});           // 4 5 6 7 8 
    // grafo_adjacencias.push_back(std::vector<int>{0, 1, 4});           // 9 10 11 12 13
    // grafo_adjacencias.push_back(std::vector<int>{1, 4, 5, 6});        // 14 15 16 17 18 19
    // grafo_adjacencias.push_back(std::vector<int>{2, 3, 6});           // 20 21 22 23 24
    // grafo_adjacencias.push_back(std::vector<int>{3, 6});              // 25 26 27 28 
    // grafo_adjacencias.push_back(std::vector<int>{3, 4, 5});           // 29 30 31 32 33

    // for(int i = 0; i < (int)grafo_adjacencias.size(); i++) {

    //     // criar tabela de busca de vertices
    //     indice_conversao = i * k + soma_vizinhanca;
    //     soma_vizinhanca += grafo_adjacencias[i].size();
    //     TABELA_INTERVALOS_BUSCA.push_back(indice_conversao);
        
    //     //criar vertices de G'
    //     std::vector<int> vertice_linha = {}; 

    //     //std::cout << indice_conversao << std::endl;
    //     for (int i = indice_conversao; i < indice_conversao + (int)grafo_adjacencias[i].size() + k - 1; i++){
    //         vertice_linha.push_back(i);
    //         //std::cout << i  << " " << std::ends;
    //     } 
    //     grafo_linha_adjacencias.push_back(vertice_linha);
    //     //std::cout << '\n' << std::ends;
    // }
    // //std::vector<std::vector<int>> g_linha = cria_grafo_inflado(grafo);

}

