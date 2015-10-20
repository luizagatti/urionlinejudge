/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int raio;
    double result, pi = 3.14159;
    scanf("%d", &raio);
    result = (4.0/3)*pi*raio*raio*raio;

    printf("VOLUME = %.3lf\n", result);
}
