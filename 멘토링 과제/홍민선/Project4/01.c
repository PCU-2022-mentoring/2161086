//01 ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	for (int i = 0; i < 10; i++) {
		int num1, num2;
		char cal;

		printf("���� >>");
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
			printf("0���� ���� �� �����ϴ�\n");
			break;
		default:
			printf("�������� �ʴ� ������ �Դϴ�.\n");
			break;

		}
	}
	return 0;
}