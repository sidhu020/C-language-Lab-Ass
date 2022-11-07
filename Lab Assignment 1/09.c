/*9. Write a program to demonstrate Implicit conversation.*/
#include <stdio.h>

int main()
{
    int x=10;
    char y='a';
    x=x+y;
    float z=x+1.0;
    printf("x=%d\n,z=%f",x,z);

    return 0;
}