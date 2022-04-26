/*6. 100보다 작은 정수를 입력 받아서 이를 십의 자리, 일의 자리로 분리하여 출력하는 프로그램을 작성하라.

OUTPUT
정수를 입력하시오:65

십의 자리:6
일의 자리:5*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;

	printf("정수를 입력하시오:");
	scanf("%d", &x);

	printf("\n십의 자리:%d\n", x / 10);
	printf("일의 자리:%d\n", x % 10);

	return 0;
}