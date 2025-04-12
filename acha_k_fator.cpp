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
  TABELA_INDICES_INICIAIS é uma tabela de consulta que mapeia cada vértice do grafo original G
  para o índice inicial do conjunto de vértices correspondentes no grafo inflado G'.

  Cada vértice i em G gera um conjunto de vértices em G', e o valor armazenado em
  TABELA_INDICES_INICIAIS[i] indica o índice do primeiro vértice desse conjunto em G'.

  Por exemplo, se o vértice 0 de G gera os vértices 0, 1, 2, 3, 4, 5 em G',
  então TABELA_INDICES_INICIAIS[0] = 0.
*/
std::vector<int> TABELA_INDICES_INICIAIS;

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

// para usar a TABELA_INDICES_INICIAIS
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
  for (size_t i = 0; i < adj.size(); ++i)
  {
    std::cout << i << " : " << std::ends;
    imprime_lista_ints(adj[i]);
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
    TABELA_INDICES_INICIAIS.push_back(indice_conversao);
  }
  std::cout << "ADJACENCIAS DE G" << std::endl;
  imprime_lista_adjacencia(g.adjacencias);
  // preciso criar o grafo inflado (as arestas)
  /*
   A gadget Γk,d , 2<=k<=d, has d outer vertices, d inner vertices, and k core
   vertices. Core edges connect core vertices to inner vertices, inner edges
   connect inner vertices to outer vertices, and outer edges connect outer
   vertices of different gadget instances.

   Each inner vertex is adjacent to exactly one outer vertex, while each core
   vertex is adjacent to all inner vertices. Vertices within the same class are
   not adjacent to one another.
  */

  for (auto i = 0; i < g.numero_vertices; i++)
  {
    auto ultimo_vertice = TABELA_INDICES_INICIAIS[i] + g.graus_vertices[i] * 2 + 1;

    int ultimo_indice_core = TABELA_INDICES_INICIAIS[i] + k - 1;
    int ultimo_indice_inner = TABELA_INDICES_INICIAIS[i] + g.graus_vertices[i] + 1;

    int j = TABELA_INDICES_INICIAIS[i];
    Aresta aresta;
    while (j <= ultimo_vertice)
    {
      if (j <= ultimo_indice_core)
      {
        // core vertice conecta 1-n com inner vertices
        /*
          laço itera em cada um dos vértices inner, conectando os com o vértice atual
        */
        auto aux_index = ultimo_indice_core + 1;
        while (aux_index <= ultimo_indice_inner)
        {
          aresta.u = j;
          aresta.v = aux_index;
          adiciona_aresta(g_linha, aresta);
          aux_index++;
        }
      }
      else if (j <= ultimo_indice_inner)
      {
        // inner vertice conecta 1-1 com outer vertices
        /*
          |inner(V(G)j)| == |outter(V(G)j)|, basta connectar j com o vértice que esta a d(j) de distancia
        */
        aresta.u = j;
        aresta.v = j + g.graus_vertices[i];
        adiciona_aresta(g_linha, aresta);
      }
      else
      {
        // outer vertice conecta gadgets
        // pega indice do vertice outter (0..d(v))
        auto relative_index = j - ultimo_indice_inner - 1;
        // pega o vertice que está nesse indice nas adjacencias de g (V(G)i[1], V(G)i[2] ...)
        auto vertice_conectado = g.adjacencias[i].at(relative_index);
        // calculo do primeiro indice outer no destino
        auto indice_outter = TABELA_INDICES_INICIAIS[vertice_conectado] + g.graus_vertices[vertice_conectado] + 2;

        auto ultimo_indice_destino = TABELA_INDICES_INICIAIS[vertice_conectado] + g.graus_vertices[vertice_conectado] * 2 + 1;
        // caminho nos vértices do destino
        while (indice_outter <= ultimo_indice_destino)
        {
          // garante que vértice de destino nao foi conectado ainda, logo está livre para conexao com outro outter
          if (g_linha.adjacencias[indice_outter].size() == 0)
          {
            // conecto j com esse cara
            aresta.u = j;
            aresta.v = indice_outter;
            adiciona_aresta(g_linha, aresta);
            break;
          }
          indice_outter++;
        }
      }
      j++;
    }
    std::cout << "\n";
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