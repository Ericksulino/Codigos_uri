#include <stdio.h>
int main() {
  int cd1,cd2,n1,n2;
  float v1,v2,vp;
  scanf("%d %d %f",&cd1,&n1,&v1);
  scanf("%d %d %f",&cd2,&n2,&v2);
  vp=n1*v1+n2*v2;
  printf("VALOR A PAGAR: R$ %.2f\n",vp);
  return 0;
}
