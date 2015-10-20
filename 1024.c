/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 1000

void main(){
    int N, i, tamanhoLinha, j, k;
    char linha[MAX], aux, inverte[1000];

    scanf("%d", &N);
    for(i=0; i<N; i++){
        getchar();
            scanf("%[^\n]s", linha);
            tamanhoLinha = strlen(linha);

            //3 operacoes na linha
            for(j=0; j<tamanhoLinha; j++){
                if(linha[j] >= 'a' && linha[j] <= 'z' || linha[j] >= 'A' && linha[j] <= 'Z') //somente caracteres que sejam letras
                    linha[j] = linha[j]+3; //deslocar 3 posicoes p esquerda

                if(j<(tamanhoLinha+1)/2) //tudo a partir da metade em diante deve ser deslocado uma posição para a esquerda na tabela ASCII.
                    linha[j] = linha[j]-1;

              }
            for(k=0; k<tamanhoLinha/2; k++){ //inverter a linha
                aux = linha[k];
                linha[k] = linha[tamanhoLinha-k-1];
                linha[tamanhoLinha-k-1] = aux;
            }
            printf("%s\n", linha);
    }
}
