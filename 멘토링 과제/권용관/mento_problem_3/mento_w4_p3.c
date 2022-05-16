#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main() {			//3번 완료
	int R = 0;
	int in;
	srand(time(NULL));
	
	R = rand() % 101;
	printf("0~100 사이의 숫자\n");

	while (1)
	{
		printf(">> ");
		scanf("%d", &in);
		if (in > R) {
			printf("DOWN\n");
		}
		else if (in < R) {
			printf("UP\n");
		}
		else
		{
			printf("정답입니다\n");
			printf("종료합니다...\n");
			break;
		}
	}
	return 0;
}