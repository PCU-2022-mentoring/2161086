/*3. ������, ������, �Ǽ��� ������ ���� �ϳ��� �����ϰ� ���� �ϴϾ� �����ϰ� ������ �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

OUTPUT
���ڸ� �Է��ϼ��� : A
������ �Է��ϼ��� : 20
�Ǽ��� �Է��ϼ��� : 5.3

���� = A, ���� = 20, �Ǽ� = 5.300000*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char c;
	int i;
	double d;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%c", &c);

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &i);

	printf("�Ǽ��� �Է��ϼ��� : ");
	scanf("%lf", &d);

	printf("\n���� = %c, ���� = %d, �Ǽ� = %lf\n", c, i, d);

	return 0;
}