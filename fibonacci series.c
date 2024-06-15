#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, c, i;
    printf("Fibonacci Series up to %d terms:\n", n);
    printf("%d, %d", a, b);
    for (i = 3; i <= n; i++) {
    c = a + b;  // Calculate next term
    printf(", %d", c);
    a = b;      // Update previous terms
    b = c;
    }    
    printf("\n");
}

int main() {
    int terms;
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);
    
    fibonacci(terms);
    
    return 0;
}
