#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "Sculptor.h"
#include "figuraGeometrica.h"

class PutVoxel : public FiguraGeometrica
{
    protected:
        int x,y,z;
    public:
        PutVoxel(int x_, int y_, int z_, float r_, float g_, float b_, float a_);
        ~PutVoxel(){}
        void draw(Sculptor &s);  
};

#endif // PUTVOXEL_H
