


/*45. Write a program to compare two strings which are
1. BCA College
2. Student*/

#include<stdio.h>
void main()
{
    char str1[100]="BCA College";
    char str2[100]="Student Student";
    int i;
    
    i=strcmp(str1,str2);
    if(i<0)
    {
        printf("BCA College<Student");
    }
    else if(i==0)
    {
        printf("BCA College=Student");
    }
    else
    {
        printf("BCA College>Student");
    }
}