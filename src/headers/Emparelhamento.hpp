#ifndef EMPARELHAMENTO_HPP
#define EMPARELHAMENTO_HPP
#include <vector>
#include "Grafo.hpp"

class Emparelhamento
{
public:
    // para construir um emparelhamento, preciso de um grafo
    Emparelhamento(const Grafo &grafo)
    {
        arestasEmparelhadas.reserve(grafo.getNumeroVertices());
    }

    const std::vector<int> &getArestasEmparelhadas() const;

private:
    std::vector<int> arestasEmparelhadas;
};
#endif
