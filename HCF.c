#include <stdio.h>
int calculateHCF(int a, int b);

int main() {
    int num1, num2, hcf;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    hcf = calculateHCF(num1, num2);
    printf("HCF of %d and %d is %d\n", num1, num2, hcf);
    return 0;
}

int calculateHCF(int a, int b) {
    while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
    }
    return a;
}
