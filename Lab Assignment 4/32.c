/* 32. Write a program to input year from the keyboard and check entered year is
leap year or not. */

#include<stdio.h>
#include<conio.h>
void main() 
{  
    int year; 
     
    printf("Enter a year: ");  
    scanf("%d", &year);  
    if(((year%4==0) && ((year%400==0) || (year%100!=0))))
     {
        printf("%d is a leap year", &year);  
    } 
    else {  
        printf("%d is not a leap year", &year);  
    }  
    getch();  
}