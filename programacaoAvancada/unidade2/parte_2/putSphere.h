#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "Sculptor.h"
#include "figuraGeometrica.h"


class PutSphere : public FiguraGeometrica
{
  protected:
      int xcenter,ycenter,zcenter,radius;
  public:
      PutSphere(int xc_, int yc_, int zc_, int radius_, float r_, float g_, float b_, float a_);
      ~PutSphere(){}

      void draw(Sculptor &s);


};

#endif // PUTSPHERE_H
