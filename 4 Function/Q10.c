/*Q 10): WA Menu driven program to perform the following operations on a character type variable without using standard library functions: 
i) Convert it to uppercase
ii) Convert it to lowercase
*/

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
void main()
{
    char ch;
    int n;
    printf("\n enter any charater :");
    ch = getchar();
    printf("\n Menu :");
    printf("\n 1: Convert to upper case:");
    printf("\n 2: Convert to lower case:");
    printf("\n enter the option:");
    scanf("%d", &n);
    switch (n)
    {
    case 2:
        if (ch >= 'A' && ch <= 'Z')
           printf("\n %c is in uppercase and convert into lowercase
%c",ch,ch+32);
break;
case 1: if(ch>='a'&& ch<='z')
printf("\n %c is in lowercase and convert into uppercase
%c",ch,ch-32);
break;
           default: printf("\n %c is not a character",ch);
    }
    getch();
}