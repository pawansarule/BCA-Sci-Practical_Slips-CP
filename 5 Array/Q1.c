//Q1 WAP to accept 2 dimentional matrix and display transpose of matrix

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10][10], b[10][10], i, j;
    clrscr();
    printf("\n enter 2 Dimentional matrix");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);
    printf("\n Display matrix\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n Transpose of Matrix means element of the rows and columns interchanged\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    printf("\n Transpose of Matrix is:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\t%d", b[i][j]);
        }
        printf("\n");
    }
    getch();
}