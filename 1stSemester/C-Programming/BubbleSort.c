#include<stdio.h>

void main() {
	int a[10], i, j, n, temp;

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	printf("\nEnter the elements: ");

	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	printf("\nCurrent Elements before sorting:\n");
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);

	// Bubble Sort Implementation

	for (i = 1; i < n; i++) {
		for (j = 0; j < n - i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	printf("\nElements after sorting:\n");
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);

}