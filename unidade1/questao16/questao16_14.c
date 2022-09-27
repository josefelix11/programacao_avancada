// C uma função em um programa de computador que leia n valores do
// tipo float e os apresente em ordem crescente com qsort

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// função de comparação
int compare(const void *a, const void *b) {
  if (*(float *)a < *(float *)b) //compara se b é maior que a 
    return -1;
  if (*(float *)a > *(float *)b) //compara se a é maior que b 
    return 1;
  return 0;
}

int main() {
  //inicializando as variaveis
  int n, i;
  float *vetor;
  clock_t t1, t2;
  double tempo;

  //atribuindo a variavel n a quantidade de entradas floats.
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  //linkando o vetor a um ponteiro
  vetor = (float *)malloc(n * sizeof(float));

  //atribuindo valores as coodenadas do vetor que esta armazenado no ponteiro
  for (i = 0; i < n; i++) {
    printf("Digite o valor %d: ", i + 1);
    scanf("%f", &vetor[i]);
  }
  
  t1 = clock();
  //chamando a função qsort()
  qsort(vetor, n, sizeof(float), compare);
    t2 = clock();
  //saindo com os valores ordenados em ordem crescente
  printf("\n Valores ordenados: ");
  for (i = 0; i < n; i++) {
    printf("%.1f ", vetor[i]);
  }

  tempo = (t2 - t1) / (double)CLOCKS_PER_SEC;
  printf("\n Tempo de execucao: %f s \n", tempo);
  //limpando a memoria 
  free(vetor);

  return 0;
}
