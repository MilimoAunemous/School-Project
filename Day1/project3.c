#include <stdio.h>

int main() {
    int num1, num2;
    
    // Ask for input
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Print results
    printf("\nSum = %d\n", num1 + num2);
    printf("Difference = %d\n", num1 - num2);
    printf("Product = %d\n", num1 * num2);
    
    if (num2 != 0) {
        printf("Quotient = %d\n", num1 / num2);
    } else {
        printf("Quotient = Undefined (division by zero)\n");
    }

    return 0;
}
