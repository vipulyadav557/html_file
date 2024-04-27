#include <stdio.h>

int main()
 {
    int a, b, product;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
     product = a * b;    
    printf("The product of %d and %d is %d.\n", a, b, product);
    return 0;
}
