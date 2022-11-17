#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "Sculptor.h"
#include "Interpretador.h"


using namespace std;

int main()
{
    cout << "Inicializando o Programa!!!" << endl;
    Sculptor *fig;
    Interpretador parser;
    vector<FiguraGeometrica*> figuras;

    figuras = parser.parse("hat.txt");

    fig = new Sculptor(parser.getDx(), parser.getDy(), parser.getDz());

    for(size_t i = 0; i < figuras.size(); i++){
        figuras[i] -> draw(*fig);
    }

    cout << "Criando Arquivo OFF \n" << endl; 
    fig -> writeOFF((char*)"hat.off");

    for(size_t i = 0; i < figuras.size(); i++){
        delete figuras[i];
    }

    delete fig;
    return 0;

}
