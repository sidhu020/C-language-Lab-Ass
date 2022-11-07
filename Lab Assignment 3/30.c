/* 30.Write a program to print sum of 50 natural numbers using for loop.*/

#include<stdio.h>
int main()
{
   int num,sum=0,a;
   
   printf("Enter An Number:-");
   scanf("%d",&a);

   
   for(num=1;num<=a;num++)
   {
       sum=num+sum;}
       printf("%d\n",sum);
   
}