<h1 align="center">Apresentação</h1>

![Badge Concluido](http://img.shields.io/static/v1?label=STATUS&message=%20Construindo&color=GREEN&style=for-the-badge)

## ✔️ Técnicas e tecnologias utilizadas

- ``C++``
- ``QT Creator e Vscode``
- ``Programação Avançada``

 
 ### ✔️ Implementações Feitas pelo Sculptor

- [x] Criação da classe abstrata FiguraGeometrica
- [x] Criação da classe concreta PutVoxel
- [x] Criação da classe concreta CutVoxel
- [x] Criação da classe concreta PutBox
- [x] Criação da classe concreta CutBox
- [x] Criação da classe concreta CutSphere
- [x] Criação da classe concreta PutEllipsoid
- [x] Armazenamento de figuras
 
 
 
<h1 align="justify">5. A classe Escultor - Parte 2 - Estruturas avançadas</h1>
<p align="justify">Seu projeto deverá ser capaz de tratar classes abstratas para manipulação de figuras geométricas simples, realizando operações de desenho em uma matriz de pontos. Para isso, a estrutura criada para a classe Sculptor deverá ser repensada e uma nova classe chamada FiguraGeometrica entrará como participante do processo de desenho. Não serão criados objetos dessa nova classe, mas ela agora será a base para várias outras classes concretas, que proverão funcionalidades semelhantes àquelas providas pela classe Sculptor do projeto anterior.</p>

 ```mermaid
graph TD;
    main.cpp-->sculptor.h;
    main.cpp-->sculptor.cpp;
    sculptor.h-->figurageometrica.h;
    sculptor.cpp-->figurageometrica.h;
    sculptor.h-->voxel;
    figurageometrica.h-->putVoxel;
    figurageometrica.h-->cutVoxel;
    figurageometrica.h-->putBox;
    figurageometrica.h-->cutBox;
    figurageometrica.h-->putSphere;
    figurageometrica.h-->cutSphere;
    figurageometrica.h-->putEllipsoid;
    figurageometrica.h-->cutEllipsoid;
```


<h2 align="justify">5.1. Criação da classe abstrata FiguraGeometrica</h2>
<p align="justify">Crie uma classe abstrata FiguraGeometrica para representar objetos primitivos genéricos, e preveja para esta classe pelo menos uma característica: Uma função virtual pura draw(Sculptor &t) que instrua o objeto a se desenhar em um objeto do tipo Sculptor. Essa função deverá ser implementada nas subclasses da classe FiguraGeometrica.</p>

<h2 align="justify">5.2. Criação da classe concreta PutVoxel</h2>
<p align="justify">Crie uma classe PutVoxel derivada de FiguraGeometrica. Um voxel deverá ser especificado para desenho conforme sua posição no espaco, sua cor e transparência.</p>

<p align="justify">O método draw(Sculptor &t) deverá ser implementado.</p>

<h2 align="justify">5.3. Criação da classe concreta CutVoxel</h2>
<p align="justify">Crie uma classe CutVoxel derivada de FiguraGeometrica. Um voxel deverá ser especificado para remoção conforme sua posição no espaco.</p>

<p align="justify">O método draw(Sculptor &t) deverá ser implementado.</p>

<h2 align="justify">5.4. Criação da classe concreta PutBox</h2>
<p align="justify">Crie uma classe PutBox derivada de FiguraGeometrica. Uma caixa deverá ser especificada para desenho conforme os limites espaciais fornecidos para as três dimensões, sua cor e transparência.</p>

<p align="justify">O método draw(Sculptor &t) deverá ser implementado.</p>

<h2 align="justify">5.5. Criação da classe concreta CutBox</h2>
<p align="justify">Crie uma classe CutBox derivada de FiguraGeometrica. Uma caixa deverá ser especificada para remoção conforme os limites espaciais fornecidos.</p>

<p align="justify">O método draw(Sculptor &t) deverá ser implementado.</p>

<h2 align="justify">5.6. Criação da classe concreta PutSphere</h2>
<p align="justify">Crie uma classe PutSphere derivada de FiguraGeometrica. Uma esfera deverá ser especificada para desenho conforme a posição do centro, seu raio em pixels, bem como sua cor e transparência.</p>

<p align="justify">O método draw(Sculptor &t) deverá ser implementado.</p>

<h2 align="justify">5.7. Criação da classe concreta CutSphere</h2>
<p align="justify">Crie uma classe CutSphere derivada de FiguraGeometrica. Uma esfera deverá ser especificada para remoção conforme a posição do centro e seu raio em pixels.</p>

<p align="justify">O método draw(Sculptor &t) deverá ser implementado.</p>

<h1 align="justify">5.8. Criação da classe concreta PutEllipsoid</h2>
<p align="justify">Crie uma classe PutEllipsoid derivada de FiguraGeometrica. Uma esfera deverá ser especificada para desenho conforme a posição do centro, seus raios em pixels, bem como sua cor e transparência.</p>

<p align="justify">O método draw(Sculptor &t) deverá ser implementado.</p>

<h2 align="justify">5.9. Criação da classe concreta CutEllipsoid</h2>
<p align="justify">Crie uma classe CutEllipsoid derivada de FiguraGeometrica. Uma esfera deverá ser especificada para remoção conforme a posição do centro e seus raios em pixels.</p>

<p align="justify">O método draw(Sculptor &t) deverá ser implementado.</p>

<h2 align="justify">5.10. Armazenamento de figuras</h2>
<p align="justify">Prepare um recurso para ler figuras gravadas em um arquivo e desenhá-las conforme as instruções presentes. O arquivo poderá conter os seguintes códigos, que deverão ser interpretados pela sua aplicação e utilizar a classe abstrata FiguraGeometrica para tratar e gerar o desenho conforme os códigos utilizados na tabela Tabela 2.</p>

<p align="justify">O arquivo conterá várias dessas linhas, cada uma contendo uma instrução orientando o tipo de desenho que se deseja realizar na sequência. Logo, novo programa lerá esse arquivo e criará um arquivo de saída no formato OFF contendo o desenho conceptualizado no arquivo fornecido.</p>




  



<p align="justify" font-family="Arial">@Desenvolvido por José Felix</p>
