
/* 26.Write a program to test multiple conditions using logical operator inside
while loop.*/

#include<stdio.h>

void main()
{
    int n;
    printf("Enter An Int. Betwin 5 To 20 :-");
    scanf("%d",&n);
    
    while((n==0)&&(5>n)&&(20<n))
    {
        printf("Not A valid input");
        printf("ReEnter");
        scanf("%d",&n);
    }

}