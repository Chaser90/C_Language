//문자와 문자열 입력
#include<stdio.h>

int main(void)
{
	char grade;
	char name[20];

	printf("직접 입력 : ");
	scanf("%c", &grade);
	printf("이름 입력 : ");
	scanf("%s", name);
	printf("%s의 학점은 %c입니다.\n", name,grade);

	return 0;
}
