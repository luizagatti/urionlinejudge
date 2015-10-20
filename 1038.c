/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <stdio.h>

void main(){
    int cod, qtd;
    float valor = 0.00, a = 4.00, b = 4.50, c = 5.00, d = 2.00, e = 1.50;

    scanf("%d %d", &cod, &qtd);

    if(cod == 1)
        valor = a*qtd;

    if(cod == 2)
        valor = b*qtd;

    if(cod == 3)
        valor = c*qtd;

    if(cod == 4)
        valor = d*qtd;

    if(cod == 5)
        valor = e*qtd;

    printf("Total: R$ %.2f\n", valor);
}
