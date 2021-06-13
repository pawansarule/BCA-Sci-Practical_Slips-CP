/*Q.8:Write a user defined function is_perfect(int) to check given no is perfect no or not.*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int n, ans;
    int is_perfect(int);
    clrscr();
    printf("\n enter any no:");
    scanf("%d", &n);
    ans = is_perfect(n);
    if (ans == 1)
        printf("\n %d is perfect no", n);
    else
        printf("\n %d is not perfect no", n);
    getch();
}
int is_perfect(int n)
{
    int i, sum = 0;
    for (i = 1; i < n; i++)
        if (n % i == 0)
            sum = sum + i;
    if (sum == n)
        return (1);
    else
        return (0);
}