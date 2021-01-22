#include <stdio.h>
#include <string.h>					// strcpy 함수를 사용하기 위해 기입

/*
	12-2 문자열 연산 함수
	strcmp 함수의 사용법
*/

int main(void)
{
	char str1[80] = "strawberry";					// char 배열에 문자열 초기화
	char str2[80] = "apple";						// char 배열에 문자열 초기화
	char *ps1 = "banana";
	char *ps2 = str2;								// 포인터로 배열 연결

	printf("최초 문자열 : %s\n", str1);
	strcpy(str1, str2);								// 다른 char 배열의 문자열 복사
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps1);								//  문자열 상수를 연결한 포인터 사용
	printf("바뀐 문자열 : %s\n", str1);


	strcpy(str1, ps2);								// 배열을 연결한 포인터 사용
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, "banana");							// 문자열 상수 사용
	printf("바뀐 문자열 : %s\n", str1);

	return 0;
}
