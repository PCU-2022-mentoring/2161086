#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {				// 1번  수정 필요

	int sum, re;
	double num1, num2, div;
	char op;
	
	for (re = 0; re < 10; re++) {
		printf("수식 >> ");
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
				printf("0으로는 나눌수 없습니다.\n");
			}
			else {
				div = num1 / num2;
				printf("%lf\n", div);
			}
			break;

		default:
			printf("지원하지 않는 연산자 입니다.\n");
			break;
		}
	}
	
	return 0;
}
