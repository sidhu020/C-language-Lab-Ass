/*7. Write a program using U.D.F function with argument and Return Value.*/

#include<stdio.h>
void main()
{
    float p,a;
    int q;
    float bill(float,int);
    printf("Prize:-");
    scanf("%f",&p);
    printf("Qty.:-");
    scanf("%f",&q);
    a=bill(p,q);
    printf("Amount=%f\n",a);
    
}
// UDF

float bill(float x,int y)
{
    float z;
    z=(float)x*y;
    return(z);
}
