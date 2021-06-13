#include<stdio.h>
int main()
{
   char ch;
   printf("Please enter an alphabet : \t");
   scanf("%c", &ch);
   if('a' <=  ch && ch <= 'z')
   {
      printf("\n\nUpper case of %c is %c\n", ch, ch-32);
   }
   if('A' <=  ch && ch <= 'Z')
   {
      printf("\n\nLower case of %c is %c\n", ch, ch+32);
   }
   else
   {
      printf("\n\nEntered character %c is a special character\n", ch);
   }
}
