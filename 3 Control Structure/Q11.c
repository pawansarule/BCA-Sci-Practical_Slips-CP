//Q11): slip 2 and 23: WAP to find result of nthe following serise: // (x-1)+ (x-2)+ (x-3)+......+(x-n)

#include <stdio.h>
#include <conio.h>
void main()
{
    int n, x, i, ans = 0;
    clrscr();
    printf("\n enter n");
    scanf("%d", &n);
    printf("\n enter the value of x");
    scanf("%d", &x);
    for (i = 1; i <= n; i++)
    {
        printf("(%d - %d)+\t ", x, i);
        ans = ans + (x - i);
    }
    printf("\n total serise answer =%d", ans);
    getch();
}
}
