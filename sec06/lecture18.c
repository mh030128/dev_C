#include <stdio.h>

// 변수가 같아서 헷갈릴 수 있지만 잘 확인하고 봐야 함

/*
	우리는 주로 main 함수를 많이 사용함.따라서 위에 올렸다 내렸다 하는 것이 
	불편할 수도 있기 때문에 프로토타입으로 분리해서 작성가능.

*/
int compute_pow(int base, int exp);

int main() {

	// 3의 4제곱

	int base, exp, i, result;
	/*while (scanf("%d %d", &base, &exp) == 2)
	{
		result = 1;
		for (i = 0; i < exp; i++) {
			result *= base;
		}
		printf("result = %d\n", result);
	}*/

	// main 밖에서 함수 만들어서 사용
	while (scanf("%d %d", &base, &exp) == 2)
	{
		result = compute_pow(base, exp);
		printf("result = %d\n", result);
	}

	return 0;
}

int compute_pow(int base, int exp)
{
	int i, result;	// main 함수 안에서 선언했다 해도 따로 선언해줘야 함. 

	result = 1;
	for (i = 0; i < exp; i++) {
		result *= base;
	}
	return result;
}