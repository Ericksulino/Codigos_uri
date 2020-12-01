#include <stdio.h>
int main() {
  float n,c;
  int b,n100,n50,n20,n10,n5,n2;
  int n1,n050,n010,n05,n025,n01,e,m;
  scanf("%f",&n);
  b=n;
  c=n*100;
  e=c;
  m=e%100;

  n100=b/100;
  n50=(b%100)/50;
  n20=((b%100)%50)/20;
  n10=(((b%100)%50)%20)/10;
  n5=((((b%100)%50)%20)%10)/5;
  n2=(((((b%100)%50)%20)%10)%5)/2;
  n1=((((((b%100)%50)%20)%10)%5)%2)/1;

  n050=m/50;
  n025=(m%50)/25;
  n010=((m%50)%25)/10;
  n05=(((m%50)%25)%10)/5;
  n01=((((m%50)%25)%10)%5)/1;

  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n",n100);
  printf("%d nota(s) de R$ 50.00\n",n50);
  printf("%d nota(s) de R$ 20.00\n",n20);
  printf("%d nota(s) de R$ 10.00\n",n10);
  printf("%d nota(s) de R$ 5.00\n",n5);
  printf("%d nota(s) de R$ 2.00\n",n2);
  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n",n1);
  printf("%d moeda(s) de R$ 0.50\n",n050);
  printf("%d moeda(s) de R$ 0.25\n",n025);
  printf("%d moeda(s) de R$ 0.10\n",n010);
  printf("%d moeda(s) de R$ 0.05\n",n05);
  printf("%d moeda(s) de R$ 0.01\n",n01);
  return 0;
}
