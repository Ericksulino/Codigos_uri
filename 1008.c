#include <stdio.h>
int main() {
  int num,ht;
  float si,sal;
  scanf("%d %d %f",&num,&ht,&si);
  sal=si*ht;
  printf("NUMBER = %d\nSALARY = U$ %.2f\n",num,sal);
  return 0;
}
