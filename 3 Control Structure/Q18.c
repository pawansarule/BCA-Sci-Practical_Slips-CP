// Q.18): Wriet C program to convert decimal to octal number /*#include<stdio.h>

#include <conio.h>
void main()
{
    int octalno[10], no, i, j;
    clrscr();
    printf("\n please enter no you want to convert ");
    scanf("%d", &no);
    i = 1;
    while (no != 0)
    {
        octalno[i++] = no % 8;
        no = no / 8;
    }
    printf("\n equvalent octal no of given no is");
    for (j = i - 1; j > 0; j--)
        printf("%d", octalno[j]);
    getch();
}
