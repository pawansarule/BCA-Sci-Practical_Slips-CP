/*Q.9 :Write user define function max_ele(int[][],int) to find maximum no of i/p matrix */

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10][10], maximum, max;
    int i, j, n;
    int max_ele(int a[10][10], int n);
    clrscr();
    printf("\n Enter matrix n x n");
    scanf("%d", &n);
    printf("\n enter Matrix A:");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("\n Display Matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    maximum = max_ele(a, n);
    printf("\n Maximum no=%d", maximum);
    getch();
}
int max_ele(int a[10][10], int n)
{
    int i, j, max;
    max = a[0][0];
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n; j++)
            if (max <= a[i][j])
                max = a[i][j];
    }
    return (max);
}