/*50. Write a program to find the reminder of any two value.*/

#include<stdio.h>
#include<math.h>

void main()
{
    double fiN;
    double secN;
    double n;
    
    printf("Enter The Firest Number:-");
    scanf("%lf",&fiN);
    printf("Enter The Second Number:-");
    scanf("%lf",&secN);
    printf("fmod(firstNumber,SecondNumber) is %lf \n",fmod(fiN,secN));
}