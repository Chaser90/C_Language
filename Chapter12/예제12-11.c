#include <stdio.h>
#include <string.h>				//	strlen을 함수 사용을 위한 헤더 파일

//	 두 문자열 중 길이가 긴 단어 출력

int main(void)
{
	char str1[80], str2[80];					// 두 문자열을 입력할 배열
	char *resp;

	printf("2개의 과일 이름 입력 :");
	scanf("%s %s", str1, str2);					// 2개의 문자열 입력
	if (strlen(str1) > strlen(str2))			// 배열에 입력된 문자열의 길이 비교
		resp = str1;							// 첫 번째 문자열이 긴 경우 선택
	else
		resp = str2;							// 두 번째 문자열이 긴 경우 선택
	printf("이름이 긴 과일은 : %s\n", resp);	// 선택된 배열의 문자열 출력

	return 0;
}
