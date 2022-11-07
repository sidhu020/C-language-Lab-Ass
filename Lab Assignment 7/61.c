/*61.Write a program to add 20 Odd numbers. 1+3+5+.....39.*/

#include <stdio.h>
 
void main()
{
 int i,last;
 printf("Enter The Last Number : ");
 scanf("%d",&last);
 //For Loop
 //Code For Even Number List
 printf("\nEven Number List :\n ");
 
 for(i=2; i<=last; i=i+2){
   printf(" %d",i);
 }
 //Code For Odd Number List
 printf("\nOdd Number List :\n ");
 for(i=1; i<=last; i=i+2){
   printf(" %d",i);
 }
}