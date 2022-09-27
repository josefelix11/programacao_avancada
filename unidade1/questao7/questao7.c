#include <stdio.h>

int main(void) {
  int mat[4], *p, x;

  p = mat + 1;
  printf("1- O valor de p = %d \n", p);
  //p = mat++; Ocasiona um erro, não me permite incrementar o valore de int[4]
  //printf("2- O valor de p = %d \n", p);
  // p = ++mat; Ocasiona um erro, não me permite incrementar o valore de int[4]
 //printf("3- O valor de p = %d \n", p);
  x = (*mat)++;
  printf("4- O valor de p = %d \n", x);
  
}