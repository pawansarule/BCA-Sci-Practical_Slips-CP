//Q.15: Write a c program Matrix Multiplication

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10][10], b[10][10], c[10][10];
    int i, j, k, r1, c1;
    clrscr();
    printf("\n enter row and column of matrix A");
    scanf("%d%d", &r1, &c1);
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
    printf("\n Multiplication of two Matrices:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            for (k = 0; k < r1; k++)
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
    printf("\n Display Matrix C\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
            printf("\t%d", c[i][j]);
        printf("\n");
    }
    getch();
}