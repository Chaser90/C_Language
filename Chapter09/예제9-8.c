// 다른 함수의 변수 사용하기
#include<stdio.h>

void swap(void);

int main(void)
{
	int a = 10, b = 20;				// 변수 선언과 초기화

	swap();							// 인수 없이 매개변수도 없음
	printf("a:%d, b:%d\n", a, b);	// 변수 a, b 출력

	return 0;
}

void swap(void)						// 인수가 없으므로 매개변수도 없음
{
	int temp;						// 교환을 위한 변수

	temp = a;						// temp에 main 함수의 a 값 저장
	a = b;							// main 함수의 a에 main 함수의 b 값 저장
	b = temp;						// main 함수의 b에 temp 값 저장
}

/*
	실행 결과

	error C2065: 'a': 선언되지 않은 식별자입니다.
	error C2065: 'a': 선언되지 않은 식별자입니다.
	error C2065: 'b': 선언되지 않은 식별자입니다.
	error C2065: 'b': 선언되지 않은 식별자입니다.
*/
