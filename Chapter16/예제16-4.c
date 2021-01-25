#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  동적 할당 저장 공간의 활용	
//	3개의 문자열을 저장하기 위한 동적 할당

int main(void)
{
	char temp[80];							// 임시 char 배열
	char* str[3];							// 동적 할당 영역을 연결한 포인터 배열
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("문자열을 입력하세요 : ");		// 문자열 입력
		gets(temp);								// 문자열 저장 공간 할당
		str[i] = (char *)malloc(strlen(temp) + 1);	// 동적 할당 영역에 문자열 복사
		strcpy(str[i], temp);
	}

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);						// 입략된 문자열 출력
	}

	for (i = 0; i < 3; i++)
	{
		free(str[i]);			// 동적 할당 영역 반환
	}

	return 0;
}
