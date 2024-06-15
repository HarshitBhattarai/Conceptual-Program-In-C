#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
    result *= i;
    }
    return result;
}

int main() {
    int number;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);

    if (number < 0) {
    printf("Factorial is not defined for negative numbers.\n");
    } else {
    int fact = factorial(number);
    printf("Factorial of %d is %d\n", number, fact);
    }

    return 0;
}
