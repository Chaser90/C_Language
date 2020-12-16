#include<stdio.h>
int main(void)
{
	printf("Be happy\n");  // "Be happy"를 출력하고 줄을 바꿈
	printf("12345678901234567890\n"); // 화면에 열 번호 출력하고 줄을 바꿈
	printf("My\tfriend\n"); //"My"를 출력하고 탭 위치로 이동 후에 "friend"를 출력하고 줄을 바꿈
	printf("Goot\bd\tchance\n"); // Goot을 출력하고 한칸 왼쪽으로 이동해 t를 d로 바꾸고 탭 위치로 이동 후에 chance를 출력하고 줄을 바꿈
	printf("Cow\rW\a\n"); //맨 앞으로 이동해 C를 W로 바꾸고 벨소리를 내고 줄을 바꿈
}
