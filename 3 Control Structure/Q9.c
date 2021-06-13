
/*Q.9: WA Menu driven program ,accept two numbers and perform following options:
       1: GCD of a number
       2: LCM of a number */

#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, gcd, prod, lcm, choice, ans;
    clrscr();
    printf("\n Enter any 2 nos");
    scanf("%d%d", &a, &b);
    prod = a * b;
    while (a != b)
        if (a > b)
            a = a - b;
        else
            b = b - a;
}
printf("\n Menu :");
printf("\n 1: GCD of a number ");
printf("\n 2: LCD of a number ");
printf("\n 3: Exit ");
printf("\n Enter your option:");
scanf("%d", &choice);
switch (choice)
{
case 1:
    printf("\n GCD is=%d", a);
    break;
case 2:
    ans = prod / a;
    printf("\n LCM is=%d", ans);
case 3:
    exit(0);
}
getch();
}
