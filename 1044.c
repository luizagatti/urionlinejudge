/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <stdio.h>

void main(){
    int A, B;

    scanf("%d %d", &A, &B);

    if(A%B == 0 || B%A == 0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");
}
