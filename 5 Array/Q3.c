/* Q.3 Write a function for search, which accept an array of n elements
and a key as parameter and return the position of key in the array
and -1 if the key is not found. */

#include <stdio.h>
#include <conio.h>
void main()
{
    int search(int a[10], int key, int n);
    int i, n, key, ans, a[10];
    clrscr();
    printf("\n accept n from user");
    scanf("%d", &n);

    scanf("%d", &a[i]);
    printf("%d\t", a[i]);
    printf("\n Accept Key element to be searched ");
    scanf("%d", &key);
    ans = search(a, key, n);
    if (ans != -1)
        printf("\n the position of the key=%d element in array=%d", key, ans);
    else
        printf("\n Key %d is not found in the array", key);
    getch();
}
}
int search(int a[10], int key, int n)
{
    int i, flag = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        return (i);
    else
        return (-1);