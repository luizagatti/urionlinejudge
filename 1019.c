/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <stdio.h>

void main(){
    int tempo, horas = 0, minutos = 0, segundos = 0;

    scanf("%d", &tempo);

    if (tempo >= 60 * 60){
        horas = tempo / (60 * 60);
        tempo %= (60 * 60);
    }

    if (tempo >= 60){
        minutos = tempo / 60;
        tempo %= 60;
    }

    segundos = tempo;

    printf("%d:%d:%d\n", horas, minutos, segundos);
}
