#include <iostream>
#include <sstream>
#include "headers/Grafo.hpp"

void computaKFatorSImples(const Grafo& grafo, const int k){

}

int main()
{
    const int k = 2;

    std::cout
        << "Cole abaixo  o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):" << std::endl;
    int numeroVertices = 0;
    std::string linha;
    std::cin >> numeroVertices;
    std::cin.ignore();

    auto grafo = new Grafo(numeroVertices);
    while (getline(std::cin, linha))
    {
        if(linha.empty())
            break;
        int u;
        int v;
        std::stringstream stream(linha);
        stream >> u >> v;
        grafo->adicionaAresta(u, v);

    }
    grafo->criaListaGraus();
    std::cout << grafo->toString() << std::endl;

}
