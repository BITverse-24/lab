#include<stdio.h>
#include<math.h>

void main() {
	float a, b, c, disc, root1, root2, real, img;

	printf("Enter the values of a, b and c: \n");
	scanf("%f %f %f ", &a, &b, &c);

	if (a == 0 && b == 0) 
		printf("\nRoots cannot be determined!");
	else if (a == 0) {
		printf("\nLinear Equation:\n");
		root1 = -c/b;
		printf("Root is %.3f", root1);
	}
	else {
		disc = (b * b) - (4 * a * c);

		if (disc == 0) {
			printf("\nThe roots are equal!\n");

			root1 = root2 = -b/(2 * a);
		}
		else if (disc > 0) {
			printf("\nThe roots are real and distinct!\n");

			root1 = (-b + sqrt(disc))/(2 * a);
			root2 = (-b - sqrt(disc))/(2 * a);

			printf("Root 1: %.3f | Root 2: %.3f", root1, root2);
		}
		else {
			printf("\nThe roots are complex!\n");

			real = -b/(2 * a);
			img = sqrt(fabs(disc)/(2 * a));

			printf("Root 1: %.3f + i%.3f | Root 2: %.3f - i%.3f", real, img, real, img);
		}
	}
}