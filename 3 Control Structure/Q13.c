/*Q.13) Write a Menu-driven program to calculate the following: 1) Area of circle
2) Area of square
3) exit
*/

#include <stdio.h> 
#include<conio.h> 
void main()
{
    int r, side, n;
    float ans, pi = 3.142;
    clrscr();
    do
    {
        printf("\n Menu");
        printf("\n 1 :Area of circle");
        printf("\n 2: Area of square");
        printf("\n enter n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("\n Enter radius:");
            scanf("%d", &r);
            ans = 2 * pi * (r * r);
            printf("\n Area of circle=%f", ans);
            break;
        case 2:
            printf("\n Enter the side of square");
            scanf("%d", &side);
            ans = side * side;
            printf("\n Area of square is=%f", ans);
            break;
        case 3:
            exit(0);
        }
    } while (n != 3);
    getch();
}