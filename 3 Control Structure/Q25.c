/*Q.25): Write a menu driven program to perform the following operations
on an integer array:
1) display the count and sum of even elements.
2) display the count and sum of odd elements. */ 

#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],ecnt=0,ocnt=0,esum=0,osum=0,i,n; clrscr();
printf("\n enter n");
scanf("%d",&n);
printf("\n Accept n element from user:"); 
for(i=0;i<n;i++)
   scanf("%d",&a[i]);
// calculate even and odd sum and count element 
for(i=0;i<n;i++)
{
if(a[i]%2==0) 
{
esum=esum+a[i];
ecnt++; 
}
else 
{
osum=osum+a[i];
ocnt++; 
}
}
printf("\n count=%d and sum=%d of even elements",ecnt,esum); 
printf("\n count=%d and sum=%d of odd elements",ocnt,osum);
getch(); 
}