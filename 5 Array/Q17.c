//Q17): WAP to copy all elements of one array into another array using function.

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10];
    int i, n;
    void copy(int a[10], int n);
    clrscr();
    printf("\n Enter n nos");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    copy(a, n);
    getch();
}
void copy(int a[10], int n)
{
    int i, b[10];

    for (i = 0; i < n; i++)
        b[i] = a[i];

    for (i = 0; i < n; i++)
        printf("\t%d", b[i]);
}