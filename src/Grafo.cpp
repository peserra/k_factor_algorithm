#include "headers/Grafo.hpp"
#include <sstream>

constexpr int MENOR_GRAU_INICIAL = 9999;
// metodo construtor
Grafo::Grafo(int numeroVertices)
    : numeroVertices(numeroVertices),
      numeroArestas(0),
      menorGrau(MENOR_GRAU_INICIAL),
      grausVertices(numeroVertices, 0),
      indicesIniciais(numeroVertices, 0),
      adjacencias(numeroVertices)
{
    // Reserva espaço para as listas de adjacência
    for (int i = 0; i < numeroVertices; i++)
    {
        adjacencias[i] = std::vector<int>();
    }
}

/* Getters */
int Grafo::getNumeroVertices() const {
    return numeroVertices;
}

int Grafo::getNumeroArestas() const {
    return numeroArestas;
}

int Grafo::getMenorGrau() const {
    return menorGrau;
}

const std::vector<std::vector<int>>& Grafo::getAdjacencias() const {
    return adjacencias;
}

const std::vector<int>& Grafo::getGrauVertices() const {
    return grausVertices;
}

const std::vector<int>& Grafo::getIndicesIniciais() const {
    return indicesIniciais;
}

void Grafo::adicionaAresta(const int u, const int v)
{
    adjacencias[u].push_back(v);
    adjacencias[v].push_back(u);
    numeroArestas++;
}

void Grafo::criaListaGraus()
{
    for (int i = 0; i < numeroVertices; i++)
    {
        int grau = adjacencias[i].size();
        grausVertices[i] = grau;
        menorGrau = grau < menorGrau ? grau : menorGrau;
    }
}

Grafo Grafo::criaGrafoInflado(const int k)
{
    int numeroVerticesGrafoInflado = k * numeroVertices + 4 * numeroArestas;
    Grafo grafoInflado(numeroVerticesGrafoInflado);
    preencheArestasGrafoInflado(grafoInflado, k);
    grafoInflado.criaListaGraus();
    return grafoInflado;
}

void Grafo::preencheArestasGrafoInflado(Grafo &grafoInflado, const int k)
{
    // itera sobre os vértices do grafo original
    for (auto indiceVerticeAtual = 0; indiceVerticeAtual < numeroVertices; indiceVerticeAtual++)
    {
        // calculo de indices para os vértices core, inner e outer do gadget
        int ultimoIndiceCore = indicesIniciais[indiceVerticeAtual] + k - 1;
        int ultimoIndiceInner = indicesIniciais[indiceVerticeAtual] + grausVertices[indiceVerticeAtual] + 1;
        int ultimoVerticeGadget = indicesIniciais[indiceVerticeAtual] + grausVertices[indiceVerticeAtual] * 2 + 1;
        int indiceAtualGadget = indicesIniciais[indiceVerticeAtual];
        while (indiceAtualGadget <= ultimoVerticeGadget)
        {
            if (indiceAtualGadget <= ultimoIndiceCore)
            {
                Grafo::adicionaArestasCore(grafoInflado, indiceAtualGadget, ultimoIndiceCore, ultimoIndiceInner);
            }
            else if (indiceAtualGadget <= ultimoIndiceInner)
            {
                Grafo::adicionaArestasInner(grafoInflado, indiceAtualGadget, indiceVerticeAtual);
            }
            else
            {
                Grafo::adicionaArestasOuter(grafoInflado, ultimoIndiceInner, indiceAtualGadget, indiceVerticeAtual);
            }
            indiceAtualGadget++;
        }
    }
}

void Grafo::adicionaArestasCore(
    Grafo &grafoInflado,
    const int indiceAtualGadget,
    const int ultimoIndiceCore,
    const int ultimoIndiceInner)
{
    int indiceVerticeInner = ultimoIndiceCore + 1;
    while (indiceVerticeInner <= ultimoIndiceInner)
    {
        grafoInflado.adicionaAresta(indiceAtualGadget, indiceVerticeInner);
        indiceVerticeInner++;
    }
}

void Grafo::adicionaArestasInner(
    Grafo &grafoInflado,
    const int indiceAtualGadget,
    const int indiceVerticeAtual)
{
    grafoInflado.adicionaAresta(indiceAtualGadget, indiceAtualGadget + grausVertices[indiceVerticeAtual]);
}

void Grafo::adicionaArestasOuter(
    Grafo &grafoInflado,
    const int ultimoIndiceInner,
    const int indiceAtualGadget,
    const int indiceVerticeAtual)
{
    int indiceRelativoOuter = indiceAtualGadget - ultimoIndiceInner - 1;
    int verticeAdjacenteRelativo = adjacencias[indiceVerticeAtual][indiceRelativoOuter];
    int indiceOuterDestino = indicesIniciais[verticeAdjacenteRelativo] + grausVertices[verticeAdjacenteRelativo] + 2;
    int ultimoIndiceOuterDestino = indicesIniciais[verticeAdjacenteRelativo] + grausVertices[verticeAdjacenteRelativo] * 2 + 1;
    while (indiceOuterDestino <= ultimoIndiceOuterDestino)
    {
        if (grafoInflado.adjacencias[indiceOuterDestino].size() == 0)
        {
            grafoInflado.adicionaAresta(indiceAtualGadget, indiceOuterDestino);
            break;
        }
        indiceOuterDestino++;
    }
}

void Grafo::populaTabelaIndicesIniciais(
    const int k)
{
    int somaVizinhanca = 0;
    int indiceConversao = 0;
    for (int i = 0; i < numeroVertices; i++)
    {
        indiceConversao = i * k + somaVizinhanca;
        somaVizinhanca += 2 * grausVertices[i];
        indicesIniciais.push_back(indiceConversao);
    }
}

std::string Grafo::toString() const
{
    std::ostringstream oss;

    oss << "Grafo: " << numeroVertices << " vértices, " << numeroArestas
        << " arestas, menor grau: " << menorGrau << "\n";

    oss << "Graus dos vértices: [";
    for (size_t i = 0; i < grausVertices.size(); ++i)
    {
        oss << grausVertices[i];
        if (i + 1 < grausVertices.size())
            oss << ", ";
    }
    oss << "]\nAdjacências:\n";

    for (size_t idx = 0; idx < adjacencias.size(); ++idx)
    {
        oss << "Vértice " << idx << ": [";
        for (size_t j = 0; j < adjacencias[idx].size(); ++j)
        {
            oss << adjacencias[idx][j];
            if (j + 1 < adjacencias[idx].size())
                oss << ", ";
        }
        oss << "]\n";
    }

    return oss.str();
}
