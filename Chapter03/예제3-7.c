#include<stdio.h> // char배열에 문자열 복사
#include<string.h> // 문자열을 다룰 수 있는string.h에 파일 포함

int main(void)
{
	char fruit[20] = "strawberry";  //  strawberry로 초기화

	printf("%s\n",fruit);	//	strawberry 출력
	strcpy(fruit, "banana"); //	fruit에 banana 복사
	printf("%s\n", fruit); // banana 출력

 	return 0;
}
