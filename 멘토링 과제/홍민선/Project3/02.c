//02 �����ޱ�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	while (1) {

		int sc;
		printf("���� >> ");
		scanf("%d", &sc);

		if (sc > 100)
			printf("�ٽ� �Է��ϼ���\n");
		else if (sc >= 90)
			printf("A\n");
		else if (sc >= 80)
			printf("B\n");
		else if (sc >= 70) {
			printf("C\n");
			break;
		}
		else if (sc >= 50)
			printf("D\n");
		else if (sc >= 0)
			printf("F\n");
		else {
			printf("�����մϴ�\n");
			break;
		}

	}
		return 0;
}
