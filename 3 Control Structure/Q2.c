//Q2) Write a C program to convert decimal no into binary.

#include <stdio.h>
#include<conio.h>
int main()
{
    int binaryno[10], no, i, j;
    clrscr();
    printf("\n please enter decimal no to convert ");
    scanf("%d", &no);
    i = 1;
    while (no != 0)
    {
        binaryno[i++] = no % 2;
        no = no / 2;
    }
    printf("\n equvalent octal no of given no is");
    for (j = i - 1; j > 0; j--)
        printf("%d", binaryno[j]);
    getch();
}
