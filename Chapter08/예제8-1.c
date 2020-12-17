/*	08-1 배열의 선언과 사용
	5명의 나이를 저장할 배열을 선언하고 사용하는 방법
*/

#include<stdio.h>

int main(void)
{
	int ary[5];								//	int형 요소 5개의 배열 선언
											//	ary는 array의 축약어
	ary[0] = 10;							//	첫 번째 배열 요소에 20 대입
	ary[1] = 20;							//	두 번째 배열 요소에 20 대입
	ary[2] = ary[0] + ary[1];				//	첫 번째와 두번째 요소를 두해 세 번째 요소에 저장
	scanf("%d", &ary[3]);					//	키보드로 입력받아 네 번째 요소에 저장

	printf("%d\n", ary[2]);					//	세 번째 배열 요소 출력
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);					//	마지막 배열 요소는 쓰레기 값


	return 0;
}
