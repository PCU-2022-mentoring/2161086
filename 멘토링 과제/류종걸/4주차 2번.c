#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int s;
	
	while (1) {
		printf("���� >> ");
		scanf("%d", &s);

		if (s < 0) {
			printf("�����մϴ�. \n");
			break;
		}
		else if (50 > s)
			printf("F\n");
		else if (70 > s)
			printf("D\n");
		else if (80 > s)
			printf("C\n");
		else if (90 > s)
			printf("B\n");
		else if (100 >= s)
			printf("A\n");
		else if (s > 100)
			printf("�ٽ� �Է��ϼ���");
	}
	return 0;
}