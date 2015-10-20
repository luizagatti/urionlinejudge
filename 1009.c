/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char vendedor[100];
    double salarioFixo, montante, final;

    scanf("%s", vendedor);
    scanf("%lf", &salarioFixo);
    scanf("%lf", &montante);

    final = (montante*0.15)+salarioFixo;

    printf("TOTAL = R$ %.2lf\n", final);
}
