#include<stdio.h>
int main()
{
char ch;
  printf("Enter The charecter:\t");
  scanf("%c",&ch);
if(ch=='a'||'i'||'o'||'u'||'e')
  {
  printf("\n It is vowel");
  }
  else
  {
    printf("Enter Right vowel\n");
}
 printf("\nThe ASCII value of %c is: %d\n\n",ch,ch);

}
