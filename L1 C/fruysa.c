#include <stdio.h>

int main () {
    int a ;
    int b ;
    int product;

    printf("enter the value of a\n");
    scanf("%d", &a); 

    printf("enter the value of b\n");
    scanf("%d", &b); 

    product = a * b;

    printf("the value of product is %d \n", product);

    return 0;
}