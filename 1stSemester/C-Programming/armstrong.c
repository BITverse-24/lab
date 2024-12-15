// Original Lab Version

#include <math.h>
#include <stdio.h>

void main() {
  int i, sum, num, count = 0;

  printf("Armstrong Numbers between 1 and 1000");

  for (i = 1; i <= 1000; i++) {
    count = log10(i) + 1;
    num = i;
    sum = 0;
    while (num != 0) {
      sum += pow(num % 10, count);
      num /= 10;
    }

    if (sum == i)
      printf("%d\n", i);
  }
}



/*
        Updated version of Armstrong Number program to receive user input
   regarding Upper Limit
*/

#include <math.h>
#include <stdio.h>

void main() {
  int i, sum, num, n, count = 0;

  printf("\nEnter Upper Limit: ");
  scanf("%d", &n);

  printf("Armstrong Numbers between 1 and %d", n);

  for (i = 1; i <= n; i++) {
    count = log10(i) + 1;
    num = i;
    sum = 0;
    while (num != 0) {
      sum += pow(num % 10, count);
      num /= 10;
    }

    if (sum == i)
      printf("%d\n", i);
  }
}
