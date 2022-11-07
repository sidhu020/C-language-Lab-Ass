/*56.Write a program to print the numbers which are divisible by 9 and between*/
of 1 to 100.
#include<stdio.h>
void main()
{
    int i, num;
    printf("\nInput an integer:");
    scanf("%d", &num);
    for (i = 0; i <= 100; i++)
    {
        if (i%num == 0)
        {
            printf("%d\n", i);
        }
    }
}