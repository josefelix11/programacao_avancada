//sculptor.cpp
#include <iostream>
#include <fstream>
#include <math.h>
#include <cstdlib>
#include <iomanip>
#include <string>
#include "sculptor.h"

using namespace std;

Sculptor::Sculptor(int _nx, int _ny, int _nz) {
// Construtor da classe
/**
 * @brief Construtor da classe
 * @brief nx: Dimensão x, ny Dimensão y e nz Dimensão z  da matriz 3D
 */
cout << "Inciando os Construtores!!\n " << endl;
nx = _nx;
ny = _ny;
nz = _nz;

//alocando Dinanicamente
/**
 * @brief Alocando dinamicamente a matriz 3D
 */
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
/**
* @brief Destrutor da classe
*/
for(int i = 0; i < nx; i++){
    for(int j = 0; j < ny; j++){
        delete[] v[i][j];
    }
}
for(int i = 0;i < nx;i++){
    delete[] v[i];
}

delete[] v;
cout << "Iniciando Destrutores e Fazendo a Limpeza \n"  << endl;
};

void Sculptor::setColor(float r_, float g_, float b_, float a_){
/**
* @brief setColor: Ativa o voxel na posição (x,y,z) 
* @brief r, g, b, a: Cores do voxel e a transparência
*/
r = r_; //red
g = g_; //green
b = b_; //blue
a = a_; //Transparência
};


void Sculptor::putVoxel(int x, int y, int z){
/**
* @brief putVoxel: Ativa o voxel na posição (x,y,z)
* @brief x, y, z: Coordenadas do voxel
* @brief isOn: Estado do voxel (ativo)
*/
v[x][y][z].isOn = true;
v[x][y][z].r = r;
v[x][y][z].g = g;
v[x][y][z].b = b;

};

void Sculptor::cutVoxel(int x, int y, int z){
/**
* @brief isOn: Estado do voxel (desativado)
*/
v[x][y][z].isOn = false;
};

//criar um quadrado/caixa
void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1){
/**
 * @brief putBox: Ativa os voxels que satisfazem à equação x0<=x<=x1, y0<=y<=y1, z0<=z<=z1
 * 
 */
// dx = x1 - x0 eixo x , dy = y1-y0 eixo y , dz = z1 -z0 no eixo z;
for(int i= x0;i <= x1;i++){
    for(int j = y0;j <= y1;j++){
    for(int k = z0;k <= z1;k++){
        putVoxel(i,j,k);
    }
    }
}
};

//remove um quadrado/caixa
void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1)
{
/**
 * @brief cutBox: Desativa os voxels que satisfazem à equação x0<=x<=x1, y0<=y<=y1, z0<=z<=z1
 * 
 */
for(int i = x0; i <= x1; i++){
    for(int j = y0; j <= y1; j++){
        for(int k = z0; k <= z1; k++){
            cutVoxel(i,j,k);
        }
    }
}
};

void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius){
//r^2 = x^2 + y^2 + z^2 calculo do raio pela equação da esfera;
/**
* @brief putSphere: Ativa os voxels que satisfazem à equação (x-xcenter)^2 + (y-ycenter)^2 + (z-zcenter)^2 - radius^2 <= 0
* 
*/
double dist; // para medição da distancia
for(int i= 0;i < nx;i++){
    for(int j = 0;j < ny;j++){
    for(int k = 0;k < nz;k++){
        dist = pow(i - xcenter,2) + pow( - ycenter,2) + pow(k - zcenter,2);
        if(dist <= pow(radius, 2)){
        putVoxel(i,j,k);
        }
    }
    }
}

};

void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius){
    //r^2 = x^2 + y^2 + z^2 calculo do raio pela equação da esfera;
    /**
     * @brief cutSphere: Desativa os voxels que satisfazem à equação (x-xcenter)^2 + (y-ycenter)^2 + (z-zcenter)^2 - radius^2 <= 0
     * @brief xcenter, ycenter, zcenter, radius: Coordenadas do centro da esfera e o raio
     * @brief dist: Distância do centro da esfera
     * @brief pow: Potência
     * @brief i, j, k: Coordenadas do voxel
     * @brief cutVoxel: Desativa o voxel
     */

    double dist; // variavel para teste do centro e raio
    for(int i= 0;i < nx;i++){
        for(int j = 0;j < ny;j++){
            for(int k = 0;k < nz;k++){
                dist = pow(i - xcenter,2) + pow(j - ycenter,2) + pow(k - zcenter,2);
                if(dist <= pow(radius, 2)){
                cutVoxel(i,j,k);
                }
            }
        }
    }
};

void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){
    // (x - x0)^2/a^2 + (y - y0)^2/b^2 + (z - z0)^2/c^2 <= 1
    // CASO O RAIO EM ALGUM DOS EIXOS SEJA IGUAL A -,
    // O ELIPSOIDE NÃO SERÁ DESENHADO
    /**
     * @brief putEllipsoid: Ativa os voxels que satisfazem à equação (x-xcenter)^2/rx^2 + (y-ycenter)^2/ry^2 + (z-zcenter)^2/rz^2 - 1 <= 0
     * @brief rx, ry, rz: Raio do elipsoide
     * @brief xcenter, ycenter, zcenter: Centro do elipsoide
     * @brief dist: Variável para teste do centro e raio
     * @brief rx2, ry2, rz2: Variáveis para teste do raio
     * @brief x0, y0, z0: Variáveis para teste do centro
     */


    double dist;
    if(rx == 0){
        for(int j = 0; j <= ny; j++){
            for(int k = 0; k <= nz; k++){
                dist = pow(j - ycenter, 2)/pow(ry, 2) + pow(k - zcenter, 2)/pow(rz, 2);
                if(dist <= 1){
                    putVoxel(xcenter,j,k);
                }
            }
        }
    }else if(ry == 0){
        for(int i=0; i<= nx; i++){
            for(int k = 0; k <= nz; k++){
                dist = pow(i - xcenter, 2)/pow(rx, 2) + pow(k - zcenter, 2)/pow(rz, 2);
                if(dist <= 1){
                    putVoxel(i,ycenter,k);
                }
            }
        }

    }else if(rz == 0){
        for(int i = 0; i <= nx; i++){
            for(int j=0; j <= ny; j++){
                dist = pow(i - xcenter, 2)/pow(rx, 2) + pow(j - ycenter, 2)/pow(ry, 2);
                if(dist <= 1){
                    putVoxel(i,j,zcenter);
                }
            }
        }
    }else{
        for(int i = 0; i < nx; i++){
            for(int j = 0; j < ny; j++){
                for(int k = 0; k < nz; k++){
                    dist = pow(i - xcenter,2)/pow(rx, 2) + pow(j - ycenter,2)/pow(ry, 2) + pow(k - zcenter,2)/pow(rz, 2);
                    if (dist <= 1){
                        putVoxel(i,j,k);
                    }
                }
            }
        }
    }
}

void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){
    //  (x - x0)^2/a^2 + (y - y0)^2/b^2 + (z - z0)^2/c^2 <= 1
    // O ELIPSOIDE NÃO SERÁ DESENHADO
    /**
     * @brief putEllipsoid: Ativa os voxels que satisfazem à equação (x-xcenter)^2/rx^2 + (y-ycenter)^2/ry^2 + (z-zcenter)^2/rz^2 - 1 <= 0
     * @brief rx, ry, rz: Raio do elipsoide
     * @brief xcenter, ycenter, zcenter: Centro do elipsoide
     * @brief dist: Variável para teste do centro e raio
     * @brief rx2, ry2, rz2: Variáveis para teste do raio
     * @brief x0, y0, z0: Variáveis para teste do centro
     */

    double dist;
    if(rx == 0){
        for(int j = 0; j <= ny; j++){
            for(int k = 0; k <= nz; k++){
                dist = pow(j - ycenter, 2)/pow(ry, 2) + pow(k - zcenter, 2)/pow(rz, 2);
                if(dist <= 1){
                    cutVoxel(xcenter,j,k);
                }
            }
        }
    }else if(ry == 0){
        for(int i=0; i<= nx; i++){
            for(int k = 0; k <= nz; k++){
                dist = pow(i - xcenter, 2)/pow(rx, 2) + pow(k - zcenter, 2)/pow(rz, 2);
                if(dist <= 1){
                    cutVoxel(i,ycenter,k);
                }
            }
        }

    }else if(rz == 0){
        for(int i = 0; i <= nx; i++){
            for(int j=0; j <= ny; j++){
                dist = pow(i - xcenter, 2)/pow(rx, 2) + pow(j - ycenter, 2)/pow(ry, 2);
                if(dist <= 1){
                    cutVoxel(i,j,zcenter);
                }
            }
        }
    }else{
        for(int i = 0; i < nx; i++){
            for(int j = 0; j < ny; j++){
                for(int k = 0; k < nz; k++){
                    dist = pow(i - xcenter,2)/pow(rx, 2) + pow(j - ycenter,2)/pow(ry, 2) + pow(k - zcenter,2)/pow(rz, 2);
                    if (dist <= 1){
                        cutVoxel(i,j,k);
                    }
                }
            }
        }
    }
};

void Sculptor::writeOFF(const char *filename){
    // Criação do arquivo OFF
    /**
     * @brief filename: Nome do arquivo OFF
     * @brief nfaces: Número de faces
     * @brief nvertices: Número de vértices
     * @brief nvoxels: Número de voxels
     * @brief x, y, z: Variáveis para percorrer a matriz 3D
     * @brief i: Variável para percorrer a matriz 3D
     * @brief j: Variável para percorrer a matriz 3D
     * @brief k: Variável para percorrer a matriz 3D
     * @brief lado tamanho do lado do voxel
     * @brief t é o tamanho do lado do voxel
     * @brief it é o iteraror do voxel que está sendo desenhado
     */

    cout << "Criando e Abrindo um arquivo "<< "\n";
    //Arestas = 0 pois não é necessario
    //formato OFF
    // x, y, z dos voxels, i indices dos vertices das faceis

    int x, y, z, t, it; //variaveis usadas para as atualizações do arquivo;
    float lado = 0.5;  // tamanho do voxel;
    ofstream f;
    t = 0;
    f.open(filename);
    f << "OFF\n";
    for(x = 0; x < nx; x++){
    for(y = 0; y < ny; y++){
        for(z = 0; z < nz; z++){
            if(v[x][y][z].isOn){
                t++; //
            }
        }
    }
    }

    f << t*8 << " " << t*6 << " 0 \n"; //
    for(x = 0; x < nx; x++){
    for(y = 0; y < ny; y++){
        for(z = 0; z < nz; z++){
            if(v[x][y][z].isOn){
                f << x - lado << " " << y + lado << " " << z - lado << "\n" << flush; //Vertice 0 x- y+ z-
                f << x - lado << " " << y - lado << " " << z - lado << "\n" << flush; //Vertice 1 x- y- z-
                f << x + lado << " " << y - lado << " " << z - lado << "\n" << flush; //Vertice 2 x+ y- z-
                f << x + lado << " " << y + lado << " " << z - lado << "\n" << flush; //Vertice 3 x+ y+ z-
                f << x - lado << " " << y + lado << " " << z + lado << "\n" << flush; //Vertice 4 x- y+ z+
                f << x - lado << " " << y - lado << " " << z + lado << "\n" << flush; //Vertice 5 x- y- z+
                f << x + lado << " " << y - lado << " " << z + lado << "\n" << flush; //Vertice 6 x+ y- z+
                f << x + lado << " " << y + lado << " " << z + lado << "\n" << flush; //Vertice 7 x+ y+ z+
            }
        }
    }
    }

    t = 0;      // resetar a quantidade voxels
    for(x = 0; x < nx; x++){
    for(y = 0; y < ny; y++){
        for(z = 0; z < nz; z++){
            if(v[x][y][z].isOn){
                it = t*8;
                // FACE 0
                f << fixed;
                f << 4 << " " << it + 0 << " " << it + 3 << " " << it + 2 << " " << it + 1 << " ";
                f << setprecision(2) << v[x][y][z].r << " " << setprecision(2) << v[x][y][z].g << " " << setprecision(2) << v[x][y][z].b << " " << setprecision(2) << v[x][y][z].a << "\n";
                // FACE 1
                f << 4 << " " << it + 4 << " " << it + 5 << " " << it + 6 << " " << it + 7 << " ";
                f << setprecision(2) << v[x][y][z].r << " " << setprecision(2) << v[x][y][z].g << " " << setprecision(2) << v[x][y][z].b << " " << setprecision(2) << v[x][y][z].a << "\n";
                // FACE 2
                f << 4 << " " << it + 0 << " " << it + 1 << " " << it + 5 << " " << it + 4 << " ";
                f << setprecision(2) << v[x][y][z].r << " " << setprecision(2) << v[x][y][z].g << " " << setprecision(2) << v[x][y][z].b << " " << setprecision(2) << v[x][y][z].a << "\n";
                // FACE 3
                f << 4 << " " << it + 0 << " " << it + 4 << " " << it + 7 << " " << it + 3 << " ";
                f << setprecision(2) << v[x][y][z].r << " " << setprecision(2) << v[x][y][z].g << " " << setprecision(2) << v[x][y][z].b << " " << setprecision(2) << v[x][y][z].a << "\n";
                // FACE 4
                f << 4 << " " << it + 7 << " " << it + 6 << " " << it + 2 << " " << it + 3 << " ";
                f << setprecision(2) << v[x][y][z].r << " " << setprecision(2) << v[x][y][z].g << " " << setprecision(2) << v[x][y][z].b << " " << setprecision(2) << v[x][y][z].a << "\n";
                // FACE 5
                f << 4 << " " << it + 1 << " " << it + 2 << " " << it + 6 << " " << it + 5 << " ";
                f << setprecision(2) << v[x][y][z].r << " " << setprecision(2) << v[x][y][z].g << " " << setprecision(2) << v[x][y][z].b << " " << setprecision(2) << v[x][y][z].a << "\n";
                t++; // acumulando o total de voxels
            }
        }
    }
    }
    cout << "Arquivo Salvo!! \n" << endl;
    f.close();
}
