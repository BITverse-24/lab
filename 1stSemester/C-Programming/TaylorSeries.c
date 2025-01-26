#include<stdio.h>
#include<math.h>

void main() {
	int degree, i = 2;
	double x, num, denom, term, sum = 0;

	printf("Enter the degree value: \n");
	scanf("%d", &degree);

	x = degree * (3.1412 / 180); // Convert into Radians

	// Initialise values for Numerator and Denominator
	num = x;
	denom = 1;
	do {
		term = num / denom;
		num = -num * x * x;
		denom *= i * (i + 1);
		sum += term;
		i += 2;
	} while (fabs(term) > 0.00001);

	printf("\nWithout using library functions: sin(%d) = %1f\n", degree, sum);
	printf("Using Library Functions, sin(%d) = %1f\n", degree, sin(x));
}