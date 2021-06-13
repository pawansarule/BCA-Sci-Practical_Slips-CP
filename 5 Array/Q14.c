// 14 WAP to dispaly addition of 2 matrices

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10][10], b[10][10], c[10][10];
    int i, j, r1, c1, r2, c2;
    clrscr();
    printf("\n enter row and column of matrix A");
    scanf("%d%d", &r1, &c1);
    printf("\n enter row and column of matrix B");
    scanf("%d%d", &r2, &c2);
    if ((r1 == r2) && (c1 == c2))
    {
        printf("\n enter Matrix A:");
        for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++)
                scanf("%d", &a[i][j]);
        printf("\n enter Matrix B:");
        for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++)
                scanf("%d", &b[i][j]);
        printf("\n Display Matrix A\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
                printf("\t%d", a[i][j]);
            printf("\n");
        }
        printf("\n Display Matrix B \n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
                printf("\t%d", b[i][j]);
            printf("\n");
        }
        printf("\n Addition of two Matrices:\n");
        for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++)
                c[i][j] = a[i][j] + b[i][j];
        printf("\n Display Matrix C\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
                printf("\t%d", c[i][j]);
            printf("\n");
        }
    }
    else
    {
        printf("\n Matrices cannot be subtracted");
    }
    getch();
}