#include <stdio.h>

int main(){
    int N, R, i, voltaram[10001], quemVoltou; //N = quantos foram R = quantos voltaram

    for (i=0; i<10001; i++)
        voltaram[i] = 0;

    while(scanf("%d %d", &N, &R) == 2){
        if (N == R){
            for (i = 1; i <= R; i++)
                scanf("%d", &quemVoltou);
            printf("*"); //todos voltaram
        }

        else{
            for (i = 1; i<=R; i++){
                scanf("%d", &quemVoltou);
                voltaram[quemVoltou] = 1;
            }

            for (i=1; i<=N; i++){
                if(!voltaram[i])
                    printf("%d ", i);
                voltaram[i] = 0;
            }
        }
        printf("\n");
    }
}
