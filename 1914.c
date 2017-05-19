#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int n, v1, v2, soma;
	char s1[101], s2[101];
	char c1[101], c2[101];

	scanf("%d\n", &n);

	while (n--) {

		scanf("%s %s %s %s\n", s1, c1, s2, c2);
		scanf("%d %d\n", &v1, &v2);

		soma = v1 + v2;

		if (soma % 2 == 1) {

			if (strcmp(c1, "IMPAR") == 0) {
				printf("%s\n", s1);
			} else {
				printf("%s\n", s2);
			}
		} else {
			if (strcmp(c1, "PAR") == 0) {
				printf("%s\n", s1);
			} else {
				printf("%s\n", s2);
			}
		}
	}

	
	return 0;
}
