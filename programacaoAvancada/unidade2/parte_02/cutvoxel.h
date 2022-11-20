#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figurageometrica.h"

/**
 * @brief CutVoxel::CutVoxel
 * @param x
 * @param y
 * @param z
 * @param r
 * @param g
 * @param b
 * @param a
 * @param isOn
 * @param draw
 */


class CutVoxel:public FiguraGeometrica{
    int x; 
    int y; 
    int z;
public:
    CutVoxel(int x, int y, int z);
    ~CutVoxel(){};
    void draw(Scultor &t);
};

#endif // CUTVOXEL_H
