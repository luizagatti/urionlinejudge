#include <stdio.h>

int main(){
	int i, X, maiorValor = -1, posicao;
	for (i=1; i<101; ++i){
		scanf("%d", &X);
		if(maiorValor < X)
			maiorValor = X, posicao = i;
	}
	printf("%d\n%d\n", maiorValor, posicao);
}
