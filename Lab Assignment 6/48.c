/*48. Write a program to enter the value and get the smallest and largest integer 2 value using mathematical function.*/


#include<stdio.h>

int main()
{
int minno, maxno,p,q,r,s;
printf("enter any four numbers: ");
scanf("%d %d %d %d",&p,&q,&r,&s);
minno=p;
maxno=p;
if(minno>q) //checking 1st and 2nd number
minno=q;
else if(maxno<q)
maxno=q;
if(minno>r) //checking 1st and 3rd number
minno=r;
else if(maxno<r)
maxno=r;
if(minno>s) //checking 1st and 4th number
minno=s;
else if(maxno<s)
maxno=s;
printf("Largest number from the given 4 numbers is: %d\n",maxno);
printf("Smallest numbers from the given 4 numbers is: %d",minno);
return 0;
}