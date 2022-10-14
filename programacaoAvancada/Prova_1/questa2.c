

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int x,y,z;
  int i,j,k;
  int ***ma;
  
  
  printf("Digite os valores de x,y,z: ");
  scanf("%d %d %d",&x,&y,&z);
  
  ma = (int***)malloc(x*sizeof(int*));
  for(i=0;i<x;i++){
      ma[i] = (int***)malloc(y*sizeof(int*));
  }
  
  for(i=0;i<x;i++){
      for(j=0;j<y;j++){
          ma[i][j] = (int***)malloc(z*sizeof(int*));
      }
  }
  
  
  printf("\n Calculando o tamanho da Elipse \n");
  for(i=0;i<x;i++){
      for(j=0;j<y;j++){
          for(k=0;k<z;k++){
            ma[i][j][k] = 0;
            if((pow(i-x/2,2)/pow(x/2,2))+(pow(j-y/2,2)/pow(y/2,2))+(pow(k-z/2,2)/pow(z/2,2))<=1){
                  ma[i][j][k] = 1;
              }
          }
      }
  }
  
  printf("\n Atualizando a matriz com a Elipse: \n\n");
  for(i=0;i<x;i++){
      for(j=0;j<y;j++){
          for(k=0;k<z;k++){
              printf("%d ",ma[i][j][k]);
          }
          printf("\n");
      }
      printf("\n");
  }
  
  printf("\n Limpando a memoria usada \n");
  free(ma);
  printf("\n\n Limpo com sucesso, Fim do Programa!!! \n");
  return 0;
}