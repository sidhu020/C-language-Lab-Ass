/*17.Write a program to read any three numbers and print its sum and average
value.*/
#include <stdio.h>

void main()
{
    int a,b,c,sum,avg;
    printf("Enter 3 numberd:-");
    scanf("%d%d%d",&a,&b,&c);
    
    sum=a+b+c;
    avg=sum/3;
    
    printf("Sum is %d And Avg is %d",sum,avg);
    
}