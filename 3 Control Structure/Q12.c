// Q.12) WAP to check a number is Armstrong or not //ex: 371=3^3+7^3+1^3

#include <stdio.h>
#include <conio.h>
void main()
{
    int no, no1, sum = 0;
    int rem;
    printf("\n enter a number");
    scanf("%d", &no);
    no1 = no;
    while (no > 0)
    {
        rem = no % 10;
        sum = sum + (rem * rem * rem);
        no = no / 10;
        if (sum == no1)
            printf("\n %d is Armstrong ", sum);
        else
            printf("\n %d is not Armstrong", sum);
        getch();
    }