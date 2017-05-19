#include <stdio.h>

void simplificacao(int N, int D){
  int maior = (N > D ? N : D), i;
  
  for(i=maior; i>0; i--){
    if(N%i==0 && D%i==0) 
      break;
  }  
  printf("%d/%d\n", N/i, D/i);
}

void soma(int N1, int D1, int N2, int D2){
  int N = N1*D2 + N2*D1, D = D1*D2;
  printf("%d/%d = ", N, D);

  simplificacao(N, D);  
}

void subtrai(int N1, int D1, int N2, int D2){
  int N = N1*D2 - N2*D1, D = D1*D2;
  printf("%d/%d = ", N, D);
  fflush(stdout);

  simplificacao(N, D);
}

void multiplica(int N1, int D1, int N2, int D2){
  int N = N1 * N2;
  int D = D1 * D2;
  
  printf("%d/%d = ", N, D);
  simplificacao(N, D);
}

void divide(int N1, int D1, int N2, int D2){
  int N = N1*D2, D = N2*D1;
  printf("%d/%d = ", N, D);

  simplificacao(N, D);
}

int main(){
  int N, i, N1, D1, N2, D2;
  char OP;
  
  scanf("%d", &N);
  
  for (i = 0; i<N; i++) {
    scanf("%d / %d %c %d / %d", &N1, &D1, &OP, &N2, &D2);
    
    if (OP == '+') 
      soma(N1, D1, N2, D2);
    else if (OP == '-') 
      subtrai(N1, D1, N2, D2);
    else if (OP == '*') 
      multiplica(N1, D1, N2, D2);
    else if (OP == '/') 
      divide(N1, D1, N2, D2);    
  }
}
