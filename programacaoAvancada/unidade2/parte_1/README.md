<h1 align="center">Apresentação</h1>

![Badge Concluido](http://img.shields.io/static/v1?label=STATUS&message=%20Construindo&color=GREEN&style=for-the-badge)

## ✔️ Técnicas e tecnologias utilizadas

- ``C++``
- ``QT Creator e Vscode``
- ``Programação Avançada``

 
 ### ✔️ Implementações Feitas pelo Sculptor

- [X] Construtor da Classe 
- [X] Destrutor
- [X] Configurar cor do Voxel
- [X] Limpar Voxel
- [X] Criar Circulos
- [X] Criar Esferas 
- [X] Criar Elipses
- [X] Limpar Elipse, circulo, Esfera
- [X] Criar Arquivo .Off com informações da figura. 
 
 
 
<p align="Justify">O objetivo desse projeto é construir uma ferramenta em C++ para realizar esculturas em blocos representados por matrizes digitais, algo como a ideia usada pelo jogo minecraft, tal projeto foi pensado pelo __Professor Agostinho Brito__ para fazer os seus alunos pensarem fora da caixa e conhecerem um mundo onde as possibilidades são infinitas.</p>

<p align="Justify">A ideia é permitir que o utilizador da ferramenta seja capaz de criar um arquivo em texto simples que contém uma sequência de passos a serem seguidos para definir propriedades de uma matriz tridimensional. As propriedades contêm especificações de cor para os elementos, de sorte que com o auxílio de softwares de visualização o usuário possa apreciar a escultura criada.</p>

<p align="Justify">O projeto consiste em dois módulos: uma classe em C++ destinada à interpretação de um arquivo em formato de texto simples e geração das matrizes tridimensionais; e uma ferramenta visual para desenho, algo equivalente a um "paint" 3D.</p>

<p align="Justify">Os sistemas de escultura tridimensional prevêem alguns tipos de formas geométricas simples que poderão ser usadas pelo usuário para pintar e deverão ser implementadas no projeto.</p>

<h2 align="center">1.1. Parte 1 - Biblioteca de leitura e traçado de esculturas</h2>
<p align="Justify">A primeira etapa do projeto consiste em conceber uma classe em C++ que permita realizar operações em uma matriz tridimensional alocada dinamicamente. Os elementos dessa matriz guardam propriedades da escultura e são denominados Voxels (volume elements), algo equivalente aos Pixels que comumente são usados em imagens digitais. Nos Voxels seria possível armazenar informações como cor e transparência, necessárias para idealizar os elementos de uma escultura.</p>

<p align="Justify">As matrizes tridimensionais possuem dimensões de largura, altura e largura especificadas pelo usuário, onde os índices dos elementos nessa matriz coresponderiam às posições dos voxels no espaço discreto.</p>

<p align="Justify">Por exemplo, para uma matriz de dimensões 2×3×4 elementos, sua representação em linguagem C++ poderia ser da forma Voxel m[2][3][4];. Essa matriz teria, portanto, um total de 24 voxels. Entretanto, é importante ressaltar que se trata apenas de um exemplo e que na implementação essa matriz seria alocada de forma dinâmica, com a quantidade de elementos em cada dimensão sendo fornecida pelo usuário.</p>

<p align="Justify">O tipo de dado Voxel é definido como um struct e comporta as propriedades necessárias para permitir armazenar três tipos de informações: a cor do voxel, sua transparência e se ele deverá ser incluído ou não no modelo digital que representa a escultura. A estrutura Voxel é definida na listagem Código fonte da estrutura Voxel.</p>

<h3 align="Justify">Listagem 1. Código fonte da estrutura Voxel</h3>

  
````
```

 struct Voxel {
  float r,g,b; // Cores
  float a; // Trasnparencia
  bool show; // Incluido ou nao
}; 


```
````

Neste arquivo, o modelo 3d possui 8 vértices e 6 faces declarados. O número de arestas igual a zero não é utilizado.

Perceba que, para construir uma estrutura com outros cubos como esse, o programador deverá observar que a sequência dos índices dos próximos cubos será semelhante ao do primeiro, acrescentando-se, porém, 8 unidades ao cubo anterior, oriundas dos novos grupos de vértices para os cubos que serão representados.

Ainda, as quantidades de vértices e faces previstas no cabeçalho do arquivo serão múltiplos de 8 e 6, respectivamente, conforme a quantidade de cubos existentes.

4. A classe Escultor - Parte 1 - Estruturas básicas
Para manipular os pixels da matriz tridimensional, o desenvolvedor deverá usar um conjunto de funcionalidades previstas para uma classe denominada Sculptor que deverá possuir a seguinte declaração:



````
```
class Sculptor {
private:
  Voxel ***v; // 3D matrix
  int nx,ny,nz; // Dimensions
  float r,g,b,a; // Current drawing color
public:
  Sculptor(int _nx, int _ny, int _nz);
  ~Sculptor();
  void setColor(float r, float g, float b, float a);
  void putVoxel(int x, int y, int z);
  void cutVoxel(int x, int y, int z);
  void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
  void putSphere(int xcenter, int ycenter, int zcenter, int radius);
  void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  void writeOFF(const char* filename);
};
```
````


Cada um dos métodos da classe Sculptor realiza uma modificação específica na matriz de voxels definida pela variável v. A descrição de cada um desses métodos é apresentada na Tabela 1

Tabela 1. Métodos da classe Sculptor
Método	Descrição

````
```
Sculptor(int _nx, int _ny, int _nz)

Construtor da classe

~Sculptor(int _nx, int _ny, int _nz)

Destrutor da classe

void setColor(float r, float g, float b, float a)

Define a cor atual de desenho.

void putVoxel(int x, int y, int z)

Ativa o voxel na posição (x,y,z) (fazendo show = true) e atribui ao mesmo a cor atual de desenho

void cutVoxel(int x, int y, int z)

Desativa o voxel na posição (x,y,z) (fazendo show = false)

void putBox(int x0, int x1, int y0, int y1, int z0, int z1)

Ativa todos os voxels no intervalo x∈[x0,x1], y∈[y0,y1], z∈[z0,z1] e atribui aos mesmos a cor atual de desenho

void cutBox(int x0, int x1, int y0, int y1, int z0, int z1)

Desativa todos os voxels no intervalo x∈[x0,x1], y∈[y0,y1], z∈[z0,z1] e atribui aos mesmos a cor atual de desenho

void putSphere(int xcenter, int ycenter, int zcenter, int radius)

Ativa todos os voxels que satisfazem à equação da esfera e atribui aos mesmos a cor atual de desenho (r,g,b,a)
void cutSphere(int xcenter, int ycenter, int zcenter, int radius)

Desativa todos os voxels que satisfazem à equação da esfera

void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)

Ativa todos os voxels que satisfazem à equação do elipsóide e atribui aos mesmos a cor atual de desenho

void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)

Desativa todos os voxels que satisfazem à equação do elipsóide

void writeOFF(const char* filename)

grava a escultura no formato OFF no arquivo filename
```
````

Desses métodos apresentados, o método writeOFF() merece uma explicação mais detalhada acerca da forma como ele representará a escultura digital.

É fácil perceber que cada voxel da matriz possui apenas quatro propriedades e apresentá-lo num software de visualização requer um cuidado adicional: decidir que estrutura geométrica será usada para representar esse voxel e como ela será construída.

Poder-se-ia pensar em várias representações possíveis, tais como esferas ou pirâmides, mas a representação cúbica deverá ser a escolhida para este projeto. Dessa forma, cada vez que um voxel de coordenadas (x,y,z) tiver sua propriedade show = true, o método de gravação do formato OFF deverá prever o desenho de um cubo com lado de comprimento igual a 1 com as mesmas propriedades de cor e transparência do voxel cujo centro coincide com o centro desse voxel.

Por exemplo, se o voxel de posição (x,y,z)=(3,2,5) tiver sua propriedade show = true, deveria ser previsto um cubo cujas faces possuem a mesma cor do cubo e abrangendo a região x∈[2.5,3.5], y∈[1.5,2.5] e z∈[4.5,5.5]. Para criar o cubo, deve-se portanto, prever-se no arquivo OFF um conjunto de 8 vértices e as 6 faces que os interconectam.

Portanto, é tarefa do método writeOFF() criar um arquivo de computador escrito no formato OFF onde para um matriz com Nvoxels voxels com propriedade show=true, exista um total de 8*Nvoxels vértices e 6*Nvoxels faces para representar escultura digital equivalente às propriedades da matriz.

O uso da classe Sculptor é mostrado no exemplo seguinte:

````
```
 // cria um escultor cuja matriz tem 10x10x10 voxels
 Sculptor trono(10,10,10);
 // para mudar a cor do voxel
 trono.setColor(0,0,1.0,1.0); // azul
 // ativa os voxels na faixa de [x,y,z] pertencendo a [0-9]
 trono.putBox(0,9,0,9,0,9);
 // desativa os voxels na faixa de [x,y,z] pertencendo a [0-9]
 trono.cutBox(1,8,1,9,1,9);
 // grava a escultura digital no arquivo "trono.off"
 trono.writeOFF("trono.off");
  
 ```
 ````
 
$P(x,y,z)$
Figura 4. Representação a figura trono.off.
Veja que os processo de alocação e liberação da memória devem ser previstos no construtor e destrutor da classe Sculptor.

4.1. Criação de um programa de testes
Elabore um pequeno programa de testes que explore o uso de TODAS os métodos especificados para desenvolver uma escultura digital e salvá-la no formatos OFF.


<p align="justify" font-family="Arial">@Desenvolvido por José Felix</p>
