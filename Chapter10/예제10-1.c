#include <stdio.h>
/*
	10-1 배열과 포인터의 관계
	배열명에 정수 연산을 수행하여 배열 요소 사용
*/

int main(void)
{
	int ary[3];
	int i;

	*(ary + 0) = 10;	// ary[0] = 10;

	*(ary + 1) = *(ary + 0) + 10; // ary[1] = ary[0] + 10

	printf("세 번째 배열 요소에 키보드 입력 : ");
	scanf("%d", ary + 2);			// &ary[2]

	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i));  // ary[i]
	}

	return 0;
}
