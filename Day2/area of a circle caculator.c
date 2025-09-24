#include <stdio.h>

#define PI 3.14159

int main() {
    float radius;
    float area;

    printf("Area of a circle calculator\n");
    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area: %.2f\n", area);

    return 0;
}