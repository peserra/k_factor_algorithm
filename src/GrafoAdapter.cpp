#include "headers/GrafoAdapter.hpp"
#include "Grafo.hpp"

GrafoAdapter::GrafoAdapter(Grafo G) : G(G)
{
    // converte lista de adjacencias vector<vector<int>> em vector<list<int>>
    int n = G.getNumeroVertices();
    adjListCache.resize(n);
    for (int i = 0; i < n; ++i)
    {
        auto vizinhos = G.getAdjacenciasVertice(i);
        adjListCache[i].assign(vizinhos.begin(), vizinhos.end());
    }
}

int GrafoAdapter::GetNumVertices() const { return G.getNumeroVertices(); };
int GrafoAdapter::GetNumEdges() const { return G.getNumeroArestas(); }

const list<int> &GrafoAdapter::AdjList(int v) const { return adjListCache[v]; }

const vector<vector<bool>> &GrafoAdapter::AdjMat() const
{
    return G.getMatrizAdj();
}

pair<int, int> GrafoAdapter::GetEdge(int e) const { return G.getAresta(e); }

int GrafoAdapter::GetEdgeIndex(int u, int v) const
{
    return G.getIndiceAresta(u, v);
}
