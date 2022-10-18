//sculptor.cpp
#include "sculptor.h"
#include <cmath>
#include <iostream>

Scupltor::Sculptor(int _nx, int _ny, int _nz) {
  // Construtor da classe
  std::cout << "Inciando os Construtores!! " << std::endl
  this->x = _nx;
  this->y = _ny;
  this->z = _nz;
  r = g = b = a = 0.5;
  side = 0.5;


  //alocando Dinanicamente o cubo
  v = new Voxel**[x];

  for(int i = 0;i < x;i++){
      v[i] = new Voxel*[x];
  }

  for(int i = 0;i < x;i++){
      for(j = 0;j < y;j++){
          V[i][j] = new Voxel*[z];

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
  this->r = r; //red
  this->g = g; //green
  this->b = b; //blue
  this->a = a; //Transparência
};

void putVoxel(int _nx, int _ny, int _nz){
  if((_nx < x && _nx > 0) && (_ny < y && _ny > 0) && (_nz < z && _nz > 0)){
      v[_nx][_ny][_nz].r = r;
      v[_nx][_ny][_nz].g = g;
      v[_nx][_ny][_nz].b = b;
      v[_nx][_ny][_nz].a = a;
      v[_nx][_ny][_nz].isOn = true;
      

  }
};

