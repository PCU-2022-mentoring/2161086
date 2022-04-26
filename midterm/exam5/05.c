/*5. 사용자로부터 문자를 입력받아 그 문자에 해당되는 아스키 코드값을 출력하는 프로그램을 작성하시오.

OUTPUT
문자를 입력: P

아스키코드값은 :80입니다.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char c;

	printf("문자를 입력: ");
	scanf("%c", &c);

	printf("\n아스키코드값은 :%d입니다.\n", c);

	return 0;
}