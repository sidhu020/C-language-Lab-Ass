/* 31.Write a program to print factorial number using for loop.*/

#include <stdio.h>
int main()
{
 int n, i,factorial = 1; //varialbes declaration

printf("Enter a number: "); //asking your to enter a number
 scanf("%d",&n); //reading entered number

// showing error message, if the entered number is a negative number
 if (n < 0)
 printf("Error! Factorial of a negative number doesn't exist.");

else
 {
   for(i=1; i<=n; ++i) //finding factorial using for loop
   {
      factorial=factorial*i; // calculating factorial of a number
   }
   printf("Factorial of %d = %d", n, factorial);
 }

return 0;
}