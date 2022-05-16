//02 성적받기
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	while (1) {

		int sc;
		printf("점수 >> ");
		scanf("%d", &sc);

		if (sc > 100)
			printf("다시 입력하세요\n");
		else if (sc >= 90)
			printf("A\n");
		else if (sc >= 80)
			printf("B\n");
		else if (sc >= 70) {
			printf("C\n");
			break;
		}
		else if (sc >= 50)
			printf("D\n");
		else if (sc >= 0)
			printf("F\n");
		else {
			printf("종료합니다\n");
			break;
		}

	}
		return 0;
}
