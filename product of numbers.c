#include <stdio.h>

int main() {
    int number1, number2, product;
    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);
    product = number1 * number2;
    printf("The product of %d and %d is %d", number1, number2, product);

    return 0;
}
