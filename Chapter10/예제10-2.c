#include <stdio.h>

// 배열처럼 사용되는 포인터

int main(void)
{
	int ary[3];			// 배열선언	
	int* pa = ary;		// 포인터에 배열명 저장
	int i;				// 반복 제어 변수

	*pa = 10;			// 첫 번째 배열 요소에 10 대입

	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];

	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}

	return 0;
}
