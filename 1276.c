/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void main(){
    char frase[51];
    char verifica[27];
    char alfabeto[26] = "abcdefghijklmnopqrstuvwxyz";
    char inicio, fim;
    int i, j, l, k, p;
    int set = 0;
    int tam, saida = 300;
    int tamVer = strlen(verifica);


    memset(verifica, 0, 26*sizeof(char));
    for(i=0; i<26; i++)
        verifica[i] = '0';
    verifica[26] =  '\0';

    while(gets(frase)){
    tam = strlen(frase);
        for(j=0; j<tam; j++){
            for(k=0; k<26; k++){
                if(frase[j] == alfabeto[k]){
                    verifica[k] = '1';
                }
            }
        }

        for(l=0; l<saida; l++){
            if(verifica[l] == '1'){
                inicio = alfabeto[l];
                fim = alfabeto[l];

                while(verifica[l] == '1'){
                    fim = alfabeto[l];
                    l++;
                }
                //printf("inicio %c\n", inicio);
                //printf("fim %c\n", fim);

                if(set == 0){
                    printf("%c:%c", inicio, fim);
                    set = 1;
                }
                else
                    printf(", %c:%c", inicio, fim);
            }
        }
        printf("\n");
        for(i=0; i<26; i++)
            verifica[i] = '0';
        verifica[26] =  '\0';
        set = 0;
    }
}
