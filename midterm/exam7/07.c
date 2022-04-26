 /*7. 지구와 태양의 거리는 1억 4960만 km이고 빛의 속도는 초당 30만km를 이동한다. 태양에서 오는 빛이 몇 초만에
   지구에 도착하는지를 계산하는 프로그램을 작성하시오.(연산자는 산술연산자 2개만 사용)

OUTPUT
빛의 속도는 300000.000000km/s
태양과 지구와의 거리 149600000.000000km

도달 시간은 8분 18초*/

#include <stdio.h>

int main()
{
	double sp = 300000.0, dis = 149600000.0;
	int min, sec;

	printf("빛의 속도는 %lfkm/s\n", sp);
	printf("태양과 지구와의 거리 %lfkm\n\n", dis);

	sec = dis / sp;

	min = sec / 60;
	sec = sec % 60;

	printf("도달 시간은 %d분 %d초\n", min, sec);

	return 0;
}