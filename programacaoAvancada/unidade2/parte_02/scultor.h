#ifndef SCULTOR_H
#define SCULTOR_H
#include "Voxel.h"

/**
 * @brief The Scultor class
 * @param nx
 * @param ny
 * @param nz
*/

class Scultor{
protected:
    Voxel ***v; // Matrix 3D
    int nx,ny,nz; // Dimensões
    float r,g,b,a; // Propriedades do Voxel
    float fix;

public:
    Scultor(int nx1, int ny1, int nz1);
    ~Scultor();
    void setColor(float r1, float g1, float b1, float alpha);
    void putVoxel(int x, int y, int z);
    void cutVoxel(int x, int y, int z);
    int getx();
    int gety();
    int getz();
    void writeOFF(char *filename);

};
#endif // SCULTOR_H
