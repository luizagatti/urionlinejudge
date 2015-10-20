/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <stdio.h>

void main(){
    float N;

    scanf("%f", &N);

    if(N >= 0 && N <= 25.0000000)
        printf("Intervalo [0,25]\n");
    else if(N >= 25.00001 && N <= 50.0000000)
        printf("Intervalo (25,50]\n");
    else if(N >= 50.00001 && N <= 75.0000000)
        printf("Intervalo (50,75]\n");
    else if(N >= 75.00001 && N <= 100.0000000)
        printf("Intervalo (75,100]\n");
    else
        printf("Fora de intervalo\n");

}
