#include <stdio.h>

int fibonacciFacil(int N){
    long int numeros[45] = {0, 1};
    int i;

    for(i=2; i<N; i++) 
        numeros[i] = numeros[i-1] + numeros[i-2];

    for (i=0; i<N; i++) 
        printf("%ld%c", numeros[i], (i+1) == N ? '\n' : ' '); //OBS1
}

int main(){
    int N;
    scanf("%d", &N);
    fibonacciFacil(N);
}

