#ifndef SCULPTOR_H
#define SCULPTOR_H

struct Voxel {
  /**
   * @brief r, g, b: Cores do voxel
   * @brief a: Transparência do voxel
   * @brief isOn: Estado do voxel (ativo ou desativado)
   */
  float r,g,b; // Colors
  float a; // Transparency
  bool isOn; // Included or not
};

class Sculptor {

private:
  /**
   * @brief x, y, z: Coordenadas do voxel
   * @brief r, g, b, a: Cores do voxel
   * @brief isOn: Estado do voxel (ativo ou desativado)
   * @brief v: Matriz 3D de voxels
   */
  Voxel ***v; // 3D matrix
  int nx,ny,nz; // Dimensions
  float r,g,b,a; // Current drawing color
public:
  /**
   * @brief Sculptor: Construtor da classe
   * 
   */
  Sculptor(int _nx, int _ny, int _nz);//Construct of class
  /**
   * @brief ~Sculptor: Destrutor da classe
   * 
   */
  ~Sculptor(); // Destruct of class
  /**
   * @brief Set the Color object
   * 
   * @param r 
   * @param g 
   * @param b 
   * @param a 
   */
  void setColor(float r, float g, float b, float a);
  /**
   * @brief putVoxel: Ativa o voxel na posição (x,y,z)
   * 
   * @param x: Coordenada x do voxel
   * @param y: Coordenada y do voxel
   * @param z: Coordenada z do voxel
   */
  void putVoxel(int x, int y, int z);
  /**
   * @brief cutVoxel: Desativa o voxel na posição (x,y,z)
   * 
   * @param x: Coordenada x do voxel
   * @param y: Coordenada y do voxel
   * @param z: Coordenada z do voxel
   */
  void cutVoxel(int x, int y, int z);
  /**
   * @brief putBox: Ativa os voxels na faixa de [x0,x1,y0,y1,z0,z1]
   * 
   * @param x0: Coordenada x inicial
   * @param x1: Coordenada x final
   * @param y0: Coordenada y inicial
   * @param y1: Coordenada y final
   * @param z0: Coordenada z inicial
   * @param z1: Coordenada z final
   */
  void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
  /**
   * @brief cutBox: Desativa os voxels na faixa de [x0,x1,y0,y1,z0,z1]
   * 
   * @param x0: Coordenada x inicial
   * @param x1: Coordenada x final
   * @param y0: Coordenada y inicial
   * @param y1: Coordenada y final
   * @param z0: Coordenada z inicial
   * @param z1: Coordenada z final
   */
  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
  /**
   * @brief putSphere: Ativa os voxels que satisfazem à equação da esfera
   * 
   * @param xcenter: Coordenada x do centro da esfera
   * @param ycenter: Coordenada y do centro da esfera
   * @param zcenter: Coordenada z do centro da esfera
   * @param radius: Raio da esfera
   */
  void putSphere(int xcenter, int ycenter, int zcenter, int radius);
  /**
   * @brief cutSphere: Desativa os voxels que satisfazem à equação da esfera
   * 
   * @param xcenter: Coordenada x do centro da esfera
   * @param ycenter: Coordenada y do centro da esfera
   * @param zcenter: Coordenada z do centro da esfera
   * @param radius: Raio da esfera
   */
  void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
  /**
   * @brief putEllipsoid: Ativa os voxels que satisfazem à equação do elipsoide
   * 
   * @param xcenter: Coordenada x do centro do elipsoide
   * @param ycenter: Coordenada y do centro do elipsoide
   * @param zcenter: Coordenada z do centro do elipsoide
   * @param rx: Raio do elipsoide na direção x
   * @param ry: Raio do elipsoide na direção y
   * @param rz: Raio do elipsoide na direção z
   */
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  /**
   * @brief cutEllipsoid: Desativa os voxels que satisfazem à equação do elipsoide
   * 
   * @param xcenter: Coordenada x do centro do elipsoide
   * @param ycenter: Coordenada y do centro do elipsoide
   * @param zcenter: Coordenada z do centro do elipsoide
   * @param rx: Raio do elipsoide na direção x
   * @param ry: Raio do elipsoide na direção y
   * @param rz: Raio do elipsoide na direção z
   */
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  /**
   * @brief writeOFF: Escreve o arquivo OFF
   * 
   * @param filename: Nome do arquivo OFF
   */
  void writeOFF(const char* filename);
};

#endif // SCULPTOR_H
