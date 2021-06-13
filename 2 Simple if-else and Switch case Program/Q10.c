#include<stdio.h> // include stdio.h
int main()
{
    int year;

    printf("Enter a year:\t ");
    scanf("%d", &year);

    if( (year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0) )
    {
        printf("\n\n%d is a leap year\n\n", year);
    }

    else
    {
        printf("\n\n%d is not a leap year\n\n", year);
    }

}
