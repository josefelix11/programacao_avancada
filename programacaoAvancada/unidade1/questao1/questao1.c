#include <stdio.h>

int main()
{
    int i = 3, j = 5, r1, r2, r3, r4 ; 
    int *p, *q;
    p = &i;
    q = &j;
    r1 = (p == &i);
    r2 = (*p - *q);
    r3 = (**&p);
    r4 = (3 - *p/(*q) + 7);
    printf("Operações Realizadas com Sucesso! \n");
    printf("O valor de R1 = %i \n", r1);
    printf("O valor de R2 = %i \n", r2);
    printf("O valor de R3 = %i \n", r3);
    printf("O valor de R4 = %i \n", r4);
    return 0;
}
/*
Saida:
Operações Realizadas com Sucesso! 
O valor de R1 = 1 
O valor de R2 = -2 
O valor de R3 = 3 
O valor de R4 = 10 

*/
