/*Q.6) WA function all_factors(int) which display all divisors of passed no */

#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    void all_factors(int n);
    clrscr();
    printf("\n Enter the no whose factors find:");
    scanf("%d", &n);
    printf("\n %d Factors are :\n");
    all_factors(n);
    getch();
}
void all_factors(int n)
{
    int i;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            printf("%d\t", i);
    }
}