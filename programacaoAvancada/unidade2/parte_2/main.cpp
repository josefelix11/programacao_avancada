#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "Sculptor.h"
#include "Interpretador.h"


using namespace std;

int main()
{

    /* ---- CORTANDO BLOCOS ----

    for(int i = 30; i <= 70; i++){
        int j = i;
        nave.cutVoxel(i,85,j);
        nave.cutVoxel(i,15,j);

        nave.setColor(0,0,0,0);
        nave.putVoxel(i,85,j);
        nave.setColor(0,0,0,0);
        nave.putVoxel(i,15,j);
    }

    for(int i = 30; i <= 70; i++){
        int j = 100-i;
        nave.cutVoxel(i,85,j);
        nave.cutVoxel(i,15,j);

        nave.setColor(0,0,0,0);
        nave.putVoxel(i,85,j);
        nave.setColor(0,0,0,0);
        nave.putVoxel(i,15,j);

    }

    for(int i = 30; i <= 70; i++){
        nave.cutVoxel(i,85,50);
        nave.cutVoxel(i,15,50);

        nave.setColor(0,0,0,0);
        nave.putVoxel(i,85,50);
        nave.setColor(0,0,0,0);
        nave.putVoxel(i,15,50);
    }


    */

    Sculptor *nave;
    Interpretador parser;
    vector<FiguraGeometrica*> figuras;

    figuras = parser.parse("sculptor.txt");

    nave = new Sculptor(parser.getDx(), parser.getDy(), parser.getDz());

    for(size_t i = 0; i < figuras.size(); i++){
        figuras[i] -> draw(*nave);
    }

    nave -> writeOFF((char*)"nave.off");

    for(size_t i = 0; i < figuras.size(); i++){
        delete figuras[i];
    }

    delete nave;
    return 0;

}
