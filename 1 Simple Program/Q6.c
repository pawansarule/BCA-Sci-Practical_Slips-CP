#include<stdio.h>
int main()
{
  int a,b,c,d;
  float avg=0;

  printf("Enter the value of A,B,C,D variables:\t");
  scanf("%d%d%d%d",&a,&b,&c,&d);

  avg=(a+b+c+d)/4;

  printf ("\nAvarage=%f",avg);

}
