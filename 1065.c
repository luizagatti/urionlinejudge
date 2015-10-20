/*
Luiza de Almeida Gatti
All rights reserved
*/

#include <stdio.h>

int main(){
    int le[5];
    int cont = 0, i;

    for(i=0;i<5;i++){
        scanf("%d", &le[i]);
            if(le[i]%2==0)
                cont++;
    }
    printf("%d valores pares\n", cont);
}
