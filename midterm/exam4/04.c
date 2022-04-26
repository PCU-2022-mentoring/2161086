/*4. 정수형 변수 값을 두 개를 입력 받아 입력받은 값을 교환하는 프로그램을 작성하시오.

OUTPUT
첫번째 정수 : 30
두번째 정수 : 20

교환전 x=30 y=20
교환후 x=20 y=30*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y, tmp;

	printf("첫번째 정수 : ");
	scanf("%d", &x);

	printf("두번째 정수 : ");
	scanf("%d", &y);

	printf("\n교환전 x=%d y=%d\n", x, y);

	tmp = x;
	x = y;
	y = tmp;

	printf("교환전 x=%d y=%d\n", x, y);

	return 0;
}