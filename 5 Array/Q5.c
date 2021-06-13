//Q5: WAP to find the intersection of the two integer arrays.

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10], b[10], c[10], i, j, n, m, cnt = 0;
    clrscr();
printf("\n enter how many element of A and B used n,m
respectively:");
scanf("%d%d",&n,&m);
printf("\n enter the element of A:"); for(i=0;i<n;i++)
     scanf("%d",&a[i]);
printf("\n enter the element of B:"); for(j=0;j<m;j++)
     scanf("%d",&b[j]);
printf("\n Intersection of element of A and B:"); for(i=0;i<n;i++)
for(j=0;j<m;j++) if(a[i]==b[j])
{
        c[cnt++] = a[i];
        break;
} for(i=0;i<cnt;i++) printf("%d\t",c[i]);
getch();
}