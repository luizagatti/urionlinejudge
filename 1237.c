/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <stdio.h>

int calcula(char texto[100], char padrao[100]){
    int tam_texto, tam_padrao, maximo = 0, i, j, soma, k;
    tam_texto = strlen(texto);
    tam_padrao = strlen(padrao);

    for(i=0; i<tam_texto; i++){
        for(j=0; j<tam_padrao; j++){
            if(texto[i] == padrao[j]){
                soma = 0;
                for(k=0; k+i<tam_texto, k+j<tam_padrao; k++){
                    if(texto[k+i] != padrao[k+j])
                        break;
                    soma++;
                }
                if(soma>maximo)
                    maximo = soma;
            }
        }
    }
    printf("%d\n", maximo);
}

int main(){
    char texto[100], padrao[100];
    while(gets(texto)){
        gets(padrao);
        calcula(texto, padrao);
    }
    return 0;
}
