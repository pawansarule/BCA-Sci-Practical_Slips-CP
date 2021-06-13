/*Q 22): W a menu driven program to perform following operations on given no n:
   1: find sum of first n nos
   2: find sum of first and last digit of number n*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int no, n, rev, rem, lastno, firstno, sum, i;
    clrscr();
    printf("\n Menu :");
    printf("\n 1: find sum of first n nos");
    printf("\n 2: find sum of first and last digit of number n");
    printf("\n enter your option");
    scanf("%d", &n);
    switch (n)
    {
    case 1: //sum of first numbers
        printf("\n enter no");
        scanf("%d", &no);
        sum = 0;
        for (i = 1; i <= no; i++)
            sum = sum + i;
        printf("\n sum of first n number is=%d", sum);
        break;
    case 2: //sum of first and last number from given digit printf("\n enter no");
        scanf("%d", &no);
        sum = 0;
        lastno = no % 10;
        printf("%d", lastno);
        rev = 0;
        while (no > 0)
        {
            rem = no % 10;
            rev = (rev * 10) + rem;
            no = no / 10;
        }
        firstno = rev % 10;
        printf("\n%d", firstno);
        sum = firstno + lastno;
        printf("\n sum of first and last digit is=%d", sum);
        break;
    } //switch;
    getch();
}