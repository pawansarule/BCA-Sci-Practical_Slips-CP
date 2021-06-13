/* Q23): display the pattern
*
** 
***
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
    for (i = 0; i < n; i++)
    {
        ch = '*';
        for (j = 0; j <= i; j++)
        {
            printf("\t%c", ch);
        }
        printf("\n");
    }
    getch();
}
