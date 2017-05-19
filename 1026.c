#include <stdio.h>

int main () {
	unsigned int x, y; //mofiz;

	while (scanf("%u %u", &x, &y) != EOF)
	    //mofiz = x^y;
		printf("%u\n", x^y);
}
