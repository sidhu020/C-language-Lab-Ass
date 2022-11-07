

/*28.Write a program to add no until the user enters zero using do while loop.*/

#include<stdio.h>
int main()
{
    int num,sum=0;
    
    do
    {
        printf("Enter Any Number Enter 0 To Stop...\n");
        scanf("%d",&num);
        
        if(num==0)
        break;
        sum+=num;
    }
    
    while(1);
    printf("sum of number is %d",sum);
    
    
    return 0;
}