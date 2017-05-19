#include <stdio.h>

int main(){
    int L, R, totalFilhos;

    while (scanf("%d %d", &L, &R) && L!=0 || R!=0){
    	if(L>5 || R>5)	return 0;
    	else{
    	    totalFilhos = L+R;
    	    printf("%d\n", totalFilhos);
        }
    }
}
