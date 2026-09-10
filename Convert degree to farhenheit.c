#include <stdio.h>

int main() {
    float celsius, convert;

    printf("Enter the temperature in Celsius: \n"); 
    scanf("%f", &celsius);

    // Formula to convert Celsius to Fahrenheit
    convert = (celsius * 9 / 5) + 32;

    // Added the missing semicolon at the end of this printf statement
    printf("The temperature in Fahrenheit is: %.2f\n", convert);

    return 0;
}
