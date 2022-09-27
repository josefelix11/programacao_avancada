#include <stdio.h>
#include <stdlib.h>

void somaVetor(int *vetor1, int *vetor2, int *vetor3, int tamanho){
    for(int i = 0; i < tamanho; i++){
        vetor3[i] = vetor1[i] + vetor2[i];
    }
}

int main(){
    int tamanho;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);
    int vetor1[tamanho], vetor2[tamanho], vetor3[tamanho];
    printf("Digite os elementos do vetor 1: ");
    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor1[i]);
    }
    printf("Digite os elementos do vetor 2: ");
    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor2[i]);
    }
    somaVetor(vetor1, vetor2, vetor3, tamanho);
    printf("Vetor 3: ");
    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor3[i]);
    }
    return 0;
}
