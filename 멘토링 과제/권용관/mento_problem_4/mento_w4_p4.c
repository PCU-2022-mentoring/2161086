#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {		// 4�� �Ϸ�

	for (int i = 1; i < 6; i++)
	{
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}