#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Celsius to Fahrenheit
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    // Formula: (Celsius * 9/5) + 32
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    printf("In Fahrenheit: %.1f\n", fahrenheit);

    // Fahrenheit to Celsius
    printf("\nEnter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    // Formula: (Fahrenheit - 32) * 5/9
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    printf("In Celsius: %.1f\n", celsius);

    return 0;
}
