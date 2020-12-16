// if~elseif ~else문 사용
#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;

	if(a>0)							// ① 조건식1 : a가 0보다 크면 b에 1 대입 
	{
		b = 1;
	}
	else if (a == 0)				// ② 조건식2 : a가 0일 때만 b에 2 대입
	{
		b = 2;
	}
	else							// ③ 조건식3 : a가 0보다 작을 때 b에 3 대입
	{
		b = 3;
	}

	printf("b : %d\n", b);			// if문으로 결정된 b 값 출력

	return 0;
}
