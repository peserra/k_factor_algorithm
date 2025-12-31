#ifndef GRAFO_ADAPTER_HPP
#define GRAFO_ADAPTER_HPP
#include "Grafo.hpp"
#include "list"
/*
 * Classe adapter, permitindo que codigo externo Matching.cpp execute com a
 * minha implementação de Grafo, sem alterar muito o código externo.
 */
class GrafoAdapter {

private:
  Grafo G;
  std::vector<list<int>> adjListCache;

public:
  GrafoAdapter(Grafo grafoOriginal);

  // Returns the number of vertices
  int GetNumVertices() const;

  // Returns the number of edges
  int GetNumEdges() const;

  // Given the edge's index, returns its endpoints as a pair
  pair<int, int> GetEdge(int e) const;

  // Given the endpoints, returns the index
  int GetEdgeIndex(int u, int v) const;

  // Returns the adjacency list of a vertex
  const list<int> &AdjList(int v) const;

  // Returns the graph's adjacency matrix
  const vector<vector<bool>> &AdjMat() const;
};

#endif
