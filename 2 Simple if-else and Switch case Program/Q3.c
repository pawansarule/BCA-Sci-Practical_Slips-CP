#include <stdio.h>
int main()
{

	char ch;
  printf("Enter given character:\t ");
	scanf("%c",&ch);

  if(ch >= 97 && ch <= 122)
		printf("\n'%c' is Lower case alphabet.\n", ch);
	else if(ch >= 65 && ch <= 90)
  		printf("\n'%c' is Upper case alphabet.\n", ch);
	else if(ch >= 48 && ch <= 57)
		printf("\n'%c' is digit.\n", ch);
	else
		printf("\n'%c' is special character.\n", ch);

}
