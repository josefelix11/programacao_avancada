#include <stdio.h>

int main()
{
  int valor, *p1 , idade, vetor[3], *p4, *p5;
  float temp, *p2;
  char aux, *nome = "Ponteiros", *p3;
  
  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("A) %d \n", valor); //ok saida 20  
  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("B) %.1f \n", temp); // OK saida 29.0
  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("C) %c \n", aux); //Ok saida P
  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  printf("D) %c \n", aux); // OK saida e
  /* (e) */
  p3 = nome;
  printf("E) %c \n", *p3); // A saida esta sendo do ponteiro e não da variavel de memoria por isso não foi exibido o char completo, e o tipo de p3 é uma string e não um char;
  printf("*E) %s => Correção de saida \n", p3);
  /* (f) */
  p3 = p3 + 4;
  printf("F) %c \n", *p3); // O ponteiro continua inalterado pois o valor esta sendo trocado apenas na variavel e não no ponteiro guardado na memoria;
  printf("*F) %s => Correção de saida \n", p3);
  /* (g) */
  p3--;
  printf("G) %c \n", *p3); //Ok pois a decrementação foi feita no ponteiro o que fez o mesmo voltar uma casa; 
  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("H) %d \n", idade); // Ok pois o valor atribuido ao ponteiro p4 é o valor da posição 0 do vetor
  /* (i) */
  p5 = p4 + 1;
  idade = *p5;
  printf("I) %d \n", idade); // OK pois foi atribuido a P5 o valor da posição 1 do vetor que p4 que nesse caso seria o valor seguinte na ordem 
  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  printf("J) %d \n", idade);
  // OK pois foi atribuido a P4 o valor da posição 2 do vetor que p5 que nesse caso seria o valor seguinte na ordem ;
  /* (l) */
  p4 = p4 - 2;
  idade = *p4;
  printf("L) %d \n", idade); 
  // OK pois foi atribuido a P4 o valor da posição 0 de p4 que nesse caso seria o valor obtido indo no sentido contrário;
  /* (m) */
  p5 = &vetor[2] - 1;
  printf("M) %d \n", *p5);
  // OK pois foi atribuido a P5 o valor da posição 2 do vetor e vai decrementar, o que nesse caso o irá fazer voltar em um na ordem vetor[1];
  /* (n) */
  p5++;
  printf("N) %d \n", *p5);
  // OK pois foi atribuido a P5 o valor da posição 1 porém foi incrementado em 1  a sua posição atual o fazendo pular para o proximo valor;
  return 0; 
  
}
