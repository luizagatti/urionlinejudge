#include <stdio.h>
 
int main() {
    int entrada, x, y, i;
	scanf("%i", &entrada);
	for (i = 0; i < entrada; ++i){
		scanf("%i %i", &x, &y);		
		printf("%d cm2\n", (x * y)/2);
	}
	return 0;
}
