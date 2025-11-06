#ifndef GRAFO_HPP
#define GRAFO_HPP

#include <vector>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
using namespace std;
class Grafo
{
public:
    // Construtor
    Grafo(int numeroVertices);

    // getters
    int getNumeroVertices() const;
    int getNumeroArestas() const;
    int getMenorGrau() const;

    // para algoritmo de matching funcionar
    //  retorna as extremidades de uma aresta, dado o indice
    pair<int, int> getAresta(int indiceAresta) const;
    // retorna o indice de uma aresta, dadas as extremidades
    int getIndiceAresta(int u, int v) const;

    // Retorna uma referência constante para a lista de adjacências

    // retorna a lista de adjacencias de um vertice
    const vector<int> &getAdjacenciasVertice(int v) const;

    // retorna a lista de adjacencias do grafo
    const vector<vector<int>> &getListaAdj() const;
    // retorna a matriz de adjacencia do grafo
    const vector<vector<bool>> &getMatrizAdj() const;

    // Retorna uma referência constante para os graus dos vértices
    const vector<int> &getGrauVertices() const;
    // Retorna uma referência constante para lista de indices iniciais
    const vector<int> &getIndicesIniciais() const;

    // metodos
    // adiciona uma uv aresta na lista de listaAdjacencias
    void adicionaAresta(const int u, const int v);

    // preenche a lista de graus.
    void criaListaGraus();

    // 'infla' o grafo, seguindo o algoritmo.
    Grafo criaGrafoInflado(const int k);

    // facilita a visualização do grafo no print
    string toString() const;

private:
    // propriedades
    int numeroVertices;
    int numeroArestas;
    int menorGrau;
    vector<pair<int,int>> arestas;
    vector<vector<int>> indiceArestas;
    vector<int> grausVertices;
    vector<int> indicesIniciais;
    vector<vector<int>> listaAdjacencias;
    vector<vector<bool>> matrizAdjacencias;

    // metodos
    void populaTabelaIndicesIniciais(const int k);

    /*
        popula a lista de adjacencias de um grafo inflado seguindo as regras estruturais de
        sua criação segundo o algoritmo.
    */
    void preencheArestasGrafoInflado(
        Grafo &grafoInflado, 
        const int k);

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

    // Depth-first search iterativa
    void Dfs(const int verticeInicial, vector<bool> &visitados);
    // Bradth-first search iterativa
    void Bfs(const int verticeInicial, vector<bool> &visitados);
};

#endif // GRAFO_HPP
