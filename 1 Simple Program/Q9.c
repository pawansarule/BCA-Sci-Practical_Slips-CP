#include<stdio.h>

int main()
{
  int X,Y,rim;
  float exact;
  int integer;

  printf("\nEnter Two Integer:\t");
  scanf("%d%d",&X,&Y);

   integer=X/Y;
  printf("\nThe Value Of Integer Divison is: %d",integer);

   exact=X/Y;
  printf("\nThe Value Of Exact Divison is: %f",exact);

   rim=X%Y;
  printf("\nThe value Of Modules is: %d\n\n",rim);

}
