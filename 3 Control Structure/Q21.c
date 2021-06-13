/*Q.21)WAP to count total no of digits,even digits and odd digits in givn no.
ex. in no=418 then total digit=3;even digits=2 and odd digits=1*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int tcnt = 0, ecnt = 0, ocnt = 0, n, rem;
    clrscr();
    printf("\n enter no");
    scanf("%d", &n);
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        if (rem % 2 == 0)
        {
            tcnt++;
            ecnt++;
        }
        else
        {
            tcnt++;
            ocnt++;
        }
    }
    printf("\n digit total count=%d, even count=%d, odd count =%d", tcnt, ecnt, ocnt);
    getch();
}