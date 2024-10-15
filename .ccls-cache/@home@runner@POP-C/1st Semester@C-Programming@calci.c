#include<stdio.h>

void main() {
    float a, b, sum, diff, product, quotient;
    int choice, mod;

    printf("\nEnter the values of a and b: ");

    scanf("%f %f", &a, &b);

    printf("\nEnter choice: ");

    scanf("%d", &choice);

    printf("\n");
    switch(choice) {

        case 1:
            printf("Addition: \n");
            sum  = a + b;
            printf("Sum: %f", sum);
            break;

        case 2:
            printf("Subtraction:\n");
            diff  = a - b;
            printf("Difference: %f", diff);
            break;

        case 3:
            printf("Multiplication:\n");
            product  = a * b;
            printf("Product: %f", product);
            break;

        case 4:
            printf("Division:\n");
            quotient  = a / b;
            printf("Quotient: %f", quotient);
            break;

        case 5:
            printf("Modulus:\n");
            mod  = (int)a % (int)b;
            printf("Remainder: %i", mod);
            break;

        default:
            printf("Invalid Operation!");
    }
}