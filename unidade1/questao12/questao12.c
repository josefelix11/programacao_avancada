/*
O uso de ponteiros para funções em C serve principalmente para definir, em tempo de execução, qual função será executada, sem a necessidade de escrever o nome da função, de forma explícita naquele ponto do código.
*/

#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b){
	return a + b;
}

float sf(float x, float y){
	return x + y;
}

int main(){
	int x, y, z;
	int (*p)(int,int);
	printf("Digite 2 numero inteiros: ");
	scanf("%d %d", &x, &y);
	p = soma;
	z = p(x, y);
	printf("soma = %d\n",z);
	return 0;
}