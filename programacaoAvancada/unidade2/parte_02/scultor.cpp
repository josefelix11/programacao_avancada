#include "scultor.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>

/**
 * @brief Scultor::Scultor
 * @param _nx
 * @param _ny
 * @param _nz
 * @param _r
 * @param _g
 * @param _b
 * @param _a
*/

using namespace std;

Scultor::Scultor(int nx1, int ny1, int nz1){
    nx = nx1;
    ny = ny1;
    nz = nz1;
    fix = 0.5;
    r = 0.5;
    g = 0.5;
    b = 0.5;
    a = 0.5;

    // Alocação dinâmica da matriz 3d
    v = new Voxel**[nx];
     for (int i =0; i<nx; i++){
      v[i] = new Voxel*[ny];

     for (int j =0; j<ny; j++){
       v[i][j]= new Voxel[nz];
      }
    }
}

/**
 * @brief Scultor::~Scultor Destrutot da classe Scultor
*/

Scultor::~Scultor(){
    for(int i = 0; i < nx; i++){
        for (int j = 0; j < ny; j++){
               delete[] v[i][j];
            }
        }
        for (int i=0; i <nx; i++){
            delete[] v[i];
        }

        delete[] v;

        nx = 0;
        ny = 0;
        nz = 0;
}

/**
 * @brief Scultor::setColor
 * @param r
 * @param g
 * @param b
 * @param alpha
*/
void Scultor::setColor(float r1, float g1, float b1, float alpha){
    r = r1;
    g = g1;
    b = b1;
    a = alpha;
}

/**
 * @brief Scultor::putVoxel
 * @param x
 * @param y
 * @param z
*/

void Scultor::putVoxel(int x, int y, int z){
    v[x][y][z].isOn = true;
    v[x][y][z].r = r;
    v[x][y][z].g = g;
    v[x][y][z].b = b;
    v[x][y][z].a = a;

}

/**
 * @brief Scultor::cutVoxel
 * @param x
 * @param y
 * @param z
*/

void Scultor::cutVoxel(int x, int y, int z){
    v[x][y][z].isOn = false;
}

int Scultor::getx(){
    return nx;
}
int Scultor::gety(){
    return ny;
}
int Scultor::getz(){
    return nz;
}

/**
 * @brief Scultor::writeOFF usada para escrever o arquivo OFF
 * @param filename
 * @return 
*/

void Scultor::writeOFF(char *filename){
  int quantvox = 0;
  int ref;
  ofstream Arqfinal;
  Arqfinal.open(filename);

  Arqfinal<<"OFF\n";

  // varre todos os voxel e analisa os que devem ser exibidos no .off
  for (int i = 0; i < nx; i++){
      for (int j = 0; j <ny; j++){
           for (int k = 0; k <nz; k++){
                if(v[i][j][k].isOn == true){
                quantvox++;
                }
           }
       }
  }
  Arqfinal<<quantvox * 8<<" "<<quantvox * 6 << " " << "0" << "\n"; // mostra a quantidade total de vertices, faces e arestas

  for (int a = 0; a < nx; a++){
      for (int b = 0; b < ny; b++){
           for (int c = 0; c < nz; c++){
                if(v[a][b][c].isOn == true){
                Arqfinal << a - fix << " " << b + fix << " " << c - fix << "\n" << flush;
                Arqfinal << a - fix << " " << b - fix << " " << c - fix << "\n" << flush;
                Arqfinal << a + fix << " " << b - fix << " " << c - fix << "\n" << flush;
                Arqfinal << a + fix << " " << b + fix << " " << c - fix << "\n" << flush;
                Arqfinal << a - fix << " " << b + fix << " " << c + fix << "\n" << flush;
                Arqfinal << a - fix << " " << b - fix << " " << c + fix << "\n" << flush;
                Arqfinal << a + fix << " " << b - fix << " " << c + fix << "\n" << flush;
                Arqfinal << a + fix << " " << b + fix << " " << c + fix << "\n" << flush;
                }
           }
      }
  }

  quantvox = 0;

  // descrever cada voxel
  for (int a= 0; a<nx; a++){
      for (int b = 0; b<ny; b++){
           for (int c= 0; c<nz; c++){
                if(v[a][b][c].isOn == true){
                ref = quantvox * 8;
                Arqfinal << fixed;

                // montar linha que realiza a construção das faces a partir do vertices e mostrar as propriedades rgba do voxel
                Arqfinal << "4" << " " << 0+ref << " " << 3+ref << " " << 2+ref << " " << 1+ref << " ";
                Arqfinal << setprecision(2)<<v[a][b][c].r << " " << setprecision(2)<<v[a][b][c].g <<" " << setprecision(2)<<v[a][b][c].b << " " << setprecision(2) << v[a][b][c].a << "\n";

                Arqfinal << "4" << " " << 4+ref << " " << 5+ref << " " << 6+ref << " " << 7+ref << " ";
                Arqfinal << setprecision(2)<<v[a][b][c].r << " " << setprecision(2)<<v[a][b][c].g <<" " << setprecision(2)<<v[a][b][c].b << " " << setprecision(2) << v[a][b][c].a << "\n";

                Arqfinal << "4" << " " << 0+ref << " " << 1+ref << " " << 5+ref << " " << 4+ref << " ";
                Arqfinal << setprecision(2)<<v[a][b][c].r << " " << setprecision(2)<<v[a][b][c].g <<" " << setprecision(2)<<v[a][b][c].b << " " << setprecision(2) << v[a][b][c].a << "\n";

                Arqfinal << "4" << " " << 0+ref << " " << 4+ref << " " << 7+ref << " " << 3+ref << " ";
                Arqfinal << setprecision(2)<<v[a][b][c].r << " " << setprecision(2)<<v[a][b][c].g <<" " << setprecision(2)<<v[a][b][c].b << " " << setprecision(2) << v[a][b][c].a << "\n";

                Arqfinal << "4" << " " << 3+ref << " " << 7+ref << " " << 6+ref << " " << 2+ref << " ";
                Arqfinal << setprecision(2)<<v[a][b][c].r << " " << setprecision(2)<<v[a][b][c].g <<" " << setprecision(2)<<v[a][b][c].b << " " << setprecision(2) << v[a][b][c].a << "\n";

                Arqfinal << "4" << " " << 1+ref << " " << 2+ref << " " << 6+ref << " " << 5+ref << " ";
                Arqfinal << setprecision(2)<<v[a][b][c].r << " " << setprecision(2)<<v[a][b][c].g <<" " << setprecision(2)<<v[a][b][c].b << " " << setprecision(2) << v[a][b][c].a << "\n";

                quantvox = quantvox + 1;
                }
           }
       }
  }
  Arqfinal.close();
}
