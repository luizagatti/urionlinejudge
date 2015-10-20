/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int cod1, cod2, numero1, numero2;
    double unitario1, unitario2, final;

    scanf("%d %d %lf", &cod1, &numero1, &unitario1);
    scanf("%d %d %lf", &cod2, &numero2, &unitario2);

    final = (numero1*unitario1)+(numero2*unitario2);

    printf("VALOR A PAGAR: R$ %.2lf\n", final);
}
