/* 39.Write a program to print first character or digit using getchar() function. */

#include <stdio.h>  
#include <conio.h>      
void main()  
{  
    char c;   
    printf ("\n Enter a character \n");  
    c = getchar(); // get a single character  
    printf(" You have passed ");  
    putchar(c); // print a single character using putchar  
  
    getch();  
} 