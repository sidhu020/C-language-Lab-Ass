/*46. Write a program to search whether a Substring is present in the main string
or not. 
( Main String: Navratri Function is over. Search String : Function )*/

#include<stdio.h>
void main()
{
    char str1[100]="Navratri Function";
    char str2[100]="Function";
    char found;
    found=strstr(str1,str2);
    if(found)
    {
        printf("%s is found in %s",str2,str1);
    }
    else
    {
        printf("not found");
    }
}