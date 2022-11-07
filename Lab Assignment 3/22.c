/* 22.Write a program to check the number is maximum or minimum using
if....else statement. */

#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    printf("Enter the first Num:-");
    scanf("%d",&num1);
    printf("Enter the second Num:-");
    scanf("%d",&num2);

    if (num1<num2)
    {
        printf("%d is minimum Num",num1);
      
    }
    else if(num1>num2)
    {
        printf("%d is maximum Num",num2);
    }
else
{
    printf("%d is Equal Num",num1);
}
}