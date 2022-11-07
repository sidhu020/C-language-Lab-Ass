/* 42. Write a program to copy string from source string to destination string. */
#include <stdio.h>
#include <string.h>
void main()
{
  char source[1000], destination[1000];

  printf("Input a string\n");
  gets(source);

  strcpy(destination, source);

  printf("Source string: %s\n", source);
  printf("Destination string: %s\n", destination);

  
}