#include <stdlib.h>
#include <stdio.h>

void main(){
	int N, M, i, j, digitos, aux, n[10], qtd, num, k;

	while(scanf("%d %d", &N, &M)==2){
		qtd = 0;
		for(i=N; i<=M; i++){
			aux = digitos = 0;
			num = i;
			while(num != 0){
				n[digitos] = num%10;
				num /= 10;
				digitos++;
			}

			for(j=0; j<digitos; j++)
				for(k=j+1; k<digitos; k++)
					if(n[j] == n[k])
						aux = 1;
                            
			if(aux == 0)
				qtd++;
		}
		printf("%d\n", qtd);
	}
}
