#include <stdio.h>
#include <stdlib.h>

int comparar(const void *A, const void *B) {
    double diferenca = *(double*)A - *(double*)B;

    if (diferenca < 0)		return 1;
    else if (diferenca > 0)     return -1;
    else 		        return 0;
}

int main (){
    double vetor[3];
    int i;

    for(i = 0; i < 3; i++) 
        scanf("%lf", &vetor[i]);

    qsort(vetor, 3, sizeof(double), comparar);

    double A = vetor[0], B = vetor[1], C = vetor[2];

    if(A >= B + C)	printf("NAO FORMA TRIANGULO\n");

    else {
        double  A2 = A*A, B2 = B*B, C2 = C*C;

        if(A2 == B2+C2) 	    printf("TRIANGULO RETANGULO\n");

        else if(A2 > B2+C2) 	printf("TRIANGULO OBTUSANGULO\n");
        
        else		            printf("TRIANGULO ACUTANGULO\n");
        

        if(A==B && B==C)        printf("TRIANGULO EQUILATERO\n");
        
        else if(A==B || B==C)   printf("TRIANGULO ISOSCELES\n");
        
    }
    return 0;
}


