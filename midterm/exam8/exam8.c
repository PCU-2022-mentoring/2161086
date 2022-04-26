/*8. cm로 된 길이를 입력받아서 inch로 변환 후 출력하는 프로그램을 작성하시오.(1 inch = 2.54cm)

OUTPUT
길이 입력 : 100

100.000000 cm는 39.370079 inch입니다.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	const double INCH = 2.54;
	double cm;
	double inch;

	printf("길이 입력 : ");
	scanf("%lf", &cm);

	inch = cm / INCH;

	printf("\n%lf cm는 %lf inch입니다.\n", cm, inch);

	return 0;
}