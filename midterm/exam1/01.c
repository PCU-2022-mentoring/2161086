/*1. 사용자로부터 세 개의 실수를 입력받아 평군과 합을 구하는 프로그램을 작성하시오.

OUTPUT
실수를 입력하시오: 5
실수를 입력하시오: 8
실수를 입력하시오: 9

합은 22.000000이고 평균은 7.333333입니다.
*/
#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	double x, y, z;
	double sum, avg;

	printf("실수를 입력하시오: ");
	scanf("%lf", &x);

	printf("실수를 입력하시오: ");
	scanf("%lf", &y);

	printf("실수를 입력하시오: ");
	scanf("%lf", &z);
	
	sum = x + y + z;
	avg = sum / 3;
	
	printf("\n\n합은 %lf이고 평균은 %lf입니다.\n", sum, avg);

	return 0;
}