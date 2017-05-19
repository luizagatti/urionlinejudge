#include <stdio.h>

int main (){
  double N1, N2, N3, N4;
  double Media;
  
  scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
  Media = N1*0.2 + N2*0.3 + N3*0.4 + N4*0.1;
  
  printf("Media: %.1f\n", Media);
  
  if(Media < 5.0)	printf("Aluno reprovado.\n");

  else if (Media < 7.0) {
    printf("Aluno em exame.\n");
    fflush(stdout);
    double notaExame, mediaF;
    scanf("%lf", &notaExame);
    printf("Nota do exame: %.1f\n", notaExame);
    
    mediaF = Media*0.5 + notaExame*0.5;
    
    if (mediaF < 5.0) {
      printf("Aluno reprovado.\n");
      printf("Media final: %.1f\n", mediaF);
    }
    else {
      printf("Aluno aprovado.\n");
      printf("Media final: %.1f\n", mediaF);
    }

  }
  else	printf("Aluno aprovado.\n");
}
