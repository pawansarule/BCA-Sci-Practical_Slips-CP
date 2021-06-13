/*Q.4 Write a function READ(int[],int) to accept 'n' integers in an array.
Display the array elements. Also find their sum and average*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int a[10], n;
    void read(int a[10], int n);
    void display(int a[10], int n);
    clrscr();
    printf("\n Enter n");
    scanf("%d", &n);
    read(a, n);
    display(a, n);
    getch();
}
void read(int a[10], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
void display(int a[10], int n)
{
    int i, sum = 0;
    float avg;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
        sum = sum + a[i];
    }
    avg = sum / n;
    printf("\n Sum= %d and Average =%f", sum, avg);
}