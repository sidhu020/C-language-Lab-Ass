/*43. Write a program to combine two given string.
(String 1: T.N.Rao College
String 2: BCA Department) */


#include <stdio.h>
#include <string.h>
  
void main()
{
  
    char s[] = "Geeks";
    char s1[] = "forGeeks";
  
    // concatenating the string
    strcat(s, s1);
    printf("Final string is: %s ", s);
    return 0;
}