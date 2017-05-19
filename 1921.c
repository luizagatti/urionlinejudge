#include <stdio.h>

int main(){
    double n, resposta;

    scanf("%lf", &n);
    resposta = ((n*(n-3))/2);

    printf("%.0lf\n", resposta);

}
