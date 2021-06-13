/* Q24): display the pattern ABCDE
ABCD
ABC
AB
A
*/

#include <stdio.h>
#include <conio.h> 
void main()
{
    int n, i, j;
    char ch;
    clrscr();
    printf("\n enter how many rows");
    scanf("%d", &n);
    for (i = n; i > 0; i--)
    {
        ch = 'A';
        for (j = 1; j <= i; j++)
        {
            printf("\t%c", ch);
            ch++;
        }
        printf("\n");
    }
    getch();
}
