#include <stdio.h>
int main()
{
    char ch;

    printf("Enter any character: \t");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("\n\n'%c' is uppercase alphabet.\n", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("\n\n'%c' is lowercase alphabet.\n", ch);
    }
    else
    {
        printf("\n\n'%c' is not an alphabet.\n", ch);
    }

    return 0;
}
