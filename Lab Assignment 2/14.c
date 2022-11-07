/*14.Write a program to calculate & print volume of cylinder.
(V = π ∗ r^2∗ h)*/
#include <stdio.h>

void main()
{
    float r,h,c;
    printf("Enter The  Redius of Circlr:-");
    scanf("%f",&r);
    printf("Enter The  Height  of Circlr:-");
    scanf("%f",&h);
    
    c=(22*r*r*h)/(7);
    printf("The Ans. is:-%f\n",c);

    
}