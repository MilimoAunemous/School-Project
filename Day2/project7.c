#include <stdio.h>
int main() {
    int n1, n2, n3; 
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);   
    int largest = n1;
    if (n2 > largest) largest = n2;
    if (n3 > largest) largest = n3;  
    printf("The largest number is %d", largest);
    return 0;
}
