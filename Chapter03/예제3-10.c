#include <stdio.h>		// scanf함수를 사용한 연속 입력\

int main(void)
{
	int age;					// 나이는 정수형
  double height;				// 키는 실수형

	printf("나이와 키를 입력하세요. : ");			// 입력 안내 메시지 출력
	scanf("%d%lf", &age, &height);				  // 나이와 키를 함께 입력
	printf("나이는 %d살, 키는 %1.lfcm입니다\n", age, height);

	return 0;
}
