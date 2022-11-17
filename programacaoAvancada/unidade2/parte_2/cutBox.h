#ifndef CUTBOX_H
#define CUTBOX_HS
#include "Sculptor.h"
#include "figuraGeometrica.h"


class CutBox : public FiguraGeometrica
{
    protected:
        int x0,x1,y0,y1,z0,z1;
    public:
        CutBox(int x0_, int x1_, int y0_, int y1_, int z0_, int z1_);
        ~CutBox(){}

        void draw(Sculptor &s);

};

#endif // CUTBOX_H
