#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int i = 0, j = 0;	// 변수 선언할 때 초기화하는 것을 권장!
	int sum = 0;

	printf("Input two integers\n");

	scanf("%d %d", &i, &j);	// 빈칸의 유무는 상관없음(%d %d)

	sum = i + j;

	printf("Value is %d, %d\nSum is %d\n", i, j, sum);

	return 0;
}