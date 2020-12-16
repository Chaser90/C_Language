//	재귀호출 함수

#include<stdio.h>

void fruit(void);							//	함수 선언

int main(void)
{
	fruit();							    	//	함수 호출

	return 0;
}

void fruit(void)							//	재귀호출 함수 정의
{
	printf("apple\n");
	fruit();							    	//	자신을 다시 호출
}
                              //  ※ 멈추지 않고 계속 불러오기 실행되서 프로그램 과부하 발생
