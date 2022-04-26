/*9. 문자의 더하기와 빼기 연산으로 주위의 문자를 출력하는 프로그램을 작성하시오.
* 문자형 연산 'A' + 2 결과를 문자로 출력
* 문자형 연산 'A' + 5 결과를 문자로 출력
* 문자형 연산 'S' - 1 결과를 문자로 출력
* 문자형 연산 'S' - 3 결과를 문자로 출력

OUTPUT
C F R P
*/

#include <stdio.h>

int main()
{
	printf("%c ", 'A' + 2);
	printf("%c ", 'A' + 5);
	printf("%c ", 'S' - 1);
	printf("%c\n", 'S' - 3);

	return 0;
}