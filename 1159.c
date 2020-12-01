#include <stdio.h>
int main() {
  int x,i,s;
  while (1) {
    scanf("%d",&x);
    if (x==0) {
      break;
    }
    s=0;
    for (i = x; i < x+10; i++) {
      if (i%2==0) {
        s+=i;
      }
    }
    printf("%d\n",s);
  }
  return 0;
}
