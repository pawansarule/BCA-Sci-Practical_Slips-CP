//Q.10) WAP to convert no into #include<stdio.h> 

#include<conio.h>
void main()
words
{
int no,rem,rev=0,rem1;
clrscr();
printf("\n Enter any no"); scanf("%d",&no);
while(no>0) 
rem=no%10; no=no/10; rev=(rev*10)+rem;
  }
    while(rev>0)
{
rem1= rev%10; rev=rev/10; switch(rem1) {
     case 1:printf("one  ");
          break;
     case 2:printf("two  ");
          break;
     case 3:printf("three  ");
          break;
     case 4:printf("four  ");
          break;
     case 5:printf("five  ");
          break;
     case 6:printf("six  ");
          break;
     case 7:printf("seven  ");
          break;
     case 8:printf("eight  ");
          break;
     case 9:printf("nine  ");
          break;
     case 0:printf("zero  ");
          break;
}//switch
 }//while
 getch();
