#include <stdio.h>
#include <math.h>

int main() {
    double x1, x2, a, b, c, discriminant, sqrt_val;

    // Prompt the user to input values of a, b, and c
    printf("Enter the value of coefficient a: ");
    scanf("%lf", &a);
    
    printf("Enter the value of coefficient b: ");
    scanf("%lf", &b);
    
    printf("Enter the value of coefficient c: ");
    scanf("%lf", &c);

    // Calculate the discriminant (b^2 - 4ac)
    discriminant = b * b - 4 * a * c;

    // Check if the discriminant is non-negative for real roots
    if (discriminant >= 0) {
        sqrt_val = sqrt(discriminant); // Square root of discriminant
        
        // Calculate the two roots
        x1 = (-b + sqrt_val) / (2 * a);
        x2 = (-b - sqrt_val) / (2 * a);
        
        // Output the results
        printf("Root X1 = %.2lf\n", x1);
        printf("Root X2 = %.2lf\n", x2);
    } else {
        // If discriminant is negative, print a message for complex roots
        printf("The equation has complex roots. No real solutions.\n");
    }

    return 0;
}
