#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main() {			//3�� �Ϸ�
	int R = 0;
	int in;
	srand(time(NULL));
	
	R = rand() % 101;
	printf("0~100 ������ ����\n");

	while (1)
	{
		printf(">> ");
		scanf("%d", &in);
		if (in > R) {
			printf("DOWN\n");
		}
		else if (in < R) {
			printf("UP\n");
		}
		else
		{
			printf("�����Դϴ�\n");
			printf("�����մϴ�...\n");
			break;
		}
	}
	return 0;
}