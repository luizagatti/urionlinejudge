/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <stdio.h>

int main(){
    float le[6], aux;
    int cont = 0, i;

    for(i=0;i<6;i++){
        scanf("%f", &le[i]);
            if(le[i]>0.00){
                cont++;
            aux += le[i];
        }
    }
    printf("%d valores positivos\n", cont);
    printf("%.1f\n", aux/cont);
}
