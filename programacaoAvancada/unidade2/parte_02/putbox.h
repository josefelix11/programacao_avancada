#ifndef PUTBOX_H
#define PUTBOX_H
#include "figurageometrica.h"

/**
 * @brief The PutBox class
*/

class PutBox : public FiguraGeometrica{
    int x0; 
    int x1; 
    int y0; 
    int y1; 
    int z0; 
    int z1;

public:
    PutBox(int x0, int x1, int y0, int y1, int z0, int z1, float r, float g, float b, float a);
    void draw(Scultor &t);
    ~PutBox();
};

#endif // PUTBOX_H
