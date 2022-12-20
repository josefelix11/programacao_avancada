#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "scultor.h"

/**
 * @brief FiguraGeometrica::FiguraGeometrica Classe Abstrata
 * @param r
 * @param g
 * @param b
 * @param a
 * @param isOn
 * @param draw
*/
class FiguraGeometrica{
protected:
    float r,g,b,a;
public:
    virtual void draw(Scultor &t)=0;
    virtual ~FiguraGeometrica(){};
};

#endif // FIGURAGEOMETRICA_H
