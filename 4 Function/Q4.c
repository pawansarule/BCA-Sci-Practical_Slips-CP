//Q.4): recursive function for fibonacci series. /*#include<stdio.h>

#include <conio.h>
void main()
{
    int fibo(int n);
    int n, i;
    clrscr();
    printf("\n enter how many nos");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("%d\t", fibo(i));
    getch();
}
int fibo(int no)
{
    int no1;
    if ((no == 1) || (no == 2))
        return 1;
    else
    {
        return fibo(no - 1) + fibo(no - 2);
    }
}