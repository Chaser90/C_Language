/*	06 반복문
	06-1 While문, For문, Do ~ While문
	While문을 사용한 반복문
*/

#include<stdio.h>

int main(void)
{
	int a = 1;								// 변수를 선언하고 곱셈을 하기 위해 1로 초기화

	while (a < 10)						// ① a가 10보다 작으므로 조건식은 참
	{
		a = a * 2;							// ② a에 2를 곱해 a에 다시 저장
	}
	printf("a : %d\n", a);		// a 값 출력
	
	return 0;
}
