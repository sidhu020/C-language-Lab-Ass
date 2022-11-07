


/* 29.Write a program to print first 1 to 10 numbers using for loop.*/

#include<stdio.h>
int main()
{
   int i,a;
   
   printf("Enter An Number:-");
   scanf("%d",&a);
   printf("The First %d Natual Number are...\n",a);
   
   for(i=1;i<=a;i++)
   {
       printf("%d\n",i);
   }
}