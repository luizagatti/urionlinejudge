/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    double A, B, C, tri, cir, tra, qua, ret, pi = 3.14159;

    scanf("%lf %lf %lf", &A, &B, &C);

    tri = (A*C)/2;
    cir = pi*C*C;
    tra = (C*(A+B))/2;
    qua = B*B;
    ret = A*B;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", tri, cir, tra, qua, ret);
}
