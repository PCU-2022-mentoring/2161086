/*4. ������ ���� ���� �� ���� �Է� �޾� �Է¹��� ���� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.

OUTPUT
ù��° ���� : 30
�ι�° ���� : 20

��ȯ�� x=30 y=20
��ȯ�� x=20 y=30*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y, tmp;

	printf("ù��° ���� : ");
	scanf("%d", &x);

	printf("�ι�° ���� : ");
	scanf("%d", &y);

	printf("\n��ȯ�� x=%d y=%d\n", x, y);

	tmp = x;
	x = y;
	y = tmp;

	printf("��ȯ�� x=%d y=%d\n", x, y);

	return 0;
}