/*40. Write a program to enter a string and print it reversed. */

#include <stdio.h>
#include <string.h>
int main() 
{ 
  // declare the size of character string 
char str[100];

printf("Enter string:-");
scanf("%s",&str);

// use strrev() function to reverse a string 
printf ("After the reverse of a string: %s ", strrev(str)); 
return 0;
}
