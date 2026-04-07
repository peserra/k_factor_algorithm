#include "headers/Grafo.hpp"
#include "headers/GrafoAdapter.hpp"
#include "headers/Matching.hpp"
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <print>

void printErrorMessage(const int k, const string &errorMessage)
{
    cout << "Não existe " << k << "-fator no grafo." << "\n"
         << errorMessage << endl;
}

Grafo achaKFatorSimples(Grafo &grafo, const int k)
{
    cout << "menor grau: " << grafo.getMenorGrau() << endl;
    // se g tiver vertice com grau menor que k, falha
    if (grafo.getMenorGrau() < k)
    {
        auto errorMessage = to_string(grafo.getMenorGrau()) + "<" + to_string(k);
        printErrorMessage(k, errorMessage);
        exit(-1);
    }
    // cria grafo inflado g'
    cout << "Criando grafo inflado ... " << endl;
    Grafo g_linha = grafo.criaGrafoInflado(k);
    cout << "grafo inflado criado!" << endl;
    // adapter para rodar o algoritmo de emparelhamento maximo
    GrafoAdapter Adapter(g_linha);

    Matching M(Adapter);

    // computa um emparelhamento máximo M* de g'

    cout << "Buscando emparelhamento maximo no grafo inflado ..." << endl;
    list<int> arestasEmparelhamento = M.SolveMaximumMatching();

    cout << "emparelhamento encontrado!" << endl;

    // se M* não for perfeito, retorna erro
    if (!M.perfect)
    {
        auto errorMessage = "Emparelhamento encontrado nao e perfeito.";
        printErrorMessage(k, errorMessage);
        exit(-1);
    }
    cout << "emparelhamento é perfeito!" << endl;

    // inicie F como um grafo com todos os vértices de g mas sem arestas
    Grafo F(grafo.getNumeroVertices());
    // adicione a F todas as arestas de G que correspondem as arestas outer de M em F
    for (list<int>::iterator it = arestasEmparelhamento.begin(); it != arestasEmparelhamento.end(); it++)
    {
        pair<int, int> e = Adapter.GetEdge(*it);
        if (g_linha.verticePertenceOuter(e.first))
        {
            int verticeOrigem = grafo.getVerticeOriginal(e.first);
            int verticeDestino = grafo.getVerticeOriginal(e.second);
            F.adicionaAresta(verticeOrigem, verticeDestino);
        }
    }
    // retorne F
    return F;
}

int main()
{

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
    std::cout << "grafo orgiginal G:\n"
              << grafo.toString() << std::endl;
    int k = 2; // fator que se deseja encontrar no grafo
    Grafo fator = achaKFatorSimples(grafo, k);
    cout << k << "-fator encontrado:\n"
         << fator.toString() << endl;
    return 0;
}
