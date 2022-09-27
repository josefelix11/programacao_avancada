int main(void){
float vet[5] = {1.1,2.2,3.3,4.4,5.5};
float *f;
int i;
f = vet;
printf("contador/valor/valor/endereco/endereco");
for(i = 0 ; i <= 4 ; i++){
    printf("\n i = %d",i);
    printf(" vet[%d] = %.1f",i, vet[i]);
    printf("*(f + %d) = %.1f",i, *(f+i));
    printf(" &vet[%d] = %X ",i, &vet[i]);
    printf("(f + %d) = %X \n",i, f+i);
}
}
// A saida esta bem poluida porem podemos vê que os dados são exibidos de maneira correta e os valores passados ao ponteiro 
// são recuperados ao serem chamados pela funçao printf.
// O programa é um exemplo de iteração de uma matriz float sendo iterada
