#include <stdio.h>
#include <stdlib.h>

int fibonacci[40], resultado[40];

int calculaFibonacci(int X){ //implementacao do fibonacci
    resultado[0] = 0; resultado[1] = 0; resultado[2] = 2;
    if (X <= 1)
        fibonacci[X] = X;

    else{
        fibonacci[X] = calculaFibonacci(X - 1) + calculaFibonacci(X - 2);
        if (X >= 3)
            resultado[X] = resultado[X - 1] + resultado[X - 2] + 2;
    }
    if (fibonacci[X] != -1)
        return fibonacci[X];

    return fibonacci[X];
}

void main(){
    int N, X, i, j, num_calls;

    for(i=0; i<=40; i++){ //preencher os vetores com -1
        fibonacci[i] = -1;      resultado[i] = -1;
    }

    scanf("%d", &N);    getchar();
    for(j=N; j>0; j--){
        scanf("%d", &X);    getchar();
        num_calls = calculaFibonacci(X);
        printf("fib(%d) = %d calls = %d\n", X, resultado[X], num_calls);
    }
}

