/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int T, N, V, A, i, j, de, para, contador, p, q;
    int matriz[50][50];

    scanf("%d", &T); //numero total de casos de teste
    for(i=0;i<T;i++){
        scanf("%d", &N); //é onde vai começar e terminar
        scanf("%d %d", &V, &A); //quantidade de vertices e arestas
        contador = 0;

        //preencher a matriz com 0s
        for(p=0;p<50;p++)
            for(q=0;q<50;q++)
                matriz[p][q] = 0;

        //colocar 1s nos lugares certos
        for(j=0;j<A;j++){
            scanf("%d %d", &de, &para);
            matriz[de][para] = 1;
            matriz[para][de] = 1;
        }

        //percorrer a matriz contando os 1s
        for(p=0;p<50;p++)
            for(q=0;q<50;q++)
                if(matriz[p][q] == 1)
                    contador++;

        printf("%d\n", contador);
    }
}
