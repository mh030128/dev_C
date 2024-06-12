#include <stdio.h>

int main()
{
	float n1 = 3.14;		// 4 bytes
	double n2 = 1.234;	// 8 bytes
	int n3 = 1024;		// 4 yvtes

	printf("%f %f %d\n\n", n1, n2, n3);	// 8, 8, 4 (Y, Y, Y)

	// Note the warnings in output window

	// 4, 4, 4 (N, N, N(
	printf("%d %d %d\n\n", n1, n2, n3);
	// 8, 8, 4 (N, N, Y)
	printf("%lld %lld %d\n\n", n1, n2, n3);		// 크기는 맞지만 타입이 맞지 않아 출력이 이상하게 됨, n3는 타입이 맞아서 제대로 출력됨
	// 8, 4, 4 (Y, N, N)
	printf("%f %d %d\n\n", n1, n2, n3);
	// 8, 8, 4 (Y, N, Y)
	printf("%f %lld %d\n\n", n1, n2, n3);	// n2는 크기는 맞지만 타입이 맞지 않아 출력이 이상하게 됨 


	return 0;
}