#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int n, i, j;
  float aux;
  clock_t t1, t2;
  double tempo;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  float *vetor = (float *)malloc(n * sizeof(float));

  for (i = 0; i < n; i++) {
    printf("Digite o valor %d: ", i + 1);
    scanf("%f", &vetor[i]);
  }
  
  t1 = clock();
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (vetor[i] > vetor[j]) {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      }
    }
  }
  t2 = clock();

  printf("Vetor ordenado: ");
  for (i = 0; i < n; i++) {
    printf("%.1f ", vetor[i]);
  }
  tempo = (t2 - t1) / (double)CLOCKS_PER_SEC;
  printf("\n Tempo de execucao: %f s \n", tempo);  

  free(vetor);

  return 0;
}
