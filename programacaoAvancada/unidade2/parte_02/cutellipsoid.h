#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H

#include "figurageometrica.h"

/**
 * @brief CutEllipsoid::CutEllipsoid
 * @param xcenter
 * @param ycenter
 * @param zcenter
 * @param rx
 * @param ry
 * @param rz
 * @param r
 * @param g
 * @param b
 * @param a
 */


class CutEllipsoid : public FiguraGeometrica{
    int xcenter_; 
    int ycenter_; 
    int zcenter_; 
    int rx_; 
    int ry_; 
    int rz_;
public:
    CutEllipsoid(int xcenter_, int ycenter_, int zcenter_, int rx_, int ry_, int rz_);
    void draw(Scultor &t);
    ~CutEllipsoid(){};
};

#endif // CUTELLIPSOID_H
