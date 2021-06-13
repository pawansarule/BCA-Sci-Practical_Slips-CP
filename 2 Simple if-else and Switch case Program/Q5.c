#include<stdio.h>
int main()
{
  	int number;

  	printf("\n Please Enter any Number to Check whether it is Divisible by 5 and 11 :\t ");
  	scanf("%d", &number);

  	if (( number % 5 == 0 ) && ( number % 11 == 0 ))
     	printf("\n Given number %d is Divisible by 5 and 11", number);

  	else
    	printf("\n Given number %d is Not Divisible by 5 and 11", number);


}
