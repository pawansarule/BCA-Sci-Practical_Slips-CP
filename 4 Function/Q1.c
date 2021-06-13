//Q.1: WA function to display Fibonacci series upto number n.

#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    void fibo(int n);
    clrscr();
    printf("\n Enter the series upto n:");
    scanf("%d", &n);
    fibo(n);
    getch();
}
void fibo(int n)
{
    int f1, f2, f3, i;
    f1 = 1;
    f2 = 1;
    printf("\t%d\t%d", f1, f2);
    for (i = 2; i < n; i++)
    {
        f3 = f1 + f2;
        printf("\t%d", f3);
        f1 = f2;
        f2 = f3;
    }
}