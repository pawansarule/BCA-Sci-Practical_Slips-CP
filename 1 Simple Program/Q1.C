
#include<stdio.h>
int main()
{
  int n;
  printf("\n Enter any number:\t");
  scanf("%d",&n);

  (n>0)?printf("\n Number is positive\n\n"):
  (n==0)?printf("\n Number is zero value\n\n"):
  printf("\n Number is negative\n\n");

}
