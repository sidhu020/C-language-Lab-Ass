/* 34.Write a program to print “ - - - - - - - “ using user defined function with
no argument and no return value.*/


#include<stdio.h>
void liti();
void main()
{

liti();

}
void liti(void)
{
int i;
for(i=1; i<=600; i++)
{
printf("- - ");
}
}