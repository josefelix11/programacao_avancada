//sculptor.cpp
#include <iostream>
#include <fstream>
#include <math.h>
#include <cstdlib>
#include <iomanip>
#include <string>
#include "Sculptor.h"

using namespace std;

Sculptor::Sculptor(int _nx, int _ny, int _nz) {
  // Construtor da classe
  std::cout << "Inciando os Construtores!! " << std::endl;
  nx = _nx;
  ny = _ny;
  nz = _nz;

  //alocando Dinanicamente
  v = new Voxel**[nx];
  for(int i = 0;i < nx;i++){
      v[i] = new Voxel*[ny];
      for(int j = 0;j < ny ;j++){
        v[i][j] = new Voxel[nz];
      }
  }
  for(int i= 0;i < nx;i++){
    for(int j = 0;j < ny;j++){
      for(int k = 0;k < nz;k++){
        v[i][j][k].isOn = false; //começar não mostrando nenhum voxel;
      }
    }
  }

};

Sculptor::~Sculptor() {
  //Destrutor
  for(int i = 0; i < nx; i++){
      for(int j = 0; j < ny; j++){
         delete[] v[i][j];
      }
  }
  for(int i = 0;i < nx;i++){
      delete[] v[i];
  }

  delete[] v;
  cout << "Iniciando Destrutores e Fazendo a Limpeza";
};

void Sculptor::setColor(float r, float g, float b, float a){
  r = r; //red
  g = g; //green
  b = b; //blue
  a = a; //Transparência
};


 void Sculptor::putVoxel(int x, int y, int z){
   v[x][y][z].r = r;
   v[x][y][z].g = g;
   v[x][y][z].b = b;
   v[x][y][z].isOn = true;
 };

void Sculptor::cutVoxel(int x, int y, int z){
  v[x][y][z].isOn = false;
};

//criar um quadrado/caixa
void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1){
    // dx = x1 - x0 eixo x , dy = y1-y0 eixo y , dz = z1 -z0 no eixo z;
    for(int i= x0;i < x1;i++){
      for(int j = y0;j < y1;j++){
        for(int k = z0;k < z1;k++){
          putVoxel(i,j,k);
        }
      }
    }
};

//remove um quadrado/caixa
void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1){
      for(int i= x0;i < x1;i++){
      for(int j = y0;j < y1;j++){
        for(int k = z0;k < z1;k++){
          cutVoxel(i,j,k);
        }
      }
    }
};

 void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius){
  //r^2 = x^2 + y^2 + z^2 calculo do raio pela equação da esfera;
  double dist; // variavel para teste do centro e raio
  for(int i= 0;i < nx;i++){
    for(int j = 0;j < ny;j++){
      for(int k = 0;k < nz;k++){
        dist = pow(i - xcenter,2) + pow(j - ycenter,2) + pow(k - zcenter,2);
        if(dist <= pow(radius, 2)){
          putVoxel(i,j,k);
        }
      }
    }
  }

 };

 void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius){
  //r^2 = x^2 + y^2 + z^2 calculo do raio pela equação da esfera;
  double dist; // variavel para teste do centro e raio
  for(int i= 0;i < nx;i++){
    for(int j = 0;j < ny;j++){
      for(int k = 0;k < nz;k++){
        dist = pow(i - xcenter,2) + pow(j - ycenter,2) + pow(k - zcenter,2);
        if(dist <= pow(radius, 2)){
          putVoxel(i,j,k);
        }
      }
    }
  }

 };

 void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){
     // e = (x - x0)^2/a^2 + (y - y0)^2/b^2 + (z - z0)^2/c^2  => formula da elipsoide e "e <= 1"


 };


 void Sculptor::writeOFF(const char* filename){
     cout << "Criando e Abrindo um arquivo "<< "\n";
     //Arestas = 0 pois não é necessario
     //formato OFF
     // x, y, z dos voxels, i indices dos vertices das faceis
    int it; //
    float lado =0.5; // tamanho do voxel;
    ofstream f;
    int t = 0; //voxel ativos
    f.open(filename);
    f << "OFF\n";
    //buscar quantidade de voxels com isOn=True
    for(int i = 0; i < nx; i++){
        for(int j = 0; j < ny; j++){
            for(int k = 0; k < nz; k++){
                t++; //quantidade de voxels que deverão ser pintados
            }
        }
    }
   //flush Sincroniza o buffer de fluxo associado com sua sequência de saída controlada.
    f << t*8 << " " <<  t*6 << "0\n"; //quantidade de vertices, faceis e arestas
    for(int i = 0; i < nx; i++){
        for(int j = 0; j < ny; j++){
            for(int k = 0; k < nz; k++){
                if(v[i][j][k].isOn){
                    f << i - lado << " " << j + lado << " " << k - lado <<"\n" << flush; //vertice 0 x-  y+  z-
                    f << i - lado << " " << j + lado << " " << k + lado <<"\n" << flush; //vertice 1 x-  y+  z+
                    f << i - lado << " " << j - lado << " " << k - lado <<"\n" << flush; //vertice 2 x-  y-  z-
                    f << i + lado << " " << j + lado << " " << k - lado <<"\n" << flush; //vertice 3 x+  y+  z-
                    f << i + lado << " " << j - lado << " " << k + lado <<"\n" << flush; //vertice 4 x+  y-  z+
                    f << i - lado << " " << j + lado << " " << k + lado <<"\n" << flush; //vertice 5 x-  y+  z+
                    f << i + lado << " " << j - lado << " " << k - lado <<"\n" << flush; //vertice 6 x+  y-  z-
                    f << i + lado << " " << j + lado << " " << k + lado <<"\n" << flush; //vertice 7 x+  y+  z+
                }
            }
        }
    }
    t = 0; // resetar a quantidade voxels
    for(int i = 0; i < nx; i++){
        for(int j = 0; j < ny; j++){
            for(int k = 0; k < nz; k++){
                if(v[i][j][k].isOn){
                    it = t*8;
                    // FACE 0
                    f << fixed;
                    f << 4 << " " << it + 0 << " " << it + 3 << " " << it + 2 << " " << it + 1 << " ";
                    f << setprecision(2) << v[i][j][k].r << " " << setprecision(2) << v[i][j][k].g << " " << setprecision(2) << v[i][j][k].b << " " << setprecision(2) << v[i][j][k].a << "\n";
                    // FACE 1
                    f << 4 << " " << it + 4 << " " << it + 5 << " " << it + 6 << " " << it + 7 << " ";
                    f << setprecision(2) << v[i][j][k].r << " " << setprecision(2) << v[i][j][k].g << " " << setprecision(2) << v[i][j][k].b << " " << setprecision(2) << v[i][j][k].a << "\n";
                    // FACE 2
                    f << 4 << " " << it + 0 << " " << it+ 1 << " " << it + 5 << " " << it + 4 << " ";
                    f << setprecision(2) << v[i][j][k].r << " " << setprecision(2) << v[i][j][k].g << " " << setprecision(2) << v[i][j][k].b << " " << setprecision(2) << v[i][j][k].a << "\n";
                    // FACE 3
                    f << 4 << " " << it + 0 << " " << it + 4 << " " << it + 7 << " " << it + 3 << " ";
                    f << setprecision(2) << v[i][j][k].r << " " << setprecision(2) << v[i][j][k].g << " " << setprecision(2) << v[i][j][k].b << " " << setprecision(2) << v[i][j][k].a << "\n";
                    // FACE 4
                    f << 4 << " " << it + 7 << " " << it + 6 << " " << it + 2 << " " << it + 3 << " ";
                    f << setprecision(2) << v[i][j][k].r << " " << setprecision(2) << v[i][j][k].g << " " << setprecision(2) << v[i][j][k].b << " " << setprecision(2) << v[i][j][k].a << "\n";
                    // FACE 5
                    f << 4 << " " << it + 1 << " " << it+ 2 << " " << it + 6 << " " << it+ 5 << " ";
                    f << setprecision(2) << v[i][j][k].r << " " << setprecision(2) << v[i][j][k].g << " " << setprecision(2) << v[i][j][k].b << " " << setprecision(2) << v[i][j][k].a << "\n";
                    t++;  // acumulando o total de voxels
                }
            }
        }
    }
    cout << "Arquivo Salvo!! \n" << endl;
    f.close();

 }