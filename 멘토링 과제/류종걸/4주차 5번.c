#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, j, b, c=5, num1=0;

	for (i = 0; i <5; i++) {
		c = 4;
		c -= i;
		for (c; c >= 1; c--) 
			printf(" ");
		for (b = 0; b <= num1; b++)
			printf("%d", i);
		printf("\n");
		num1 = num1 + 2;
		
}

	return 0;
}