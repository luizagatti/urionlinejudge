#include <stdlib.h>
#include <stdio.h>
#include <string.h> //memset
#define maior(X,Y) ((X>Y) ? (X):(Y))

typedef struct Pilha{
	int horario[10001];
	int primeiro;
}Pilha;

void criaPilha(Pilha *p){
	p->primeiro = -1;
}

void Empilha(int i, Pilha *p){
	p->primeiro++;
	p->horario[p->primeiro] = i;
}

void Desempilha(Pilha *p){
	p->primeiro--;
}

int verificaVazia(Pilha p){
	return(p.primeiro == -1);
}

int verificaTopo(Pilha p) {
	return (p.horario[p.primeiro]);
}

int tamanhoPilha(Pilha p){
	return p.primeiro+1;
}

int main(){
	Pilha p;	criaPilha(&p);
	int N, K, i, C, S, j, vetorChegada[100001], vetorSaida[100001], naoCabe, ultimoT = 0;

	for(;;){
		scanf("%d %d", &N, &K);
		if(N == 0 && K == 0)
			return 0;
		
		memset(vetorChegada, 0, sizeof(vetorChegada));		memset(vetorSaida, 0, sizeof(vetorSaida));
		naoCabe = ultimoT = 0;

		for(i=1; i<=N; i++){
			scanf("%d %d", &C, &S);
			if(C > S)
				naoCabe = 1;
			vetorChegada[C] = vetorSaida[S] = i;
			ultimoT = maior(ultimoT, S+1);
		}

		while(!verificaVazia(p))
			Desempilha(&p);
	
		for(j=1;j<ultimoT;j++){
			if(vetorSaida[j])
				if(verificaVazia(p) || verificaTopo(p) != vetorSaida[j])
					break;
				else
					Desempilha(&p);

			if(vetorChegada[j])
				if(tamanhoPilha(p) < K)
					Empilha(vetorChegada[j], &p);
				else
					break;
		}

		if(naoCabe == 1 || j != ultimoT)
			printf("Nao\n");
		else
			printf("Sim\n");
	}
}
