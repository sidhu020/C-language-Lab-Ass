/*47. Write a program to Combining n characters of one string into another string.
(   String 1 : Navratri function is over.
    String 2: only for the college students.
    n character is 32.)*/


#include<stdio.h>
#include<string.h>

void main()
{
    char a[]="Navratri function is over";
    char b[]="only for the college students";
    
    strchr(a,b);
    a[32]='10';
    printf("con str. is = %s",a);
    
}