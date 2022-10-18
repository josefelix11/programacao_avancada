#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, j;
  float aux;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  float *vetor = (float *)malloc(n * sizeof(float));

  for (i = 0; i < n; i++) {
    printf("Digite o valor %d: ", i + 1);
    scanf("%f", &vetor[i]);
  }
  
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (vetor[i] > vetor[j]) {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      }
    }
  }

  printf("Vetor ordenado: ");
  for (i = 0; i < n; i++) {
    printf("%.1f ", vetor[i]);
  }

  free(vetor);

  return 0;
}
