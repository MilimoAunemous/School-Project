#include <stdio.h>

int main() {
    float length;
    float width;
    float area;

    printf("area of a rectangle calculator\n");
    printf("enter length: ");
    scanf("%f", &length);
    
    printf("enter width: ");
    scanf("%f", &width);

    area = length * width;

    printf("Area: %.2f\n", area);

    return 0;
}