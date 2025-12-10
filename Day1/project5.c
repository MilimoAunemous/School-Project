#include <stdio.h>

int main() {
    double n1, n2;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &n1);
    printf("Enter second number: ");
    scanf("%lf", &n2);
    
    printf("Choose operation (+, -, *, /): ");
    scanf(" %c", &op); // Space before %c catches newline characters

    switch(op) {
        case '+': printf("Result = %.0lf", n1 + n2); break;
        case '-': printf("Result = %.0lf", n1 - n2); break;
        case '*': printf("Result = %.0lf", n1 * n2); break;
        case '/': 
            if(n2 != 0) printf("Result = %.0lf", n1 / n2);
            else printf("Error: Divide by zero");
            break;
        default: printf("Invalid operation");
    }
    return 0;
}
