/*58.Write a UDF that takes price and quality as argument. It should return the
amount.(Argument and return value both )*/
#include <stdio.h>

int main(){
    int price, qun, prod;
    printf("Enter the price :-: ");
    scanf("%d",&price);
    printf("Enter the QUN. :-: ");
    scanf("%d", &qun);
    prod = multiplyTwo(price, qun);
    printf("AMOUNT IS: %d",prod);
    return 0;
}

int multiplyTwo(int price, int qun)
{
    return (price * qun);
}