#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, j, a, b, c, d;
	for (i = 0; i < 10; i++) {
		for (j = 0; j <= i; j++) 
			printf("*");
		for(b=10; b > j; b--)
			printf(" ");
		for (c=10; c >= j; c--)
			printf("*");

		printf("\n");
	}
	for (i = 0; i < 10; i++) {
		for (b = 10; b > i; b--)
			printf(" ");
		for (j = 0; j <= i; j++)
			printf("*");
		for (b = 0; b < i; b++)
			printf(" ");
		for (c = 10; c >= j; c--)
			printf("*");


		printf("\n");
	}


	return 0;
}