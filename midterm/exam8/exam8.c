/*8. cm�� �� ���̸� �Է¹޾Ƽ� inch�� ��ȯ �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.(1 inch = 2.54cm)

OUTPUT
���� �Է� : 100

100.000000 cm�� 39.370079 inch�Դϴ�.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	const double INCH = 2.54;
	double cm;
	double inch;

	printf("���� �Է� : ");
	scanf("%lf", &cm);

	inch = cm / INCH;

	printf("\n%lf cm�� %lf inch�Դϴ�.\n", cm, inch);

	return 0;
}