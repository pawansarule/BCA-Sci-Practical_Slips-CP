/* Q.5: WA Function swap(int,int)
that will interchange the value of given 2 integers. 
Print the valur before and after */

#include <stdio.h>
#include <conio.h>
void main()
{
    void swap(int a, int b);
    clrscr();
    printf("\n enter any 2 nos");
    scanf("%d%d", &a, &b);
    printf("\n Before swapping values are a=%d and b=%d", a, b);
    swap(a, b);
    printf("\n After swapping values are a=%d and b=%d", a, b);
    getch();
}
void swap(int x, int y)
{
    int temp;
    temp = x;
    y = temp;
}