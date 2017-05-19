#include <stdio.h>

int main () {
    int N, A, B, totalA = 0, totalB = 0;

    while(scanf("%d\n", &N), N != 0){
        totalA = totalB = 0;
        while (N-- > 0) {
            scanf("%d %d\n", &A, &B);

            if (A > B)          totalA++;
            else if (B > A)     totalB++;
        }
        printf("%d %d\n", totalA, totalB);
    }
}
