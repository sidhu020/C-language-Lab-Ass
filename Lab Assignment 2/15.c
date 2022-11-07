/*15.Write a program to calculate & print volume of cone.(V =1/3∗ π ∗ r^2∗ h)*/
#include <stdio.h>

void main()
{
    float r,h,c;
    printf("Enter The  Redius of Circlr:-");
    scanf("%f",&r);
    printf("Enter The  Height  of Circlr:-");
    scanf("%f",&h);
    
    c=(1*22*r*r*h)/(7*3);
    printf("The Ans. is:-%f\n",c);

    
}