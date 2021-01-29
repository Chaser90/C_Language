// 표준 입출력 스트림을 사용한 문자열 입력

#include <stdio.h>

int main(void)
{
	int ch;						// 입력한 문자를 저장할 변수

	while (1)
	{
		ch = getchar();			// 키보드에서 문자 입력
		if (ch == EOF)			// <CTRL> + <Z>로 입력 종료
		{
			break;
		}
		putchar(ch);			//  화면에 문자 출력
	}

	return 0;
}
