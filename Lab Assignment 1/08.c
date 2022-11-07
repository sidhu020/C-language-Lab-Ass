/*8. Write a program to calculate simple interest.*/

#include<stdio.h>
void main()
{
    float p,r,n,i;
    int q;
    float bill(float,int);
    printf("Enter The Value Of P:-");
    scanf("%f",&p);
    printf("Enter The Value Of R:-");
    scanf("%f",&r);
    printf("Enter The Value Of N:-");
    scanf("%f",&n);
    i=(p*r*n)/(100);
    printf("Amount=%d\n",i);
    
}

