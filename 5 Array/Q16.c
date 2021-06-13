// Q16.WAC to r:Write a C Program to find and square of each element of one matrix into other matrix.

#include <stdio.h> 
#include<conio.h> 
void main()
{
    int a[10][10], b[10][10], i, j;
    clrscr();
    
    printf("\n enter 3x3 matrix array\n:");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    printf("\n Display matrix array:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    printf("\n Square of element of matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            b[i][j] = (a[i][j] * a[i][j]);
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d\t", b[i][j]);
        printf("\n");
    }
    getch();
}