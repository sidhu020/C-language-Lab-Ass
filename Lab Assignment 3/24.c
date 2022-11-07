/*24. Write a program to print grade of a student using if else ladder statement. */
#include <stdio.h>
#include <conio.h>
void main()
{
    int a;

    printf("Enter Your Per.  ");
    scanf("%d", &a);

    if (a < 35)
    {
        printf("Your Fail");
    }
    else if (a < 90)
    {
        printf("A+");
    }
    else if (a < 80)
    {
        printf("B");
    }
    else if (a < 70)
    {
        printf("C");
    }
    else if (a < 60)
    {
        printf("D");
    }

    else if (a < 50)
    {
        printf("E");
    }
    else
    {
        printf("your are pass");
    }
}