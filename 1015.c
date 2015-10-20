/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <stdio.h>
#include <math.h>

void main()
{
    float x1, y1, x2, y2, distancia, p1, p2, p3;

    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    p1 = ((x2-x1)*(x2-x1));
    p2 = ((y2-y1)*(y2-y1));
    p3 = p1+p2;
    distancia = sqrt(p3);

    printf("%.4f\n", distancia);
}
