#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "Sculptor.h"
#include "figuraGeometrica.h"


class CutEllipsoid : public FiguraGeometrica
{
    protected:
      int xcenter,ycenter,zcenter,rx,ry,rz;
  
    public:
        CutEllipsoid(int xc_, int yc_, int zc_, int rx_, int ry_, int rz_);
        ~CutEllipsoid(){}

        void draw(Sculptor &s);

};

#endif // CUTELLIPSOID_H
