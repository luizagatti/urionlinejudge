#include <stdio.h>

int main () {
    int H1, M1, H2, M2, hora, minuto, minutosDanielaDorme;

    while(scanf("%d %d %d %d", &H1, &M1, &H2, &M2) && H1 != 0 || M1 != 0 || H2 != 0 || M2 != 0){
        hora = H2 - H1;
        minuto = M2 - M1;

        if(minuto<0) {
            minuto = 60 + minuto;
            hora -= 1;
        }

        if(hora<0) 
            hora = 24 + hora;

	minutosDanielaDorme = hora*60 + minuto;
        printf("%d\n", minutosDanielaDorme);
    }
}
