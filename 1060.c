/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <stdio.h>

int main(){
    float le[6];
    int cont = 0, i;

    for(i=0;i<6;i++){
        scanf("%f", &le[i]);
            if(le[i]>0.00)
                cont++;
    }
    printf("%d valores positivos\n", cont);
}
