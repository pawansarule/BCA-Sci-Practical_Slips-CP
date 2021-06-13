// slip 18: WA user define function count_zero((int[][],int) which will
// count all zero's of input matrix.

#include <stdio.h>
#include <conio.h> void main()
{
    int a[10][10], cnt, i, cnt1, j;
    int count_zero(int a[10][10], int cnt);
    clrscr();

    printf("\n enter 3 Dimentional Matrix\n:");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    printf("\n 3 Dimentional Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    cnt1 = count_zero(a, cnt);
    printf("\n Total zero's in matrix:=%d", cnt1);
    getch();
}
int count_zero(int a[10][10], int cnt)
{
    int i, j;
    cnt = 0;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == 0)
                cnt++;
        }
    return (cnt);
}