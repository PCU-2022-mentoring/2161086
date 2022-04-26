/*3. 문자형, 정수형, 실수형 변수를 각각 하나씩 선언하고 각각 하니씩 선언하고 각각을 입력받아서 출력하는 프로그램을 작성하시오.

OUTPUT
문자를 입력하세요 : A
정수를 입력하세요 : 20
실수를 입력하세요 : 5.3

문자 = A, 정수 = 20, 실수 = 5.300000*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char c;
	int i;
	double d;

	printf("문자를 입력하세요 : ");
	scanf("%c", &c);

	printf("정수를 입력하세요 : ");
	scanf("%d", &i);

	printf("실수를 입력하세요 : ");
	scanf("%lf", &d);

	printf("\n문자 = %c, 정수 = %d, 실수 = %lf\n", c, i, d);

	return 0;
}