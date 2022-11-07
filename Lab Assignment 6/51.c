/*51. Write a program to find the square root of value using mathematical function.*/

#include<stdio.h>
#include<math.h>

void main()
{
    double n,output;
    
    printf("Enter The Number:-");
    scanf("%lf",&n);
   output=sqrt(n);
    printf("Square Root of %lf = %lf \n",n,output);
}