#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {			//2�� �Ϸ�
	int i;

	for (;;) {

		printf("���� >> ");
		scanf("%d", &i);

		if (i <= 100 && i >= 90 ) {
			printf("A\n");
		}
		else if (i < 90 && i >= 80) {
			printf("B\n");
		}
		else if (i < 80 && i >= 70) {
			printf("C\n");
		}
		else if (i < 70 && i >= 50) {
			printf("D\n");
		}
		else if (i < 50 && i >= 0) {
			printf("F\n");
		}
		else if (i > 100) {
			printf("�ٽ� �Է��ϼ���.\n");
		}
		else
		{
			break;
		}
	}


	return 0;
}