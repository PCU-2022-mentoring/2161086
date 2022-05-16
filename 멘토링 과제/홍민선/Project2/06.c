//06 Ç³Â÷ Âï±â

#include <stdio.h>

int main() {
	int i, j;
	for (i = 1; i <= 10; i++) {
		for (j = i; j > 0; j--)
			printf("*");
		for (j = 10 - i; j >= 0; j--)
			printf(" ");
		for (j = 10 - i; j >= 0; j--)
			printf("*");

		printf("\n");
	}

	for (i = 1; i <= 10; i++) {
		for (j = 10 - i; j >= 0; j--)
			printf(" ");
		for (j = i; j > 0; j--)
			printf("*");
		for(j = i; j > 0; j--)
			printf(" ");
		for (j = 10 - i; j >= 0; j--)
			printf("*");
		printf("\n");
	}

	return 0;
}