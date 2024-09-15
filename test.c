#include <stdio.h>
#include <math.h>

int main() {
    double x1, x2, a, b, c, discriminant, bt;
    
    // Prompting user to input the coefficients
    printf("Enter the value of coefficient a: ");
    scanf("%lf", &a);
    
    printf("Enter the value of coefficient b: ");
    scanf("%lf", &b);
    
    printf("Enter the value of coefficient c: ");
    scanf("%lf", &c);
    
    // Calculate the discriminant (b^2 - 4ac)
    discriminant = b * b - 4 * a * c;
    
    // Check if the discriminant is non-negative to ensure real roots
    if (discriminant >= 0) {
        bt = sqrt(discriminant);
        
        // Calculate the two roots using the quadratic formula
        x1 = (-b + bt) / (2 * a);
        x2 = (-b - bt) / (2 * a);
        
        // Display the results
        printf("The roots of the equation are:\n");
        printf("X1 = %.2lf\n", x1);
        printf("X2 = %.2lf\n", x2);
    } else {
        // In case of negative discriminant, display that roots are complex
        printf("The equation has complex roots.\n");
    }

    return 0;
}
