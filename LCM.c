#include <stdio.h>
int calculateHCF(int a, int b) {
    while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
    }
    return a;
}

int calculateLCM(int a, int b) {
    return (a * b) / calculateHCF(a, b);
}

int main() 
{
    int num1, num2, lcm;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    lcm = calculateLCM(num1, num2);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);
    return 0;
}

