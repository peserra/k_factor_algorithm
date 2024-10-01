#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

#define toDigit(c) (c-'0')

typedef struct Grafo {
    int numero_vertices = 0;
    int numero_arestas = 0;
    int menor_grau = 9999;
    std::vector<int> graus_vertices = {};
    std::vector<std::vector<int>> adjacencias = {};
} Grafo;



typedef struct Aresta {
    int u = 0;
    int v = 0;
} Aresta;

typedef struct Emparelhamento {
    std::vector<Aresta> arestas = {};
}Emparelhamento;

/*
    lookup table que vou usar pra relacionar vertice do grafo inflado
    com vertice do grafo de origem
*/
std::vector<int> TABELA_INTERVALOS_BUSCA;

// caso precise depois (tirar caso contrario)
int busca_binaria(std::vector<int>& vetor_ordenado, int valor_buscado) {

    int esq = 0;
    int dir = vetor_ordenado.size() - 1;

    while (esq <= dir) {

        int meio = floor((double)(esq + dir) / 2);

        if (vetor_ordenado[meio] == valor_buscado) {
            return meio;
        }
        else if (vetor_ordenado[meio] < valor_buscado) {
            esq = meio + 1;
        }
        else {
            dir = meio - 1;
        }
    }
    return -1;
}

// para usar a TABELA_INTERVALOS_BUSCA
int busca_binaria_alterada(std::vector<int>& vetor_ordenado, int valor_buscado) {

    int esq = 0;
    int dir = vetor_ordenado.size() - 1;
    int indice_retorno = -1;

    while (esq <= dir) {

        int meio = floor((double)(esq + dir) / 2);

        if (vetor_ordenado[meio] <= valor_buscado) {
            indice_retorno = meio;
            esq = meio + 1;
        }
        else {
            dir = meio - 1;
        }
    }
    return indice_retorno;
}

Grafo cria_grafo(int numero_vertices) {
    Grafo novo_grafo;

    novo_grafo.numero_vertices = numero_vertices;

    for (auto v = 0; v < numero_vertices; v++) {
        std::vector<int> adjacencia = {};
        novo_grafo.adjacencias.push_back(adjacencia);
    }
    return novo_grafo;
}

void adiciona_aresta(Grafo& grafo, Aresta& aresta) {
    grafo.adjacencias[aresta.u].push_back(aresta.v);
    grafo.adjacencias[aresta.v].push_back(aresta.u);
    grafo.numero_arestas++;
}

// cria lista de grau dos vertices de G e guarda o valor do menor grau de G
void cria_lista_graus(Grafo& grafo) {
    for (std::vector<int> adjacencia : grafo.adjacencias) {
        int grau_vertice = (int)adjacencia.size();
        grafo.graus_vertices.push_back(grau_vertice);

        if (grau_vertice < grafo.menor_grau)
            grafo.menor_grau = grau_vertice;
    }
}

// encontrar indice correlacionado g <-> g'
int encontra_indice(std::vector<int>& vetor_ordenado, int numero) {
    if ((int)vetor_ordenado.size() == 0) {
        return -1;
    }
    return busca_binaria_alterada(vetor_ordenado, numero);
}

// provavelmente ta faltando algo aqui
Grafo cria_grafo_inflado(Grafo& g, int k) {
    Grafo g_linha = cria_grafo(k * g.numero_vertices + 2 * g.numero_arestas);
    int soma_vizinhanca = 0;
    int indice_conversao;

    for (int i = 0; i < (int)g.adjacencias.size(); i++) {
        // criar tabela de busca de vertices
        indice_conversao = i * k + soma_vizinhanca;
        soma_vizinhanca += g.adjacencias[i].size();
        TABELA_INTERVALOS_BUSCA.push_back(indice_conversao);
    }
    return g_linha;
}

Emparelhamento computa_emparelhamento_maximo(Grafo& g) {
    Emparelhamento m;
    return m;
}

/*
* todo vértice do grafo é extremidade de alguma aresta do emparelhamento ?
*/
bool decide_emparelhamento_perfeito(Emparelhamento& m, Grafo& g) {

       
    // pra cada aresta, verifica se tem o o correspondente na lista de adjacencias do grafo
    for (Aresta a : m.arestas) {
       
    }

    return false;
}

// algoritmo do artigo
Grafo computa_k_fator_simples(Grafo& g, int k) {
    Grafo f;
    Emparelhamento m;
    
    if (g.menor_grau < k) {
        std::cout << "Não existe " << k << "-fator no grafo." << g.menor_grau << " < " << k <<".";
        exit(0);
    }

    Grafo g_linha = cria_grafo_inflado(g, k);

    //computa emparelhamento maximo M em g_linha
    m = computa_emparelhamento_maximo(g_linha);

    //se M nao é perfeito, retorna null
    if (!decide_emparelhamento_perfeito(m, g_linha)) {
        std::cout << "Não existe " << k << "-fator no grafo. Emparelhamento de g não é perfeito.";
        exit(0);
    }
    
    // inicialmente f -> grafo que contem todos os vertices de G, sem arestas
    f = cria_grafo(g.numero_vertices);


    // adicione em f todas as arestas de G que pertencem aos vertices externos em M

    return f;
}

int main() {

    // le entrada para montar o grafo
    int numero_vertices = 0;
    std::string linha;
    std::cin >> numero_vertices;
    std::cin.ignore();
    Grafo grafo = cria_grafo(numero_vertices);

    // leitura das linhas do terminal para criar as arestas
    while (getline(std::cin, linha)) {
        if (linha.empty())
            break;

        Aresta aresta;
        aresta.u = toDigit(linha[0]);
        aresta.v = toDigit(linha.length() - 1);
        adiciona_aresta(grafo, aresta);

    }
    cria_lista_graus(grafo);

    int k = 2;
    Grafo f = computa_k_fator_simples(grafo, k);

 }
