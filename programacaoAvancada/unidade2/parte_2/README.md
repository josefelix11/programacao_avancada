<h1 align="center">Apresentação</h1>

![Badge Concluido](http://img.shields.io/static/v1?label=STATUS&message=%20Construindo&color=GREEN&style=for-the-badge)

## ✔️ Técnicas e tecnologias utilizadas

- ``C++``
- ``QT Creator e Vscode``
- ``Programação Avançada``

 
 ### ✔️ Implementações Feitas pelo Sculptor

- [ ] Construtor da Classe 
- [ ] Destrutor
- [ ] Configurar cor do Voxel
- [ ] Limpar Voxel
- [ ] Criar Circulos
- [ ] Criar Esferas 
- [ ] Criar Elipses
- [ ] Limpar Elipse, circulo, Esfera
- [ ] Criar Arquivo .Off com informações da figura. 
 
 
 
<h1 align="justify">5. A classe Escultor - Parte 2 - Estruturas avançadas</h1>
Seu projeto deverá ser capaz de tratar classes abstratas para manipulação de figuras geométricas simples, realizando operações de desenho em uma matriz de pontos.

Para isso, a estrutura criada para a classe Sculptor deverá ser repensada e uma nova classe chamada FiguraGeometrica entrará como participante do processo de desenho.

Não serão criados objetos dessa nova classe, mas ela agora será a base para várias outras classes concretas, que proverão funcionalidades semelhantes àquelas providas pela classe Sculptor do projeto anterior.

###5.1. Criação da classe abstrata FiguraGeometrica
Crie uma classe abstrata FiguraGeometrica para representar objetos primitivos genéricos, e preveja para esta classe pelo menos uma característica:

Uma função virtual pura draw(Sculptor &t) que instrua o objeto a se desenhar em um objeto do tipo Sculptor. Essa função deverá ser implementada nas subclasses da classe FiguraGeometrica.

###5.2. Criação da classe concreta PutVoxel
Crie uma classe PutVoxel derivada de FiguraGeometrica. Um voxel deverá ser especificado para desenho conforme sua posição no espaco, sua cor e transparência.

O método draw(Sculptor &t) deverá ser implementado.

###5.3. Criação da classe concreta CutVoxel
Crie uma classe CutVoxel derivada de FiguraGeometrica. Um voxel deverá ser especificado para remoção conforme sua posição no espaco.

O método draw(Sculptor &t) deverá ser implementado.

###5.4. Criação da classe concreta PutBox
Crie uma classe PutBox derivada de FiguraGeometrica. Uma caixa deverá ser especificada para desenho conforme os limites espaciais fornecidos para as três dimensões, sua cor e transparência.

O método draw(Sculptor &t) deverá ser implementado.

###5.5. Criação da classe concreta CutBox
Crie uma classe CutBox derivada de FiguraGeometrica. Uma caixa deverá ser especificada para remoção conforme os limites espaciais fornecidos.

O método draw(Sculptor &t) deverá ser implementado.

###5.6. Criação da classe concreta PutSphere
Crie uma classe PutSphere derivada de FiguraGeometrica. Uma esfera deverá ser especificada para desenho conforme a posição do centro, seu raio em pixels, bem como sua cor e transparência.

O método draw(Sculptor &t) deverá ser implementado.

###5.7. Criação da classe concreta CutSphere
Crie uma classe CutSphere derivada de FiguraGeometrica. Uma esfera deverá ser especificada para remoção conforme a posição do centro e seu raio em pixels.

O método draw(Sculptor &t) deverá ser implementado.

###5.8. Criação da classe concreta PutEllipsoid
Crie uma classe PutEllipsoid derivada de FiguraGeometrica. Uma esfera deverá ser especificada para desenho conforme a posição do centro, seus raios em pixels, bem como sua cor e transparência.

O método draw(Sculptor &t) deverá ser implementado.

###5.9. Criação da classe concreta CutEllipsoid
Crie uma classe CutEllipsoid derivada de FiguraGeometrica. Uma esfera deverá ser especificada para remoção conforme a posição do centro e seus raios em pixels.

O método draw(Sculptor &t) deverá ser implementado.

###5.10. Armazenamento de figuras
Prepare um recurso para ler figuras gravadas em um arquivo e desenhá-las conforme as instruções presentes. O arquivo poderá conter os seguintes códigos, que deverão ser interpretados pela sua aplicação e utilizar a classe abstrata FiguraGeometrica para tratar e gerar o desenho conforme os códigos utilizados na tabela Tabela 2.

O arquivo conterá várias dessas linhas, cada uma contendo uma instrução orientando o tipo de desenho que se deseja realizar na sequência. Logo, novo programa lerá esse arquivo e criará um arquivo de saída no formato OFF contendo o desenho conceptualizado no arquivo fornecido.




  



<p align="justify" font-family="Arial">@Desenvolvido por José Felix</p>
