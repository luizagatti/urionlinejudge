#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	double A, B, C, X;
	scanf("%lf %lf %lf", &A, &B, &C);
	
	if(((B*B) - 4*A*C) < 0 || A == 0) 
		printf("Impossivel calcular\n");
	else {
		double R1, R2;
		X = sqrt((B*B)-4*A*C);
		R1 = ((-B+X)/(2*A));
		R2 = ((-B-X)/(2*A));
		printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
	}
}
