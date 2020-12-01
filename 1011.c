#include <stdio.h>
int main() {
  double r,ve,pi;
  pi=3.14159;
  scanf("%lf",&r);
  ve=(4.0/3) * pi * (r*r*r);
  printf("VOLUME = %.3lf\n",ve);
  return 0;
}
