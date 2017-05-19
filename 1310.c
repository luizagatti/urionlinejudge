#include <stdio.h>
#define MAX(A,B) ((A > B) ? (A) : (B))

int calculo(int *lucro, int qtdDias, int custoDia){
    int max = 0;
    int maximo = 0;
    int dia;

    for (dia=0; dia<qtdDias; dia++){
        int lucroF = lucro[dia]-custoDia;

        maximo = MAX(0, maximo+lucroF);
        max = MAX(max, maximo);
    }
    return max;
}

int main(){
    int N, custoPorDia;
    while (scanf("%d %d\n", &N, &custoPorDia) != EOF) {
        int receita[50], i;

        for (i = 0; i < N; i++) {
            scanf("%d\n", receita + i);
        }
        printf("%d\n", calculo(receita, N, custoPorDia));
    }
}

