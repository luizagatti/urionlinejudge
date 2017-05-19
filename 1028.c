#include <stdio.h>

int calculaMDC(int F1, int F2){
  if(F2 == 0)
    return F1;
  
  else
    return calculaMDC(F2, F1 % F2);
  
}

int main(){
  int N, F1, F2, i;
  scanf("%d", &N);

  for(i=0; i<N; i++){
    scanf("%d %d", &F1, &F2);

    printf("%d\n", calculaMDC(F1, F2));
  }
}
