#include <stdio.h>

int main()
{
	// Loop (반복문)

	int n = 1;

	while (n < 10)
	{
		printf("%d\n", n);
		n += 1;	// 입력하지 않으면 1만 출력하는 무한 Loop에 출력
	}

	// Debug 실행하면서 n 값이 어떻게 변하는지 확인하며 공부하는 것이 좋음

	return 0;
}