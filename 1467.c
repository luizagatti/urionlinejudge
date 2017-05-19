#include <stdio.h>

int main(){
    int A, B, C;

    while(scanf("%d %d %d\n", &A, &B, &C) != EOF){
        if(A==B && A==C)
            printf("*\n");
        
        else if(B==C)
            printf("A\n");
        
        else if(A==B)
            printf("C\n");
        
        else
            printf("B\n");
    }
}
