#include<string.h>
#include<stdio.h>
#include<stdlib.h>

void strCompare(char s1[], char s2[]) {
	int len1, len2, i, res = 1;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (len1 != len2) {
		printf("The strings are different!\n");
		return;
	}
	for (i = 0; s1[i] != '\0'; i++) {
		if (s1[i] != s2[i]) {
			res = -1;
			break;
		}
	}

	if (res == -1)
		printf("The strings are different!\n");
	else printf("The strings are equal!\n");
}

int len(char str[]) {
	int i = 0;
	while (str[i] != '\0') 
		i++;
	
	return i;
}

void concatenate(char str1[], char str2[]) {
	int i, j;

	for (i = 0; str1[i] != '\0'; i++) {}
	for (j = 0; str2[j] != '\0'; j++) {
		str1[i] = str2[j];
		i++;
	}
	str1[i] = '\0';
}

void main() {
	strCompare("Hello", "Bye");
	printf("Hello contains %d characters\n", len("Hello"));

	printf("Concatenating 'Hello' and ' World'\n");
	char hello[] = "Hello";
	char world[] = " World";

	concatenate(hello, world);
	printf("String after concat: %s\n", hello);
}