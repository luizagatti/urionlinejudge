#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    int N, i, tamanhoFrase, k, alfabeto[122], quantidade = 0; //122 no alfabeto pq 122 é a maior letra, z
    char frase[2000];

    scanf("%d", &N);
    for(i=0; i<N; i++){
        getchar();
        quantidade = 0;

        scanf("%[^\n]s", frase);
        tamanhoFrase = strlen(frase);
        //printf("frase: %s.\n", frase);

        for(k=0; k<=122; k++) //a letra 'z' é 122
            alfabeto[k] = 0; //preencher com 0 um vetor que corresponde ao alfabeto

        for(k=0; k<=tamanhoFrase; k++)
            if(frase[k] >= 97 && frase[k] <= 122) //a letra 'a' é 97 e 'z' 122
                alfabeto[frase[k]] = 1; //a letra do alfabeto que foi encontrada na frase vira 1

        for(k=0; k<123; k++)
            if(alfabeto[k] == 1)
                quantidade++; //conta os 1 das letras do alfabeto

        //printf("%d qtd\n", quantidade);
        if(quantidade < 13)
            printf("frase mal elaborada");
        else if(quantidade > 25)
            printf("frase completa");
        else
            printf("frase quase completa");
        printf("\n");
    }
}

