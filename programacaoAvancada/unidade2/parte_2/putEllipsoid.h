#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "Sculptor.h"
#include "figuraGeometrica.h"


class PutEllipsoid : public FiguraGeometrica
{

  protected:
      int xcenter,ycenter,zcenter,rx,ry,rz;
  public:
      PutEllipsoid(int xc_, int yc_, int zc_, int rx_, int ry_, int rz_, float r_, float g_, float b_, float a_);
      ~PutEllipsoid(){}

      void draw(Sculptor &s);

};

#endif // PUTELLIPSOID_H
