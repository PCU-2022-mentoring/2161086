#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int num1, num2;
	srand((unsigned)time(NULL));
	printf("0~100 사이의 숫자\n >> ");
	scanf("%d", &num1);
	num2 = rand() % 100;

	while (1) {
		if (num1==num2) {
			printf("정답입니다.\n");
			printf("종료합니다."); 
			break;
		}
		else {
			if (num1 < num2)
				printf("UP");
			else
				printf("DOWN");
		}
		printf(">> ");
		scanf("%d", &num1);
	}
	return 0;
}