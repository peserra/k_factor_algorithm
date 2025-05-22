#ifndef GRAFO_HPP
#define GRAFO_HPP

#include <vector>
#include <string>

class Grafo
{
public:
    // Construtor
    Grafo(int numeroVertices);

    // getters
    int getNumeroVertices() const;
    int getNumeroArestas() const;
    int getMenorGrau() const;
    const std::vector<std::vector<int>> &getAdjacencias() const;
    const std::vector<int> &getGrauVertices() const;
    const std::vector<int> &getIndicesIniciais() const;

    // metodos
    void adicionaAresta(const int u, const int v);
    void criaListaGraus();
    Grafo criaGrafoInflado(const int k);
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
    void preencheArestasGrafoInflado(Grafo &grafoInflado, const int k);
    void populaTabelaIndicesIniciais(const int k);
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
        const int verticeAtual
    );

};

#endif // GRAFO_HPP
