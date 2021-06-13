// Q.3: Write C program to display first n numbers in reverse order.

#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("\n enter n"); scanf("%d",&n); //i=1;
while(n!=0)
{
    printf("%d\t",n);
n--; }
getch();
}