/*10. ������ ������ ���� ���� ǥ���Է����� �޾� ��������(m^2)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* 1���� 3.30��������(m^2)��� ���� const ����� ����

OUTPUT
��� �Է�: 123

�Էµ� ���: 123.000000
��������: 405.900000
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	const double P = 3.3;
	double p;
	double squaredM;

	printf("��� �Է�: ");
	scanf("%lf", &p);

	printf("\n�Էµ� ���: %lf\n", p);
	squaredM = p * 3.3;
	printf("��������: %lf\n", squaredM);

	return 0;
}