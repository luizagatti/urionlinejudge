/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <stdio.h>
#include <math.h>

void main()
{
    float tempo, velocidade, resultado;

    scanf("%f", &tempo);
    scanf("%f", &velocidade);

    resultado = velocidade*tempo/12.0;

    printf("%.3f\n", resultado);

}
