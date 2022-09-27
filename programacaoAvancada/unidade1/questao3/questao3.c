Operações Ilegais:
int i, j, *p, *q;

p = i; // = > null
q = &j; // => Ok
p = &*&i; // => OK
i = (*&)j; // => Erro
i = *&j;// => null
i = *&*&j; // => null
q = *p; // => null
i = (*p)++ + *q; // => expressão ilegal 