#include <stdio.h>

int main() {
    int notas[6]={10000,5000,2000,1000,500,200};
    int moedas[6]={100,50,25,10,5,1};
    double N;
    int centavos, i;

    scanf("%lf", &N);
    centavos = N*100; //transforma em centavos o valor recebido
    
    printf("NOTAS:\n");
    for(i=0;i<6;i++){
        printf("%d nota(s) de R$ %.2f\n", centavos/notas[i], (float) notas[i]/100);
        centavos = (centavos)%notas[i];
    }

    printf("MOEDAS:\n");
    for (i=0;i<6;i++){
        printf("%d moeda(s) de R$ %.2f\n", centavos/moedas[i], (float) moedas[i]/100);
        centavos = (centavos)%moedas[i];
    }
}
