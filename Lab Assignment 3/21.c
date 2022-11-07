/* 21.Write a program to check the number is less than 100 using if....else
statement. */

#include<stdio.h>
#include<conio.h>
void main()
{
    int Number;
    
    printf("Enter The Number Under ....");
    scanf("%d",&Number);
    if (Number<100)
    {
       printf("This Number is less then 100");
    }
    else
    {
        printf("This Number is Greter then 100");
    }
    
}