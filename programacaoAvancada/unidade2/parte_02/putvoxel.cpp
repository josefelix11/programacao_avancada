#include "putvoxel.h"

/**
 * @brief PutVoxel::PutVoxel
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

PutVoxel::PutVoxel(int x, int y, int z, float r, float g, float b, float a){
    this->x=x; 
    this->y=y; 
    this->z=z; 
    this->r=r; 
    this->g=g; 
    this->b=b; 
    this->a=a;
}

void PutVoxel::draw(Scultor &t){
    t.setColor(r,g,b,a);
    t.putVoxel(x,y,z);
}
