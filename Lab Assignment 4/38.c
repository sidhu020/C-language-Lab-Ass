/*38. Write a program to copy from string 1 “ This is Assignment-4 “ to string 2
using library function. */

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum size of string

int main()
{
    char text1[MAX_SIZE], text2[MAX_SIZE];

    /* Input original string from user */
    printf("Enter any string: ");
    gets(text1);

    /* Copy text1 using strcpy() */
    strcpy(text2, text1);

    printf("First string = %s\n", text1);
    

    return 0;
}