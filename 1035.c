/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <stdio.h>

void main(){
    int A, B, C, D, soma1, soma2;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    soma1 = C + D;
    soma2 = A + B;

    if(B > C && D > A && soma1 > soma2 && C >= 0 && D >= 0 && A%2 == 0)
        printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");
}
