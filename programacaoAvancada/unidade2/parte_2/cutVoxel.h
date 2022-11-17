#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "Sculptor.h"
#include "figuraGeometrica.h"

class CutVoxel : public FiguraGeometrica

{
  protected:
     int x,y,z;
  public:
      CutVoxel(int x_, int y_, int z_);
      ~CutVoxel(){}

      void draw(Sculptor &s);
};

#endif // CUTVOXEL_H
