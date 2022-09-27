#include <stdio.h>

int main(){
  int x[4], i;

  printf("x0 = %d \n ", x[0]);
  for(i=0;i<3;i++){
    printf("%d ",x+i);
  }
  
  char y[4];

  printf(" \n y0 = %d \n ", y[0]);
  for(i=0;i<3;i++){
    printf("%d ",y+i);
  }
  
  double z[4];

  printf(" \n z0 = %d \n ", z[0]);
  for(i=0;i<3;i++){
    printf("%d ",z+i);
  }

  float w[4];

  printf(" \n w0 = %d \n ", w[0]);
  for(i=0;i<3;i++){
    printf("%d ",w+i);
  }
}