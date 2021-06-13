/* Q.3: Write a function that accepts a character as parameter
and returns 1 if it is an alphabet, 2 if it is a digit.
In main, accept characters till the user enters '$' and
Use the function to count the total number of alphabets and digits entered.*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int chcnt = 0, dcnt = 0, value;
    char ch;
    int count(char ch);
    clrscr();
    printf("\n Enter any character or digit and for exit type $:");
    do
    {
        scanf("%c", &ch);
        value = count(ch);
        if (value == 1)
            chcnt++;
        if (value == 2)
            dcnt++;
    } while (ch != '$');
    printf("\n total alphabet= %d , total digit=%d", chcnt, dcnt);
    getch();
}
int count(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        return (1);
    if (ch >= '0' && ch <= '9')
        return (2);
}