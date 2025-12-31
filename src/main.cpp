#include "headers/Grafo.hpp"
#include <iostream>
#include <sstream>

void achaKFatorSimples(const Grafo &grafo, const int k) {}

int main()
{
    int k = 2; // fator que se deseja encontrar no grafo

    std::cout << "Cole abaixo o grafo no formato correto (primeira linha: "
                 "#vertices, demais: u v arestas.):"
              << std::endl;

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
        if (stream >> u >> v)
        {
            grafo.adicionaAresta(u, v);
        }
        else
        {
            std::cerr << "Erro: Formato de entrada da linha incorreto: " << linha
                      << std::endl;
            exit(1);
        }
    }

    grafo.criaListaGraus();
    achaKFatorSimples(grafo, k);
    std::cout << grafo.toString() << std::endl;

    return 0;
}
