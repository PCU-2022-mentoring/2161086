#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {			// 5¹ø ¿Ï·á
	int i, j, k;

	for (int i = 0; i < 5; i++) {
		for (j = i; j < 4; j++) {
			printf(" ");
		}
		for (k = 0; k <= (i*2); k++) {
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}