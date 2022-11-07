/* 25.Write a program to print reverse number using while loop*/

#include<stdio.h>

void main()
{
    int n,rev=0,rem;
    printf("Enter An Int. Betwin 10 To 10..... :-");
    scanf("%d",&n);
    
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    printf("%d",rev);
}