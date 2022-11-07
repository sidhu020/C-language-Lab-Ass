
/*27.Write a program to print first 10 numbers multiplication with 5 using do
while loop.*/

#include<stdio.h>
int main()
{
    int i=1,a;
    
    printf("Enter an number:-");
    scanf("%d",&a);
    do
    {
        printf("%d * %d = %d\n",a,i,a*i);
        i++;
    }while(i<=10);
    return 0;
}