#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {			// 6¹ø ¿Ï·á
	int A = 10;

	for (int i = 1; i < A; i++)
	{
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		for (int k = 0; k < A - i-1; k++) {
			printf(" ");
		}
		for (int l = 0; l < A -i; l++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i < A; i++)
	{
		for (int h = 0; h < A - i; h++) {
			printf(" ");
		}
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		for (int k = 0; k < i-1; k++) {
			printf(" ");
		}
		for (int l = 0; l < A - i; l++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}