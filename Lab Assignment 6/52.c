/*52. Write a program to find the exponential value of “12” using mathematical
function.*/

#include <stdio.h>
#include <math.h>
int main()
{
double numb, eVal;
printf(" Enter any Numeric Value :  ");
scanf("%lf", &numb);
eVal = exp(numb);
printf("\n Exponential Value of e power %lf = %lf ", numb, eVal);
printf("\n");
return 0;
}