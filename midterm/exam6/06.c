/*6. 100���� ���� ������ �Է� �޾Ƽ� �̸� ���� �ڸ�, ���� �ڸ��� �и��Ͽ� ����ϴ� ���α׷��� �ۼ��϶�.

OUTPUT
������ �Է��Ͻÿ�:65

���� �ڸ�:6
���� �ڸ�:5*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &x);

	printf("\n���� �ڸ�:%d\n", x / 10);
	printf("���� �ڸ�:%d\n", x % 10);

	return 0;
}