#include <stdio.h>

//Programa usado para imprimir os valores que estão armazenados no vetor e são atualizados mediante o valor de i;
int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
  }
}

// *******************************

#include <stdio.h>

// O programa esta fazendo a mesma coisa que o programa anterior porém a impressão é feita dos valores das variáveis em Hexadecimal.
int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%X ",vet+i);
  }
}