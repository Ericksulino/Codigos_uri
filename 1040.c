#include <stdio.h>
int main() {
  double n1,n2,n3,n4,ne,med,medex;
  scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
  med=(n1*2+n2*3+n3*4+n4*1)/(2+3+4+1);
  printf("Media: %.1lf\n",med);
  if (med>=7.0) {
    printf("Aluno aprovado.\n");
  }
  if (med<5.0) {
    printf("Aluno reprovado.\n");
  }
  else if (med>=5 && med<=6.9) {
    printf("Aluno em exame.\n");
    printf("Nota do exame: \n");
    scanf("%lf",&ne);
    medex=(med+ne)/2;
    if (medex>=5.0) {
      printf("Aluno reprovado.\n");
    }
    if(medex<=4.9){
      printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1lf\n",medex);
  }
  return 0;
}
