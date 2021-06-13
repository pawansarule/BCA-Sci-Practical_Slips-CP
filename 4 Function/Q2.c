/* Q.2 : Write a recursive C function to calculate x^y. 
( Do not use standard libarary function.)*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int x, y;
    int pow;
    int recpower(int x, int y);
    clrscr();
    printf("\n enter x and y values from user:");
    scanf("%d%d", &x, &y);
    pow = recpower(x, y);
    printf("\n power of %d of %d is %d", x, y, pow);
    getch();
}
int recpower(int x, int y)
{
    if (y == 0)
        return 1;
    return x * recpower(x, y - 1);
}