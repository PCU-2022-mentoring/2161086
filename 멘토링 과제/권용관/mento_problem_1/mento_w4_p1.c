#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {				// 1��  ���� �ʿ�

	int sum, re;
	double num1, num2, div;
	char op;
	
	for (re = 0; re < 10; re++) {
		printf("���� >> ");
		scanf("%lf %c %lf", &num1, &op, &num2);

		switch (op)
		{
		case '+':
			sum = num1 + num2;
			printf("%d\n", sum);
			break;

		case '-':
			sum = num1 - num2;
			printf("%d\n", sum);
			break;

		case '*':
			sum = num1 * num2;  
			printf("%d\n", sum);
			break;

		case '/':
			if (num2 == 0) {
				printf("0���δ� ������ �����ϴ�.\n");
			}
			else {
				div = num1 / num2;
				printf("%lf\n", div);
			}
			break;

		default:
			printf("�������� �ʴ� ������ �Դϴ�.\n");
			break;
		}
	}
	
	return 0;
}
