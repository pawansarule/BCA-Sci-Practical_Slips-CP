//Q.20):WAP to check given no ifs perfect no or not

#include <stdio.h>
#include <conio.h>
void main()
{
    int no, i, sum = 0;
    clrscr();
    printf("\n enter a number");
    scanf("%d", &no);
    //no1=no; //copy no another variable for(i=1;i<no;i++)
    {
        if (no % i == 0)
        {
            sum = sum + i; //printf("%d",i); }
        }
        if (sum == no)
            printf("\n %d is perfect no", no);
        else
            printf("\n %d is not perfect no", no);
        getch();
    }