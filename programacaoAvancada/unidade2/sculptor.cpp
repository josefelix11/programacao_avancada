//sculptor.cpp
#include <iostream>
#include <fstream>
#include <cmath>
#include "sculptor.h"
#include <queue>
#include <string>

Scupltor::Sculptor(int _nx, int _ny, int _nz) {
  // Construtor da classe
  std::cout << "Inciando os Construtores!! " << std::endl
  x = _nx;
  y = _ny;
  z = _nz;
  r = g = b = a = 0.5;

  //alocando Dinanicamente o cubo
  v = new Voxel**[x];

  for(int i = 0;i < x;i++){
      v[i] = new Voxel*[x];
  }

  for(int i = 0;i < x;i++){
      for(j = 0;j < y;j++){
          v[i][j] = new Voxel*[z];

      }
  }
};

Scupltor::~Sculptor(int _nx, int _ny, int _nz) {
  //Destrutor
  for(int i = 0; i < x; i++){
      for(int j = 0; j < y; j++){
         delete v[i][j];
      }
  }
  for(int i = 0;i < x;i++){
      delete v[i];
  }

  delete v;
  cout << "Destrutor Sculptor"
};

void setColor(float r, float g, float b, float a){
  r = r; //red
  g = g; //green
  b = b; //blue
  a = a; //Transparência
};

void putVoxel(int _nx, int _ny, int _nz){
  if((x < _nx && x > 0) && (y < _ny && y > 0) && (z < _nz && z > 0)){
      v[x][y][z].r = r;
      v[x][y][z].g = g;
      v[x][y][z].b = b;
      v[x][y][z].a = a;
      v[x][y][z].isOn = true;
  }
};

void Sculptor::cutVoxels(void)
{
    std::queue<int> q;
    int lx,ly,lz;
    for(int x=1; x<nx-1; x++){
        for(int y=1; y<ny-1; y++){
            for(int z=1; z<nz-1; z++){
                if((v[x][y][z].isOn == true) &&
                (v[x+1][y][z].isOn == true) &&
                (v[x-1][y][z].isOn == true) &&
                (v[x][y+1][z].isOn == true) &&
                (v[x][y-1][z].isOn == true) &&
                (v[x][y][z+1].isOn == true) &&
                (v[x][y][z-1].isOn == true)){
                    q.push(x);
                    q.push(y);
                    q.push(z);
                }
            }
        }
    }
    while(!q.empty()){
        lx=q.front(); q.pop();
        ly=q.front(); q.pop();
        lz=q.front(); q.pop();
        v[lx][ly][lz].isOn = false;
    }
    std::cout<< "\n> Limpando Voxel !\n" << std::endl;
}
