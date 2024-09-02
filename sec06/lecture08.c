#include <stdio.h>

int main()
{
	// for 루프 소개
	
	// Idefinite(한정되있지 않은) loop vs. Counting loop
	//while (1)
	//{
	//	// do something
	//}

	/*
		Counting Loop
		1. Counter initialization
		2. Counter check
		3. Counter change
	*/

	//int i;

	//i = 1;
	//while (i <= 10)		// Note : <=
	//{
	//	printf("%d ", i);
	//	i++;
	//}

	// 위에 코드를 for문 사용하여 같은 기능 구현
	//int i;	// 아래에 넣을 수 있음

	for (int i = 1; i <= 10; i++)	// 디버거 실행해보면 i++ 확인 후 i<=10 확인 
		printf("%d ", i);	// 간단한 구문에서는 { } 입력 안 해도 됨
	

	return 0;
}