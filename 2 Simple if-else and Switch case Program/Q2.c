#include <stdio.h>
int main()
{
    int num1, rem1;

    printf("Input an integer :\t");
    scanf("%d", &num1);
    rem1 = num1 % 2;
    if (rem1 == 0)
        printf("\n\n%d is an even integer\n\n", num1);
    else
        printf("\n\n%d is an odd integer\n\n", num1);
}
