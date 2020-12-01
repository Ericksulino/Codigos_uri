#include <stdio.h>
int main() {
  int i,cp=0,ci=0,cpo=0,cn=0,v[5];
  for (i = 0; i < 5; i++) {
    scanf("%d",&v[i]);
    if (v[i]%2==0) {
      cp++;
    }
    else {
      ci++;
    }
    if (v[i]>=0) {
      cpo++;
    }
    else{
      cn++;
    }
  }
  printf("%d valor(es) par(es)\n",cp);
  printf("%d valor(es) impar(es)\n",ci);
  printf("%d valor(es) positivo(s)\n",cpo);
  printf("%d valor(es) negativo(s)\n",cn);
  return 0;
}
