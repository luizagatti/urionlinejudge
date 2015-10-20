/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

void main(){
    int vetor[3], i, j, a, b, c, aux;

    scanf("%d %d %d", &a, &b, &c);

    vetor[0] = a;
    vetor[1] = b;
    vetor[2] = c;

    qsort(vetor, 3, sizeof(int), compare);

    printf("%d\n%d\n%d\n", vetor[0], vetor[1], vetor[2]);

    printf("\n%d\n%d\n%d\n", a, b, c);
}
