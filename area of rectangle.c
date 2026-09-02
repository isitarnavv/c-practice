#include <stdio.h>

int main() {
    printf("Rectangle area calculator");

    int length, width;
    printf("\nEnter length: ");
    scanf("%d", &length);
    printf("Enter width: ");
    scanf("%d", &width);

    int area = length * width;
    printf("The area of the rectangle is: %d\n", area);

    if(area > 100) {
        printf("The area is greater than 100.\n");
    } else {
        printf("The area is less than or equal to 100.\n");
    }

    return 0;
}
