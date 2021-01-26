//	열거형을 사용한 프로그램

#include <stdio.h>

enum season {SPRING, SUMMER, FALL, WINTER};		// 열거형 선언

int main(void)
{
	enum season ss;		// 열거형 변수 선언
	char* pc = NULL;		// 문자열을 저장할 포인터

	ss = SPRING;			// 열거 멤버의 값 대입
	switch (ss)
	{
	case SPRING:			// 봄이면
		pc = "inline";		// 인라인 문자열 선택
		break;				
	case SUMMER:			// 여름이면 수영 문자열 선택
		pc = "swimming";	
		break;		
	case FALL:				// 가을이면 여행 문자열 선택
		pc = "trip";
		break;
	case WINTER:			// 겨울이면 스키 문자열 선택
		pc = "skiing";
		break;
	}

	printf("나의 레저 활동 => %s\n", pc);   // 선택된 문자열 출력

	return 0;
}
