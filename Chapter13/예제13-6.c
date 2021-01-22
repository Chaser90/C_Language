#include <stdio.h>

/*	13-2	함수의 데이터 공유 방법
	10을 더하기 위해 값을 인수로 주는 경우
*/

void add_ten(int a);		// 함수 선언

int main(void)
{
	int a = 10;

	add_ten(a);				// a값을 복사하여 전달
	printf("a : %d\n", a);

	return 0;
}

void add_ten(int a)			// a와 다른 독립적인 저장 공간 할당
{
	a = a + 10;				// 매개변수 a에 10을 더한다
}
