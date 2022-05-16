//01 계산기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	for (int i = 0; i < 10; i++) {
		int num1, num2;
		char cal;

		printf("수식 >>");
		scanf("%d %c %d", &num1, &cal, &num2);


		switch (cal) {
		case '+': 
			printf("%d\n", num1 + num2);
			break;
		case '-':
			printf("%d\n", num1 - num2);
			break;
		case '/':
			printf("%d\n", num1 / num2);
			break;
		case '*':
			printf("%d\n", num1 * num2);
			break;
		case'%':
			printf("%d\n", num1 % num2);
			break;
		case '/ 0':
			printf("0으로 나눌 수 없습니다\n");
			break;
		default:
			printf("지원하지 않는 연산자 입니다.\n");
			break;

		}
	}
	return 0;
}