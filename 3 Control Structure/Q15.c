//Q.15) WAP to check if the accepted no is prime or not /*#include<stdio.h>

#include <conio.h>
void main()
{
    int n;
    int flag = 0, i;
    clrscr();
    printf("\n enter no");
    scanf("%d", &n);
    for (i = 2; i < n - 1; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("\n %d is prime no", n);
    else
        printf("\n %d is not prime no", n);
    getch();
}