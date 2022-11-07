/*11.Write a program to make addition, subtraction, multiplication and division
of two variables.*/
#include <stdio.h>

void main()
{
    int a,b,sub,mul,dive,add;
    
    printf("Enter Any Two NUmber:-");
    scanf("%d%d",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    dive=b/a;
    printf("The add is:-%d\n",add);
    printf("The sub is:-%d\n",sub);
    printf("The mul is:-%d\n",mul);
    printf("The div is:-%d\n",dive);
    
}