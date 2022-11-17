#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H
#include <vector>
#include <string>
#include "figurageometrica.h"

class Interpretador
{
    public:
        Interpretador();
        //virtual ~Interpretador(); // Como o vector j� tem o destrutor, n�o precisamos declar�-lo

        vector<FiguraGeometrica*> parse(string filename);
        int getDx();
        int getDy();
        int getDz();

    protected:
        int dx,dy,dz;
        float r,g,b,a;
    private:
};

#endif // INTERPRETADOR_H
