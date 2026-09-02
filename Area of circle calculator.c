#include <stdio.h>

int main() {
    float r;

    printf("Area of circle calculator \n");
    
    printf("Enter Radius: ");
    scanf("%f", &r);
    float area = 3.14 * r * r;
    printf("The area of the circle is: %f\n", area);
    return 0;
}
