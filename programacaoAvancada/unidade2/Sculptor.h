#ifndef SCULPTOR_H
#define SCULPTOR_H
#include <string>

using namespace std;

struct Voxel {
  float r,g,b; // cores
  float a; //transparencia
  bool isOn;  //ativar/desativar a transparência
};

class Sculptor
{
private:
  Voxel ***v; //3D matrix
  int nx,ny,nz; // Dimensions
  float r,g,b,a; // Current drawing color
public:
  Sculptor(int _nx, int _ny, int _nz); //Construtor
  ~Sculptor(); //Destrutor
  void setColor(float r, float g, float b, float a); // Configuração de Cor
  void putVoxel(int x, int y, int z); // Colocar o voxel
  void cutVoxel(int x, int y, int z); // Retirar o Voxel
  void putBox(int x0, int x1, int y0, int y1, int z0, int z1); // Colocar quadrado
  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1); // Tirar a quadrado
  void putSphere(int xcenter, int ycenter, int zcenter, int radius); // Colocar esfera
  void cutSphere(int xcenter, int ycenter, int zcenter, int radius); // Retirar esfera
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz); //colocar elipse
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  // retirar elipse
  void writeOFF(const char* filename);
  //criar um arquivo com os dados para a criação do arquivo
};

#endif //SCULPTOR_H