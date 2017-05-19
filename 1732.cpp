#include <iostream>
#include <cstdio>
using namespace std;

int N, a, b, c, i;
void abelha(){
	while(true){
		if(N == 1) 
			return;
		c++, b++, N--;

		if(N == 1)
			return;

		for(i=0; i<(c-1); i++){
			a--;
			b++;
			if(--N == 1)
				return;
		}
		
		for(i=0; i<c; i++){
			a--;
			if(--N == 1) 
				return;
		}
		
		for(i=0; i<c; i++){
			b--;
			if(--N == 1) 
				return;
		}
		
		for(i=0; i<c; i++){
			a++;
			b--;
			if(--N == 1) 
				return;
		}
		
		for(i=0; i<c; i++){
			a++;
			if(--N == 1) 
				return;
		}
		
		for(i=0; i<c; i++){
			b++;
			if(--N == 1) 
				return;
		}
	}
}

int main(int argc, char const *argv[]){
	while(scanf("%d", &N) == 1){
		a = b = c = 0;
		abelha();
		printf("%d %d\n", a, b);
	}
}
