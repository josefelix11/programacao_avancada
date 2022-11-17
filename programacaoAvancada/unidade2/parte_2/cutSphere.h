#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "Sculptor.h"
#include "figuraGeometrica.h"


class CutSphere : public FiguraGeometrica
{
    protected:
      int xcenter,ycenter,zcenter,radius;
    public:
        CutSphere(int xc_, int yc_, int zc_, int radius_);
        ~CutSphere(){}

        void draw(Sculptor &s);
};

#endif // CUTSPHERE_H
