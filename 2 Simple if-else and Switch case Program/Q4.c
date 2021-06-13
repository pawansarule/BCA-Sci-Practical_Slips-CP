#include <stdio.h>
int main()
{
    double n1, n2, n3;
    printf("Enter three numbers: \t");
    scanf("%lf %lf %lf", &n1, &n2, &n3);


    if (n1 >= n2 && n1 >= n3)
        printf("\n\n%.2lf is the largest number.\n", n1);


    else if (n2 >= n1 && n2 >= n3)
        printf("\n\n%.2lf is the largest number.\n", n2);


    else
        printf("\n\n%.2lf is the largest number.\n", n3);

}
