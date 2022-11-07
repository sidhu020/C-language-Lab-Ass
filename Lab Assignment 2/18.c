
/*18.Write a program to check the number is odd using if statement.*/
#include <stdio.h>

void main()
{
    int num=0;
    printf("Enter Num:-");
    scanf("%d",&num);
    
    if(num%2 == 0)
    printf("%d is even number",num);
    else
    printf("%d is odd number",num);
    
}