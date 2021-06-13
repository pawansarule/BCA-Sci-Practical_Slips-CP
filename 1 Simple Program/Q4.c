 #include<stdio.h>

 int main()
 {
   int height,width,area;

   printf ("Enter the size of height:\t");
   scanf("%d",& height);
   printf ("Enter the size of width:\t");
   scanf("%d",& width);

   area = height * width;

   if(height==width)
   {
   printf ("It is square");
   printf ("\nArea of sqauare =%d\n\n",area);
   }
   else
   {
   printf ("It is rectangle");
   printf ("\nArea of rectangle =%d\n\n",area);
   }


 }
