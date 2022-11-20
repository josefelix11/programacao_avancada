#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "figurageometrica.h"

/**
 * @brief The PutSphere class
 * @param xcenter
 * @param ycenter
 * @param zcenter
 * @param radius
 * @param r
 * @param g
 * @param b
 * @param a
 * @param draw
 * @param ~PutSphere
*/

class PutSphere : public FiguraGeometrica{
    int xcenter; 
    int ycenter; 
    int zcenter; 
    int radius;
public:
    PutSphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a);
    void draw(Scultor &t);
    ~PutSphere(){};
};

#endif // PUTSPHERE_H
