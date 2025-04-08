#include <cstdlib>
#include <iostream>
#include <math.h>
#include <ostream>
#include <sstream>
#include <string>
#include <vector>

/*
 * vou colocar using std namespace pra limpar um pouco o codigo
 */

typedef struct Grafo
{
  int numero_vertices = 0;
  int numero_arestas = 0;
  int menor_grau = 9999;
  std::vector<int> graus_vertices = {};
  std::vector<std::vector<int>> adjacencias = {};
} Grafo;

typedef struct Aresta
{
  int u = 0;
  int v = 0;
} Aresta;

typedef struct Emparelhamento
{
  std::vector<Aresta> arestas = {};
} Emparelhamento;

/*
    lookup table que vou usar pra relacionar vertice do grafo inflado
    com vertice do grafo de origem

    cada vértice de g corresponde a um conjunto de vértices de g', sendo assim
    essa tabela guarda o conjunto de vértices de g' no indice que representa
    o vértice de g.
*/
std::vector<int> TABELA_INTERVALOS_BUSCA;

// caso precise depois (tirar caso contrario)
int busca_binaria(std::vector<int> &vetor_ordenado, int valor_buscado)
{

  int esq = 0;
  int dir = vetor_ordenado.size() - 1;

  while (esq <= dir)
  {

    int meio = floor((double)(esq + dir) / 2);

    if (vetor_ordenado[meio] == valor_buscado)
    {
      return meio;
    }
    else if (vetor_ordenado[meio] < valor_buscado)
    {
      esq = meio + 1;
    }
    else
    {
      dir = meio - 1;
    }
  }
  return -1;
}

// para usar a TABELA_INTERVALOS_BUSCA
int busca_binaria_alterada(std::vector<int> &vetor_ordenado,
                           int valor_buscado)
{

  int esq = 0;
  int dir = vetor_ordenado.size() - 1;
  int indice_retorno = -1;

  while (esq <= dir)
  {

    int meio = floor((double)(esq + dir) / 2);

    if (vetor_ordenado[meio] <= valor_buscado)
    {
      indice_retorno = meio;
      esq = meio + 1;
    }
    else
    {
      dir = meio - 1;
    }
  }
  return indice_retorno;
}

Grafo cria_grafo(int numero_vertices)
{
  Grafo novo_grafo;

  novo_grafo.numero_vertices = numero_vertices;

  for (auto v = 0; v < numero_vertices; v++)
  {
    std::vector<int> adjacencia = {};
    novo_grafo.adjacencias.push_back(adjacencia);
  }
  return novo_grafo;
}

void adiciona_aresta(Grafo &grafo, Aresta &aresta)
{
  grafo.adjacencias[aresta.u].push_back(aresta.v);
  grafo.adjacencias[aresta.v].push_back(aresta.u);
  grafo.numero_arestas++;
}

// cria lista de grau dos vertices de G e calcula o valor do menor grau de G
void cria_lista_graus(Grafo &grafo)
{
  for (std::vector<int> adjacencia : grafo.adjacencias)
  {
    int grau_vertice = (int)adjacencia.size();
    grafo.graus_vertices.push_back(grau_vertice);

    if (grau_vertice < grafo.menor_grau)
      grafo.menor_grau = grau_vertice;
  }
}

// encontrar indice correlacionado g <-> g'
int encontra_indice(std::vector<int> &vetor_ordenado, int numero)
{
  if ((int)vetor_ordenado.size() == 0)
  {
    return -1;
  }
  return busca_binaria_alterada(vetor_ordenado, numero);
}

void imprime_lista_ints(const std::vector<int> &lista)
{
  for (auto i : lista)
  {
    std::cout << i << ", ";
  }
}

void imprime_lista_adjacencia(const std::vector<std::vector<int>> &adj)
{
  for (const auto &i : adj)
  {
    imprime_lista_ints(i);
    std::cout << '\n';
  }
}

Grafo cria_grafo_inflado(const Grafo &g, const int &k)
{
  /*
   * numero de vertices de g' é k * v(g) + 2 * soma numero de graus(g) (2 * |E|)
   */
  Grafo g_linha = cria_grafo(k * g.numero_vertices + 4 * g.numero_arestas);

  std::cout << "tamanho da lista de adjacencias: " << g_linha.adjacencias.size()
            << std::endl;

  int soma_vizinhanca = 0;
  int indice_conversao;

  for (int i = 0; i < (int)g.adjacencias.size(); i++)
  {
    // criar tabela de busca de vertices
    indice_conversao = i * k + soma_vizinhanca;
    soma_vizinhanca += 2 * g.adjacencias[i].size();
    TABELA_INTERVALOS_BUSCA.push_back(indice_conversao);
  }
  // preciso criar o grafo inflado (as arestas)
  /*
   A gadget Γk,d , 2<=k<=d, has d outer vertices, d inner vertices, and k core
   vertices. Core edges connect core vertices to inner vertices, inner edges
   connect inner vertices to outer vertices, and outer edges connect outer
   vertices of different gadget instances.

   Each inner vertex is adjacent to exactly one outer vertex, while each core
   vertex is adjacent to all inner vertices. Vertices within the same class are
   not adjacent to one another.

      Gadget tem:
      k core vertices
      d inner vertices
      d outer vertices

      outter vertice se conecta aos vertices internos (1 - 1)
      inner vertice se conecta aos vertices core (1-n)

      outer vertices se conectam entre si, para conectar gadgets

  */

  // preciso conectar os vértices de g_linha, utilizando a info que tenho de g
  // para as arestas externas (saber em quem eu tenho que conectar os vértices
  // externos)
  /*
   * para cada adjacencia de g_linha, ande nos vértices
   * se vertice pertence a core: conecta com todos os seus inner correspondentes
   * (k <= i <= k + d) se vertice pertence a inner: conecta cada um com um outer
   * correspondente (k+d <= i <= k+2d)
   *
   * caso contrario, conecte cada outer a outro outer correspondente, se conexao
   * nao existir, verificando essa conexao com a lista de adjacencias de g.
   */

  for (auto i = 0; i < g.numero_vertices; i++)
  {
    auto ultimo_vertice = TABELA_INTERVALOS_BUSCA[i] + g.graus_vertices[i] * 2 + 1;

    std::vector<int> conjunto_core_vert;
    std::vector<int> conjunto_inner_vert;
    std::vector<int> conjunto_outer_vert;

    int ultimo_indice_core = TABELA_INTERVALOS_BUSCA[i] + k - 1;
    int ultimo_indice_inner = TABELA_INTERVALOS_BUSCA[i] + g.graus_vertices[i] + 1;

    conjunto_core_vert.reserve(k);
    conjunto_inner_vert.reserve(g.graus_vertices[i]);
    conjunto_outer_vert.reserve(g.graus_vertices[i]);

    int j = TABELA_INTERVALOS_BUSCA[i];

    Aresta aresta;
    while (j <= ultimo_vertice)
    {
      if (j <= ultimo_indice_core)
      {
        // core vertice
        auto aux_index = ultimo_indice_core + 1;
        while (aux_index <= ultimo_indice_inner)
        {
          aresta.u = j;
          aresta.v = aux_index;
          std::cout << aresta.u << " " << aresta.v << std::endl;
          adiciona_aresta(g_linha, aresta);
          aux_index++;
        }
        exit(0);
      }
      else if (j <= ultimo_indice_inner)
      {
        // inner vertice
      }
      else
      {
        // outer vertice
      }
      j++;
    }

    /*
    while (j <= ultimo_vertice){
      if (j <= TABELA_INTERVALOS_BUSCA[i] + k - 1){
        conjunto_core_vert.push_back(j);
      } else if( j <= TABELA_INTERVALOS_BUSCA[i] + g.graus_vertices[i] + 1){
        conjunto_inner_vert.push_back(j);
      } else {
        conjunto_outer_vert.push_back(j);
      }
      j++;
    } */

    /*
    std::cout << "vertice: " << i << " fica:" << std::endl;
    std::cout << "lista core:\n";
    imprime_lista_ints(conjunto_core_vert);
    std::cout << "\n";
    std::cout << "lista inner:\n";
    imprime_lista_ints(conjunto_inner_vert);
    std::cout << "\n";
    std::cout << "lista outer:\n";
    imprime_lista_ints(conjunto_outer_vert);
    std::cout << "\n";
    std::cout << "--------------------------------------------------" << std::endl;
    */
  }

  return g_linha;
}

Emparelhamento computa_emparelhamento_maximo(const Grafo &g)
{
  Emparelhamento m;
  return m;
}

/*
 * todo vértice do grafo é extremidade de alguma aresta do emparelhamento ?
 */
bool decide_emparelhamento_perfeito(const Emparelhamento &m, const Grafo &g)
{

  // pra cada aresta, verifica se tem o o correspondente na lista de adjacencias
  // do grafo
  /*for (Aresta a : m.arestas) {

  }*/

  return false;
}

// algoritmo do artigo
Grafo computa_k_fator_simples(const Grafo &g, const int &k)
{
  Grafo f;
  Emparelhamento m;

  if (g.menor_grau < k)
  {
    std::cout << "Não existe " << k << "-fator no grafo." << g.menor_grau
              << " < " << k << "." << std::endl;
    exit(0);
  }

  Grafo g_linha = cria_grafo_inflado(g, k);

  // computa emparelhamento maximo M em g_linha
  m = computa_emparelhamento_maximo(g_linha);

  // se M nao é perfeito, retorna null
  if (!decide_emparelhamento_perfeito(m, g_linha))
  {
    std::cout << "Não existe " << k
              << "-fator no grafo. Emparelhamento de g não é perfeito."
              << std::endl;
    exit(0);
  }

  // inicialmente f -> grafo que contem todos os vertices de G, sem arestas
  f = cria_grafo(g.numero_vertices);

  // adicione em f todas as arestas de G que pertencem aos vertices externos em
  // M

  return f;
}

int main()
{

  std::cout << "Insira o grafo abaixo (primeira linha: #vertices, linhas "
               "seguintes: u v arestas."
            << std::endl;

  // le entrada para montar o grafo
  int numero_vertices = 0;
  std::string linha;
  std::cin >> numero_vertices;
  std::cin.ignore();
  Grafo grafo = cria_grafo(numero_vertices);

  // leitura das linhas do terminal para criar as arestas
  while (getline(std::cin, linha))
  {
    if (linha.empty())
      break;

    Aresta aresta;
    std::stringstream stream(linha);
    // extraindo vertices:
    stream >> aresta.u >> aresta.v;
    adiciona_aresta(grafo, aresta);
  }
  cria_lista_graus(grafo);

  int k = 2;
  Grafo f = computa_k_fator_simples(grafo, k);
}