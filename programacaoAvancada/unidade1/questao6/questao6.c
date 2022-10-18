#include <stdio.h>

int main(void) {
              // 0  1  2  3  4  5
   int pulo[] = {1, 2, 3, 4 ,5 ,6};
  *(pulo + 2); // Essa expressão Representa  o terceiro elemento
  *(pulo + 4); // Essa expressão Representa  o quinto elemento
  pulo + 4; // Não referencia o terceiro elemento
  pulo + 2; // Não referencia o terceiro elemento
  printf("local = %i \n", *(pulo + 2));
  printf("local = %i\n", *(pulo + 4));
  printf("local = %i\n", pulo + 2);
  printf("local = %i\n", pulo + 4);
}