#include <stdlib.h>
#include <stdio.h>
 
int qt[300], peso[300], pesoTotal = 0, contabilizados = 0, adicionados[300][300];
 
int problemaMochila(int Pac){
    int i, j, aux[300][300], pesoTotal = 50, retorno;
    //printf("pac: %d\n", Pac);
    for(i=0; i<=Pac; i++){
        //printf("pac2: %d\n", Pac);
        for(j=0; j<=pesoTotal; j++){
            if(i == 0 || j == 0)
                aux[i][j] = 0;
 
            else if(peso[i] <= j){
                if(qt[i] + aux[i-1][j-peso[i]] >= aux[i-1][j]){
                    aux[i][j] = qt[i] + aux[i-1][j-peso[i]];
                    adicionados[i][j] = 1;
                }
 
                else{
                    aux[i][j] = aux[i-1][j];
                    adicionados[i][j] = -1;
                }
            }
 
            else{
                aux[i][j] = aux[i-1][j];
                adicionados[i][j] = -1;
            }
        }
    }
    retorno = aux[Pac][pesoTotal];
    //printf("retorno: %d\n\n", retorno);
    return retorno;
}
 
void verificaEscolhidos(int Pac){
    int tamanho = 50;
    while(Pac>=0){
        if(adicionados[Pac][tamanho] == 1){
            contabilizados++;
            pesoTotal += peso[Pac];
            tamanho -= peso[Pac];
            Pac--;
            //printf("pesoTotal verEsc: %d\n", pesoTotal);    printf("Pac verEsc: %d\n", Pac);
            //printf("tamanho verEsc: %d\n", tamanho);    printf("contabilizados verEsc: %d\n", contabilizados);
        }
        else{
            Pac--;
            //printf("Pac ELSE verEsc: %d\n", Pac);
        }
    }
}
 
void main(){
    int i,j, N, Pac, resto, qtdBrinquedos;
 
    scanf("%d",&N); getchar();  //printf("N: %d\n", N);
    for(i=0; i<N; i++){
        pesoTotal = 0;
        contabilizados = 0;
 
        scanf("%d",&Pac); getchar(); //printf("pac: %d\n", Pac);
        for(j=1; j<=Pac; j++)
            scanf("%d %d",&qt[j],&peso[j]);
 
        qtdBrinquedos = problemaMochila(Pac);
        verificaEscolhidos(Pac);
        resto = Pac-contabilizados;
 
        printf("%d brinquedos\nPeso: %d kg\nsobra(m) %d pacote(s)\n\n", qtdBrinquedos, pesoTotal, resto);
    }
}
