#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: \t");
    scanf("%d", &num);

    (num % 2 == 0) ?
    printf("\n\n%d is even.\n\n", num) :
    printf("\n\n%d is odd.\n\n", num);
    return 0;
}
