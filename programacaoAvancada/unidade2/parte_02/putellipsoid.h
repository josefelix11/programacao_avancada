#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "figurageometrica.h"

/**
 * @brief The PutEllipsoid class
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
 * @param draw
 * @param ~PutEllipsoid
*/

class PutEllipsoid : public FiguraGeometrica{
    int xcenter; 
    int ycenter; 
    int zcenter; 
    int rx; 
    int ry; 
    int rz;
public:
    PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a);
    void draw(Scultor &t);
    ~PutEllipsoid(){};
};

#endif // PUTELLIPSOID_H
