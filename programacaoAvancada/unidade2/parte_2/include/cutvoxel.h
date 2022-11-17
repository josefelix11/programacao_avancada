#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "sculptor.h"
#include "figurageometrica.h"

class CutVoxel : public FiguraGeometrica // CutVoxel herda as propriedades da classe abstrata FiguraGeom�trica como p�blicas
{

    public:
        CutVoxel(int x_, int y_, int z_);
        ~CutVoxel(){}

        void draw(Sculptor &s);

    protected:
        int x,y,z;
    private:
};

#endif // CUTVOXEL_H
