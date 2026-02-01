#include "headers/Grafo.hpp"

constexpr int MENOR_GRAU_INICIAL = 9999;
// metodo construtor
Grafo::Grafo(int numeroVertices)
    : numeroVertices(numeroVertices),
      numeroArestas(0),
      menorGrau(MENOR_GRAU_INICIAL),
      grausVertices(numeroVertices, 0),
      indicesIniciais(numeroVertices, 0),
      listaAdjacencias(numeroVertices),
      matrizAdjacencias(numeroVertices, vector<bool>(numeroVertices, false)),
      indiceArestas(numeroVertices, vector<int>(numeroVertices, -1))
{
    // Reserva espaço para as listas de adjacência
    for (int i = 0; i < numeroVertices; i++)
    {
        listaAdjacencias[i] = vector<int>();
    }
}

/* Getters */
int Grafo::getNumeroVertices() const
{
    return numeroVertices;
}

int Grafo::getNumeroArestas() const
{
    return numeroArestas;
}

int Grafo::getMenorGrau() const
{
    return menorGrau;
}

const vector<vector<int>> &Grafo::getListaAdj() const
{
    return listaAdjacencias;
}

const vector<vector<bool>> &Grafo::getMatrizAdj() const
{
    return matrizAdjacencias;
}

int Grafo::getIndiceAresta(int u, int v) const
{
    if (u < 0 || v < 0 || u >= numeroVertices || v >= numeroVertices)
        throw "Error: vertice nao existe";
    if (indiceArestas[u][v] == -1)
        throw "Error: aresta não existe";
    return indiceArestas[u][v];
}

pair<int, int> Grafo::getAresta(int indiceAresta) const
{
    if (indiceAresta < 0 || indiceAresta >= (int)arestas.size())
        throw "Erro: aresta não existe";
    return arestas[indiceAresta];
}

const vector<int> &Grafo::getAdjacenciasVertice(int v) const
{
    if (v < 0 || v >= numeroVertices)
        throw "Erro: o vértice nao existe";
    return listaAdjacencias[v];
}

const vector<int> &Grafo::getGrauVertices() const
{
    return grausVertices;
}

const vector<int> &Grafo::getIndicesIniciais() const
{
    return indicesIniciais;
}

void Grafo::adicionaAresta(const int u, const int v)
{
    if (u < 0 || v < 0 || u >= numeroVertices || v >= numeroVertices)
        throw "Erro: vértice nao existe.";

    if (matrizAdjacencias[u][v])
        return;
    matrizAdjacencias[u][v] = matrizAdjacencias[v][u] = true;

    listaAdjacencias[u].push_back(v);
    listaAdjacencias[v].push_back(u);

    arestas.push_back(pair<int, int>(u, v));
    indiceArestas[u][v] = indiceArestas[v][u] = numeroArestas;
    numeroArestas++;
}

void Grafo::criaListaGraus()
{
    for (int i = 0; i < numeroVertices; i++)
    {
        int grau = listaAdjacencias[i].size();
        grausVertices[i] = grau;
        menorGrau = grau < menorGrau ? grau : menorGrau;
    }
}

Grafo Grafo::criaGrafoInflado(const int k) const
{
    int numeroVerticesGrafoInflado = k * numeroVertices + 4 * numeroArestas;
    Grafo grafoInflado(numeroVerticesGrafoInflado);
    preencheArestasGrafoInflado(grafoInflado, k);
    grafoInflado.criaListaGraus();
    return grafoInflado;
}

void Grafo::preencheArestasGrafoInflado(Grafo &grafoInflado, const int k) const
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
                this->adicionaArestasCore(grafoInflado, indiceAtualGadget, ultimoIndiceCore, ultimoIndiceInner);
            }
            else if (indiceAtualGadget <= ultimoIndiceInner)
            {
                this->adicionaArestasInner(grafoInflado, indiceAtualGadget, indiceVerticeAtual);
            }
            else
            {
                this->adicionaArestasOuter(grafoInflado, ultimoIndiceInner, indiceAtualGadget, indiceVerticeAtual);
            }
            indiceAtualGadget++;
        }
    }
}

void Grafo::adicionaArestasCore(
    Grafo &grafoInflado,
    const int indiceAtualGadget,
    const int ultimoIndiceCore,
    const int ultimoIndiceInner) const
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
    const int indiceVerticeAtual) const
{
    grafoInflado.adicionaAresta(indiceAtualGadget, indiceAtualGadget + grausVertices[indiceVerticeAtual]);
}

void Grafo::adicionaArestasOuter(
    Grafo &grafoInflado,
    const int ultimoIndiceInner,
    const int indiceAtualGadget,
    const int indiceVerticeAtual) const
{
    int indiceRelativoOuter = indiceAtualGadget - ultimoIndiceInner - 1;
    int verticeAdjacenteRelativo = listaAdjacencias[indiceVerticeAtual][indiceRelativoOuter];
    int indiceOuterDestino = indicesIniciais[verticeAdjacenteRelativo] + grausVertices[verticeAdjacenteRelativo] + 2;
    int ultimoIndiceOuterDestino = indicesIniciais[verticeAdjacenteRelativo] + grausVertices[verticeAdjacenteRelativo] * 2 + 1;
    while (indiceOuterDestino <= ultimoIndiceOuterDestino)
    {
        if (grafoInflado.listaAdjacencias[indiceOuterDestino].size() == 0)
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
        indicesIniciais[i] = indiceConversao;
    }
}

string Grafo::toString() const
{
    ostringstream oss;

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

    for (size_t idx = 0; idx < listaAdjacencias.size(); ++idx)
    {
        oss << "Vértice " << idx << ": [";
        for (size_t j = 0; j < listaAdjacencias[idx].size(); ++j)
        {
            oss << listaAdjacencias[idx][j];
            if (j + 1 < listaAdjacencias[idx].size())
                oss << ", ";
        }
        oss << "]\n";
    }

    return oss.str();
}
