#include "headers/Grafo.hpp"
#include <iostream>
#include <sstream>

void printErrorMessage(const int k, string errorMessage)
{
    cout << "Não existe " << k << "-fator no grafo." << "\n"
         << errorMessage << endl;
}

void achaKFatorSimples(const Grafo &grafo, const int k)
{
    // se g tiver vertice com grau menor que k, falha
    if (grafo.getMenorGrau() < k)
    {
        auto errorMessage = grafo.getMenorGrau() + "<" + k;
        printErrorMessage(k, errorMessage);
        exit(-1);
    }
    // cria grafo inflado g'
    Grafo g_linha = grafo.criaGrafoInflado(k); // preciso criar o adapter disso ****
    // computa um emparelhamento máximo M* de g'
    // se M* não for perfeito, retorna erro
    // inicie F como um grafo com todos os vértices de g mas sem arestas
    // adicione a F todas as arestas de g que correspondem as arestas outer de M em F
    // retorne F
}

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
