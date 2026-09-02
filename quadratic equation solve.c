#include <stdio.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter coefficients a, b, and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    if (a == 0) {
        printf("Coefficient 'a' cannot be zero for a quadratic equation.\n");
        return 1;
    }

    // --- Print the equation nicely ---
    printf("\nThe equation is: ");

    // Print "a" part
    if (a == 1)
        printf("x^2");
    else if (a == -1)
        printf("-x^2");
    else
        printf("%.2fx^2", a);

    // Print "b" part
    if (b > 0)
        printf(" + %.2fx", b);
    else if (b < 0)
        printf(" - %.2fx", -b);

    // Print "c" part
    if (c > 0)
        printf(" + %.2f", c);
    else if (c < 0)
        printf(" - %.2f", -c);

    printf(" = 0\n");
    // ---------------------------------

    discriminant = (b * b) - (4 * a * c);
    printf("Discriminant (b^2 - 4ac) = %.2f\n", discriminant);

    if (discriminant > 0) {
        double guess = discriminant / 2.0;
        for (int i = 0; i < 100; i++) {
            if (guess == 0) break;
            guess = (guess + (discriminant / guess)) / 2.0;
        }
        root1 = (-b + guess) / (2 * a);
        root2 = (-b - guess) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root = %.2f\n", root1);
    }
    else {
        double negDisc = -discriminant;
        double guess = negDisc / 2.0;
        for (int i = 0; i < 100; i++) {
            if (guess == 0) break;
            guess = (guess + (negDisc / guess)) / 2.0;
        }
        realPart = -b / (2 * a);
        imaginaryPart = guess / (2 * a);
        printf("Roots are complex:\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}   
