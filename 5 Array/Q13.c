//Q 13:Write user define function to sort an input array in descending order

#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
    int a[10], n;
    void descending(int a[10], int n);
    printf("\n enter n");
    scanf("%d", &n);
    printf("\n Enter the element in the array:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\n The original array is:");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    descending(a, n);
    printf("\n Descending Sorted array is:");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    ascending(a, n);
    printf("\n Ascending Sorted array is:");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    getch();
}
void descending(int a[10], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void ascending(int a[10], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}