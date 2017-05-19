#include <stdio.h>
#include <stdlib.h>
/*
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
*/
int verifica(int contador){
	if(contador < 0)	return contador*(-1);
	
	return contador;
}

void main(){
	int n, i, j, contem, d;
	long long int aux, aux2;
	long long int contador = 0;
	int difs;
	
	while(scanf("%d", &n)){ //printf("n: %d\n", n);
		getchar();
		if(n == 0)	break;
		long long int a[n];

		//printf("digite o vetor: \n");
		for(i=0; i<n; i++){
			scanf("%lld", &a[i]);
			//printf("%d: %d | ", i, a[i]);
		}

		for(i=0; i<n; i++){
			a[i+1] += a[i];
			contador += verifica(a[i]);
			a[i] = 0;

		}

		//qsort(a, n, sizeof(int), compare); //funciona
		/*for(i=0; i<n; i++){
			printf("%d: %d | ", i, a[i]);
		}*/
		/*
		for(i=0; i<n; i++){
			if(a[i] > 0){
				//printf("value em i%d: %ld\n", i, a[i]);
				for(j=0; j<n; j++){
					if(a[j] < 0 && a[i] != 0 && i != j){
						//printf("value em j%d: %ld\n", j, a[j]);
						d = distancia(i,j);
						//printf("distancia entre i:%d e j:%d = %d\n", i, j, d);
						aux = a[i]+a[j]; 
						
						difs = (a[i]+a[j]); 
						difs = labs(difs); //printf("difs: %d\n", difs);
						contador += d*difs;
						//contador = labs(contador);

						a[j] = 0; 
						a[i] = aux;

						/*a[i]+=(a[j]);	
						aux = (a[j]*(-1))*d;
						if(aux < 0)
							aux = aux*(-1);
						contador += aux;
						printf("contador: %ld\n-----------------------\n", contador);
						a[j]=0;
					}
				}
			} 
		}*/printf("%lld\n", contador);	contador = 0;
	}
}
