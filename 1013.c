/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int A, B, C, MaiorAB, maior;
    scanf("%d %d %d", &A, &B, &C);
    //The C library function int abs(int x) returns the absolute value of int x.
    MaiorAB = (A+B+abs(A-B))/2;
    maior = (MaiorAB+C+abs(MaiorAB-C))/2;

    printf("%d eh o maior\n", maior);
}
