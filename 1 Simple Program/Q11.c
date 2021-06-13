#include<stdio.h>
#include<math.h>
int main()
{
  int num,sqr,cube,root;

  printf("Enter the Number:\t");
  scanf("%d",&num);

  sqr=num*num;
  printf("Square of the Number is:%d\n",sqr);

  cube=num*num*num;
  printf("Cube of the Number is:%d\n",cube);

  root= sqrt ((double)num);
  printf("Square root of the Number is:%d\n",root);
}
