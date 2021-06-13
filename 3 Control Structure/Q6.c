/*Q.6 : WAP to revrse given number */

#include <stdio.h>
#include <conio.h>
void main()
{
    int n, rem, rev = 0;
    printf("\n enter no");
    scanf("%d", &n);
    while (n > 0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    }
    printf("\n reverse no=%d", rev);
    getch();
}