/*Q.7 Accept two numbers m and n and display all prime numbers between m and n*/

#include <stdio.h>
#include <conio.h> 
void main()
{
    int m, n, i, flag;
    clrscr();
    printf("\n enter m and n values:");
    scanf("%d%d", &m, &n);
    printf("\n Prime no between %d and %d are:", m, n);
    while (m < n)
    {
        flag = 0;
        for (i = 2; i <= m / 2; ++i)
        {
            if (m % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("\n %d \t", m);
        ++m;
    }  
    getch();
}