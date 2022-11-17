#ifndef CUTBOX_H
#define CUTBOX_HS
#include "sculptor.h"
#include "figurageometrica.h"


class CutBox : public FiguraGeometrica
{
    public:
        CutBox(int x0_, int x1_, int y0_, int y1_, int z0_, int z1_);
        ~CutBox(){}

        void draw(Sculptor &s);

    protected:
        int x0,x1,y0,y1,z0,z1;
    private:
};

#endif // CUTBOX_H
