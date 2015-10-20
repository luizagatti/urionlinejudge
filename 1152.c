/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <stdlib.h>
#include <stdio.h>

typedef struct grafo{
    int x;
    int y;
    int z;
}grafo;

int quickSort(grafo *grafinho, int primeiro, int ultimo){ //ordenação adaptada de um TP que fiz em aeds2 em 2014/2
    if(primeiro < ultimo){
        int aux, contador;
        grafo pivo;

        aux = primeiro;
        pivo = grafinho[primeiro];

        for(contador=primeiro+1; contador<=ultimo; contador++)
            if(grafinho[contador].z < pivo.z){
                grafinho[aux] = grafinho[contador];
                grafinho[contador] = grafinho[aux+1];
                aux++;
            }

        grafinho[aux] = pivo;
        quickSort(grafinho, primeiro, aux-1);
        quickSort(grafinho, aux+1, ultimo);
    }
}

int main(){
    int m, n, economia, i, j, auxSoma1 = 0, auxSoma2 = 0, aux;

    while(scanf("%d %d", &m, &n)){ //while infinito, só para com o break
        if(m == 0 && n == 0) //A entrada termina com m=n=0
            break;

        //preciso zerar essas variaveis a cada novo teste:
        auxSoma1 = 0;
        auxSoma2 = 0;

        //auxiliares para calculo da economia
        int vet[m+1]; //vetor auxiliar
        grafo grafinho[n+1]; //onde vou salvar os dados recebidos

        for(i=0; i<m; i++) //preencher vet com os valores de 0 a m
            vet[i] = i;

        for (i=0; i<n; i++){ //a estrada bidirecional entre x e y com z metros
            scanf("%d %d %d", &grafinho[i].x, &grafinho[i].y, &grafinho[i].z);
            auxSoma1 += grafinho[i].z; //armazenar a soma dos z para depois subtrair
        }

        quickSort(grafinho, 0, n-1); //preciso do grafinho ordenado para calcular

        for(i=0; i<n; i++){ //otimizacao do grafinho
            if(vet[grafinho[i].x] != vet[grafinho[i].y]){
                auxSoma2 += grafinho[i].z; //armazenar a soma dos menores para subtrair de auxSoma1
                aux = vet[grafinho[i].y];
                for(j=0; j<m; j++)
                    if(vet[j] == aux)
                        vet[j] = vet[grafinho[i].x];
            }
        }

        economia = auxSoma1 - auxSoma2; //calcular a economia usando o total de z recebido menos o total de z dps de otimizado
        printf("%d\n", economia);
    }
}
