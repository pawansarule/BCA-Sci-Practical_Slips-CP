#include<stdio.h>

int main()
{
    int num;

    printf("Enter an number\n");
    scanf("%d", &num);

    (num > 0) ?
    (printf("%d is positive\n", num)) :
    ( (num < 0) ?
      (printf("%d is Negative\n", num)):
      (printf("%d is Zero\n", num))
    );

}
