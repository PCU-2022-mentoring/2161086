#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1, num2, i, j = 0;
	char c;
	double num3, num4;


	for (i = 0; i < 10; i++) {
		printf("����>> ");
		scanf("%d %c %d", &num1, &c, &num2);
		switch (c) {
		case '+':
			printf("%d\n", num1 + num2);
			break;
		case '-':
			printf("%d\n", num1 - num2);
			break;
		case '*':
			printf("%d\n", num1 * num2);
			break;
		case '/':
			if (num2 == 0) {
				printf("0���� ���� �� �����ϴ�.\n");
				break;
			}
			num3 = num1;
			num4 = num2;
			printf("%lf\n", num3 / num4);
			break;
		case '%':
			printf("%d\n", num1 % num2);
			break;
		default:
			printf("�������� �ʴ� ������ �Դϴ�.\n");
		}
	}
	return 0;
}