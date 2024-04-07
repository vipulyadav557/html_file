#include <stdio.h>

int main()
 {
    int a, b, sum;

    printf("Enter the first number:a ");
    scanf("%d" , &a);

     printf("Enter the second number:b ");
    scanf("%d" , &b);

    sum = a + b;

    printf("The sum of number %d and %d is %d", a,b,sum);
    return 0;
}
