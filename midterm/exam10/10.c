/*10. 면적의 단위인 평을 정수 표준입력으로 받아 제곱미터(m^2)로 출력하는 프로그램을 작성하시오.
* 1평은 3.30제곱미터(m^2)라는 것을 const 상수로 정의

OUTPUT
평수 입력: 123

입력된 평수: 123.000000
제곱미터: 405.900000
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	const double P = 3.3;
	double p;
	double squaredM;

	printf("평수 입력: ");
	scanf("%lf", &p);

	printf("\n입력된 평수: %lf\n", p);
	squaredM = p * 3.3;
	printf("제곱미터: %lf\n", squaredM);

	return 0;
}