#include <stdio.h>				// 이미 정의 된 매크로의 기능

void func(void);

int main(void)
{
	printf("컴파일 날짜와 시간 : %s, %s\n\n", __DATE__, __TIME__);
	printf("파일명 : %s\n", __FILE__);
	printf("함수명 : %s\n", __FUNCTION__);
	printf("행번호 : %d\n", __LINE__);

#line 100 "macro.c"					// 행번호를 100부터 시작, 파일명은 macro.c로 표시
	func();							// 여기부터 행 번호는 100으로 시작
	
	return 0;
}

void func(void)
{
	printf("\n");
	printf("파일명 : %s\n", __FILE__);
	printf("함수명 : %s\n", __FUNCTION__);
	printf("행번호 : %d\n", __LINE__);
}
