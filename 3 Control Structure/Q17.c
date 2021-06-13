/* Q 17):write a program to accept characters from the user the user and
count total alphabet and digit till the user enters '$'.*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int chcnt = 0, dcnt = 0;
    char ch, ch1;
    clrscr();
    printf("\n Enter any character or digit and for exit type $:");
    do
    {
        scanf("%c", &ch);
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            chcnt++;
        if (ch >= '0' && ch <= '9')
            dcnt++;
    } while (ch != '$');
    printf("\n total alphabet= %d , total digit=%d", chcnt, dcnt);
    getch();
}