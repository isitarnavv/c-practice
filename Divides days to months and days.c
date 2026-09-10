#include <stdio.h>

int main() {
    int days;

    printf("Enter no. of days: ");
    scanf("%d", &days);

    // Prints the total months and the leftover days
    printf("Months: %d Days: %d\n", days / 30, days % 30);

    return 0;
}
