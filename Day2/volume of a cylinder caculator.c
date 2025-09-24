#include <stdio.h>

#define PI 3.14159

int main() {
float radius;
float height;
float volume;

printf("Volume of a cylinder calculator\n");
    
printf("Enter the radius: ");
scanf("%f", &radius);
    
printf("Enter the height: ");
scanf("%f", &height);

volume = PI * radius * radius * height;

printf("The volume of the cylinder is: %.2f\n", volume);

return 0;
}