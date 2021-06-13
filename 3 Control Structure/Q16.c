// Q.16) Accept nos m and n from the user and display all those nos. //between m and n which are divisible by 3 but not by 4. #include<stdio.h>

#include <conio.h>
void main()
{
    int m, n, i;
    clrscr();
    printf("\n enter the no m and n");
    scanf("%d%d", &m, &n);
    for (i = m; i <= n; i++)
    {
        if (i % 3 == 0 && i % 4 != 0)
            printf("\t %d", i);
    }
    getch();
}
