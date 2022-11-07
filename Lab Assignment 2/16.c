/*16.Write a program to calculate & print volume of Sphere.(A=4∗π∗r^2)(V=4/3∗π∗r^2)*/
#include <stdio.h>

void main()
{
    float r,h,a,b;
    printf("Enter The  Redius of Circlr:-");
    scanf("%f",&r);
    
    a=(4*22*r*r)/(7);
    printf("The Ans. is:-%f\n",a);
    
    b=(4*22*r*r)/(7*3);
    printf("The Ans. is:-%f\n",b);

    
}