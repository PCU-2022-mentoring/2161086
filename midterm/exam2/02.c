/*2. 사용자로부터 정수를 입력받은 다음, 10진수, 8진수, 16진수로 출력하는 프로그램을 작성하시오.

OUTPUT
16진수 정수를 입력하시오: ad

8진수로는 0225입니다.
10진수로는 173입니다.
16진수로는 0xad입니다.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x;

	printf("16진수 정수를 입력하시오: ");
	scanf("%x", &x);	// %d로 입력 받게 될 경우 아스키 코드로 받게 됩니다

	printf("\n8진수로는 %#o입니다.\n", x);
	printf("10진수로는 %d입니다.\n", x);
	printf("16진수로는 %#x입니다.\n", x);

	return 0;
}