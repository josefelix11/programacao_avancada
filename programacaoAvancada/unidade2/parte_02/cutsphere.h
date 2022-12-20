#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figurageometrica.h"


/**
 * @brief CutSphere::CutSphere
 * @param xcenter
 * @param ycenter
 * @param zcenter
 * @param radius
*/

class CutSphere : public FiguraGeometrica{
    int xcenter; 
    int ycenter; 
    int zcenter; 
    int radius;
public:
    CutSphere(int xcenter, int ycenter, int zcenter, int radius);
    void draw(Scultor &t);
    ~CutSphere(){};
};

#endif // CUTSPHERE_H
