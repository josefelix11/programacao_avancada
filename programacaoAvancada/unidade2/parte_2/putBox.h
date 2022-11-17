#ifndef PUTBOX_H
#define PUTBOX_H
#include "Sculptor.h"
#include "figuraGeometrica.h"

class PutBox : public FiguraGeometrica
{
  protected:
      int x0,x1,y0,y1,z0,z1;
  public:
      PutBox(int x0_, int x1_, int y0_, int y1_, int z0_, int z1_, float r_, float g_, float b_, float a_);
      ~PutBox(){}

      void draw(Sculptor &s);


};

#endif // PUTBOX_H
