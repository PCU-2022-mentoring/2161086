/*1. ����ڷκ��� �� ���� �Ǽ��� �Է¹޾� �򱺰� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

OUTPUT
�Ǽ��� �Է��Ͻÿ�: 5
�Ǽ��� �Է��Ͻÿ�: 8
�Ǽ��� �Է��Ͻÿ�: 9

���� 22.000000�̰� ����� 7.333333�Դϴ�.
*/
#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	double x, y, z;
	double sum, avg;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &x);

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &y);

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &z);
	
	sum = x + y + z;
	avg = sum / 3;
	
	printf("\n\n���� %lf�̰� ����� %lf�Դϴ�.\n", sum, avg);

	return 0;
}