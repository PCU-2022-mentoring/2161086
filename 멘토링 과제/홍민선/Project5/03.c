//03 난수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int num, guess;
	srand((unsigned)time(NULL));
	num = rand() % 100 + 1;
	printf("0~100 사이의 숫자\n");

	while (1) {
		printf(">>");
		scanf("%d", &guess);
		if (num < guess)
			printf("DOWN\n");
		else if (num > guess)
			printf("UP\n");
		else {
			printf("정답입니다");
			break;
		}
	
	}
	return 0;
}