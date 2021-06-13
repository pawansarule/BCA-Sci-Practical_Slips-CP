//Q.8 :WAP to display the sum of its both diagonal elements and display sum.

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10][10], b[10][10], i, j, n, sum = 0, sumo = 0;
    clrscr();
    printf("\n enter n ");
    scanf("%d", &n);
    printf("\n enter matrix");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("\n Display matrix\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n Calculate diagonal sum of the Matrix\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
                sum = sum + a[i][j];
            if ((i + j) == (n - 1))
        }
    }
    printf("\n sum of diagonal=%d and second diagonal sum=%d", sum, sumo);
    getch();
}