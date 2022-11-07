/*53. Write a program to print string using puts and gets function.*/

#include<stdio.h>  
void main ()  
{  
    char s[30];  
    printf("Enter the string? ");  
    gets(s);  
    printf("You entered %s",s);  
} 