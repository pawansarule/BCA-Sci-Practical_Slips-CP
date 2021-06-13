/*Q.7: WA function void swap(int *,int *)
to interchange the values of two variables and display the values of variables before and after swapping*/

#include <stdio.h>
#include <conio.h>
void main()
{
    void swap(int *a,int
int a,b;
clrscr();
printf("\n enter any 2 nos");
scanf("%d%d",&a,&b);
printf("\n Before swapping values are a=%d and b=%d",a,b); swap(&a,&b); //pass the address of a and b
printf("\n After swapping values are a=%d and b=%d",a,b);
getch();
}
void swap(int *x, int *y)
{
    int *temp;
    *temp = *x;
    *y = *temp;
}