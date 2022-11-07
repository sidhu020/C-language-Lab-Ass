/* 23. Write a program to relate two integers using =, < or > symbols using if..else
ladder statement. */

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
        printf("%d<%d",num1,num2);
    }
    else if(num1>num2)
    {
         printf("%d>%d",num1,num2);
    }
else
{
      printf("%d=%d",num1,num2);
}
}