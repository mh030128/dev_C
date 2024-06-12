#include<stdio.h>

// 변수선언 사용법

int main()
{
	// int x, y, z;		같은 자료형 일 때만 나열해서 입력가능
	int x;	// declaration
	int y;
	int z;

	x = 1;	// assignment
	y = 2;

	z = x + y;

	printf("z의 값: %d", z);
	
	return 0;
}