// Q.8)WAP to accept a number and display the first 10 multiplies of the number.

#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, mul = 1;
    clrscr();
    printf("\n enter no n");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        mul = n * i;
        printf("%d\t", mul);
    }
    getch();
}