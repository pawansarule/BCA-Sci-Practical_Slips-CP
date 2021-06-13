//Q12: WAP to find maximum and minimum no from matrix .

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10][10], max, min;
    int i, j;
    clrscr();
    printf("\n enter Matrix A:");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    max = a[0][0];
    printf("\n Find Maximum no from Matrix A\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            if (max <= a[i][j])
                max = a[i][j];
    }
    min = a[0][0];
    printf("\n Find Minimum no from Matrix A\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            if (min >= a[i][j])
                min = a[i][j];
    }
    printf("\n Maximum no=%d", max);
    printf("\n Minimum no=%d", min);
    getch();
}