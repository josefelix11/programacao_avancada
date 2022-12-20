#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned long *mp;
  int i = 8, j = 8 ;
  int m[8][8] = {{0,0,0,0,0,0,0,0},
                 {1,1,1,1,1,1,1,1},
                 {1,0,1,0,0,1,1,0},
                 {0,0,0,1,1,1,0,0},
                 {1,1,1,1,1,1,1,1},
                 {0,0,0,0,1,1,1,1},
                 {1,1,1,1,0,0,0,0},
                 {0,0,0,1,1,1,0,0}};


  printf(" \n Espaço na Memoria = [%d] \n", mp);

  printf("\n A matriz \n");
  for (i = 0; i < 8; i++) {
    for (j = 0; j < 8; j++) {
      printf("%d", m[i][j]);
    }
    printf("\n");
  }
  
  mp = malloc (i * j * sizeof (int)) ;
  printf("\n A matriz no ponteiro: \n");
  for(i = 0;i < 8;i++){
    for(j = 0;j < 8;j++){
      mp[i] = m[i][j];  
      printf("%d", mp[i]);
    }
  }
  
  printf("\n Limpando a memoria \n");
  free(mp);

  return 0;
}