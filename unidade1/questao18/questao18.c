#include <stdio.h>
#include <stdlib.h>

void multiplicaMatriz(int *A, int *B, int *C, int linhasA, int colunasA, int colunasB){
    int i, j, k;
    for(i=0; i<linhasA; i++){
        for(j=0; j<colunasB; j++){
            for(k=0; k<colunasA; k++){
                C[i*colunasB+j] += A[i*colunasA+k] * B[k*colunasB+j];
            }
        }
    }
}

int main(){
    int linhasA, colunasA, linhasB, colunasB, i, j;
  
    printf("Digite o numero de linhas da matriz A: ");
    scanf("%d", &linhasA);
  
    printf("Digite o numero de colunas da matriz A: ");
    scanf("%d", &colunasA);
  
    printf("Digite o numero de linhas da matriz B: ");
    scanf("%d", &linhasB);
  
    printf("Digite o numero de colunas da matriz B: ");
    scanf("%d", &colunasB);
  
    if(colunasA != linhasB){
        printf("Nao eh possivel multiplicar as matrizes");
        return 0;
    }
  
    int *A = (int*)malloc(linhasA*colunasA*sizeof(int));
    int *B = (int*)malloc(linhasB*colunasB*sizeof(int));
    int *C = (int*)malloc(linhasA*colunasB*sizeof(int));
  
    printf("Digite os elementos da matriz A: ");
    for(i=0; i<linhasA; i++){
        for(j=0; j<colunasA; j++){
            scanf("%d", &A[i*colunasA+j]);
        }
    }
  
    printf("Digite os elementos da matriz B: ");
    for(i=0; i<linhasB; i++){
        for(j=0; j<colunasB; j++){
            scanf("%d", &B[i*colunasB+j]);
        }
    }
  
    multiplicaMatriz(A, B, C, linhasA, colunasA, colunasB);
  
    printf("Matriz A: \n");
    for(i=0; i<linhasA; i++){
        for(j=0; j<colunasA; j++){
            printf("%d ", A[i*colunasA+j]);
        }
        printf("\n");
    }
  
    printf("Matriz B: \n");
    for(i=0; i<linhasB; i++){
        for(j=0; j<colunasB; j++){
            printf("%d ", B[i*colunasB+j]);
        }
        printf("\n");
    }
  
    printf("Matriz C:\n");
    for(i=0; i<linhasA; i++){
        for(j=0; j<colunasB; j++){
            printf("%d ", C[i*colunasB+j]);
        }
        printf("\n");
    }
  
    free(A);
    free(B);
    free(C);
    return 0;
}
