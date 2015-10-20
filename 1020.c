/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <stdio.h>
//divisao e resto
void main(){
    int dias, ano, mes, dia;

    scanf("%d", &dias);

    ano = dias/365;
    mes = dias%365/30;
    dia = (dias%365)%30;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
}
