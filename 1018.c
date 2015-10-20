/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <stdio.h>
//vou calcular pegar o resto da divisao anterior e dividir pelo valor da cedula atual
void main(){
    long int N;
    int aux, aux2;

    scanf("%ld", &N);

    printf("%ld\n", N);

    aux = N/100;
    printf("%d nota(s) de R$ 100,00\n", aux);

    aux = N%100;
    aux2 = aux/50;
    printf("%d nota(s) de R$ 50,00\n", aux2);

    aux = aux%50;
    aux2 = aux/20;
    printf("%d nota(s) de R$ 20,00\n", aux2);

    aux = aux%20;
    aux2 = aux/10;
    printf("%d nota(s) de R$ 10,00\n", aux2);

    aux = aux%10;
    aux2 = aux/5;
    printf("%d nota(s) de R$ 5,00\n", aux2);

    aux = aux%5;
    aux2 = aux/2;
    printf("%d nota(s) de R$ 2,00\n", aux2);

    aux = aux%2;
    aux2 = aux/1;
    printf("%d nota(s) de R$ 1,00\n", aux2);
}
