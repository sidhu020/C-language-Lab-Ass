/*13.Write a program to calculate & print area & circumference of circle.
(A = π ∗ r^2) (C = 2 ∗ πr)*/
#include <stdio.h>

void main()
{
    float r,a,c;
    printf("Enter The  Redius of Circlr:-");
    scanf("%f",&r);
    
    a=(22*r*r)/(7);
    printf("The Ans. is:-%f\n",a);

    c=(22*2*r)/(7);
    printf("The Ans. is:-%f",c);
    
}