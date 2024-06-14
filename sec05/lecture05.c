#include <stdio.h>

int main()
{
	// 나누기 연산자
	printf("Integer division\n");	// 정수 부분만 표현
	printf("%d\n", 14 / 7);	// 2
	printf("%d\n", 7 / 2);		// 3.5 in floating division	// 3
	printf("%d\n", 7 / 3);		// 2.333 in floating division		// 2
	printf("%d\n", 7 / 4);		// 1.75 in floating division		// 1
	printf("%d\n", 8 / 4);		// 2

	printf("\nTruncating toward zero (C99)\n");	// 절삭
	printf("%d\n", -7 / 2);	// -3.5 in floating division		// -3
	printf("%d\n", -7 / 3);	// -2.333 in floating division	// -2
	printf("%d\n", -7 / 4);	// -1.75 in floating division		// -1
	printf("%d\n", -8 / 4);	// -2

	printf("\nFloating division\n");		// double, integer 등 타입이 다른 연산이면 double로 출력(후에 형변환 관련 강의 들음)
	printf("%f\n", 9.0 / 4.0);
	printf("%f\n", 9.0 / 4);	// Note : 4 is integer

	return 0;
}