#ifndef GRAFO_HPP
#define GRAFO_HPP

#include <vector>
#include <string>
#include <sstream>
#include <queue>
#include <stack>

class Grafo
{
public:
    // Construtor
    Grafo(int numeroVertices);

    // getters
    int getNumeroVertices() const;
    int getNumeroArestas() const;
    int getMenorGrau() const;

    // Retorna uma referência constante para a lista de adjacências
    // Evita cópias desnecessárias para melhorar o desempenho
    const std::vector<std::vector<int>> &getAdjacencias() const;

    // Retorna uma referência constante para os graus dos vértices
    const std::vector<int> &getGrauVertices() const;
    // Retorna uma referência constante para lista de indices iniciais
    const std::vector<int> &getIndicesIniciais() const;

    // metodos
    // adiciona uma uv aresta na lista de adjacencias
    void adicionaAresta(const int u, const int v);

    // preenche a lista de graus.
    void criaListaGraus();

    // 'infla' o grafo, seguindo o algoritmo.
    Grafo criaGrafoInflado(const int k);

    // facilita a visualização do grafo no print
    std::string toString() const;

private:
    // propriedades
    int numeroVertices;
    int numeroArestas;
    int menorGrau;
    std::vector<int> grausVertices;
    std::vector<int> indicesIniciais;
    std::vector<std::vector<int>> adjacencias;

    // metodos
    void populaTabelaIndicesIniciais(const int k);

    /*
        popula a lista de adjacencias de um grafo inflado seguindo as regras estruturais de
        sua criação segundo o algoritmo.
    */
    void preencheArestasGrafoInflado(Grafo &grafoInflado, const int k);
    void adicionaArestasCore(
        Grafo &grafoInflado,
        const int indiceInicialAtual,
        const int ultimoIndiceCore,
        const int ultimoIndiceInner);
    void adicionaArestasInner(
        Grafo &grafoInflado,
        const int indiceAtual,
        const int verticeAtual);
    void adicionaArestasOuter(
        Grafo &grafoInflado,
        const int ultimoIndiceInner,
        const int indiceAtual,
        const int verticeAtual);

    //Depth-first search iterativa
    void Dfs(const int verticeInicial, std::vector<bool> &visitados);
    //Bradth-first search iterativa
    void Bfs(const int verticeInicial, std::vector<bool> &visitados);
};

#endif // GRAFO_HPP
