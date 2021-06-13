// Q 19): Accept 2 nos x and y from user and perform the following operations:
//1: Equality 2:Less Than 3:Range 4: Swap

#include <stdio.h>
#include <conio.h> 
void main()
{
    int n, x, y, temp, i;
    char ch;
    clrscr();
    printf("\n enter the value of x and y");
    scanf("%d%d", &x, &y);
    do
    {
        printf("\n 1:Equality");
        printf("\n 2:Less Than");
        printf("\n 3:Range");
        printf("\n 4:Swap");
        printf("\n 5:Exit");
        printf("\n please enter your option");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("\nCheck if x is equal to y");
            //
            if (x == y)
                printf("\n x is equal to y");
            else
                printf("\n x is not equal to y");
            break;
        case 2:
            printf("\nCheck  if x is less than y");
            if (x < y)
                printf("\n x less than y");
            else
                printf("\n x is not less than y");
            break;
        case 3:
            printf("\n Display all numbers between x and y");
            for (i = x + 1; i < y; i++)
                printf("\t %d", i);
            break;
        case 4:
            printf("\n Interchange x and y");
            printf("\n Before swapping x=%d and y=%d ", x, y);
            temp = x;
            x = y;
            y = temp;
            printf("\nAfter swapping x=%d and y=%d ", x, y);
            break;
        case 5:
            exit(0);
        }
        printf("\n Do u Want to continue...");
        scanf("%c", &ch);
    } while (ch != 'n');
    getch();
}
