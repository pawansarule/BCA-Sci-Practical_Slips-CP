/*Q.5 WA Menu driven program to perform the following operations on given number.
1.Display its factorial 2.Check even or odd 3.Exit*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int n, f, i, choice;
    clrscr();
    printf("\n enter any no");
    scanf("%d", &n);
    do
    {
        printf("\n Menu: ");
        printf("\n 1.Display its factorial");
        printf("\n 2.Check even or odd ");
        printf("\n 3: Exit");
        printf("\n Enter your Choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            for (f = 1, i = 1; i <= n; i++)
                f = f * i;
            printf("\n factorial of no=%d", f);
            break;
        case 2:
            if (n % 2 == 0)
                printf("\n %d is even no", n);
            else
                printf("\n %d is odd no", n);
            break;
        case 3:
            exit(0);
        } //switch
    } while (choice < 3);
    getch();
}