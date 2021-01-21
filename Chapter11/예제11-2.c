#include <stdio.h>

//	공백이나 제거 문자의 입력

int main(void)
{
	char ch1, ch2;

	scanf("%c %c", &ch1, &ch2);
	//2개의 문자를 연속 입력
	printf("[%c%c]", ch1, ch2);
	//입력된 문자 출력

	return 0;
}
