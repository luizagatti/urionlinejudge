#include <stdio.h>

int main(){
    double Q, D, P;
    int total;

    while(scanf("%lf %lf %lf\n", &Q, &D, &P) == 3){
        total = (Q * D)/(Q - P)*P*(- 1.0);

        if (total == 1)
            printf("1 pagina\n");
        
        else 
            printf("%d paginas\n", total);
        

    }
}

