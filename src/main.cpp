#include <iostream>
#include <sstream>
#include <memory>
#include "headers/Grafo.hpp"

void achaKFatorSimples(const Grafo& grafo, const int k)
{
}

int main()
{
    int k = 2;

    std::cout << "Cole abaixo o grafo no formato correto (primeira linha: #vertices, demais: u v arestas.):" << std::endl;

    int numeroVertices = 0;
    std::cin >> numeroVertices;
    std::cin.ignore();

    Grafo grafo(numeroVertices);

    std::string linha;
    while (std::getline(std::cin, linha))
    {
        if (linha.empty())
            break;

        std::istringstream stream(linha);
        int u, v;
        if (stream >> u >> v) // Parse the edge only if both u and v are valid
        {
            grafo.adicionaAresta(u, v);
        }
        else
        {
            std::cerr << "Erro: Formato de entrada da linha incorreto: " << linha << std::endl;
            exit(1);
        }
    }

    grafo.criaListaGraus();
    achaKFatorSimples(grafo, k);
    std::cout << grafo.toString() << std::endl;

    return 0;
}
