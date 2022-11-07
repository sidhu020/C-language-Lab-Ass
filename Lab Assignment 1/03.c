/*3. Write a program to print integer and long integer value with specific format specifies.*/

#include<stdio.h>
void main()

{
    int m=12345;
    long n=987654;
    printf("%d\n",m);
     printf("%10d\n",m);
      printf("%010d\n",m);
       printf("%-10d\n",m);
        printf("%101d\n",n);
         printf("%101d\n",n);
}
