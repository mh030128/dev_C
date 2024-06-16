#include <stdio.h>

int main()
{
	// 나머지 연산자 Modulus Operator

	int seconds = 0, minutes = 0, hours = 0;
	
	/*
	* 음수를 받기 전까지 초를 입력받으면 출력하고, 음수를 받으면 초를 출력하지 않고
	* Good bye만 출력하는 방법
	* 하지만 처음과 마지막에 입력을 받는게 두 번 나오므로 좋지 않은 코드임. (같은 기능의 코드)
	* 이러한 방법이 아닌 한 번만 입력하여 출력되는 방법은 다음에 배울 것임
	*/ 
	
	//printf("Input seconds: ");
	//scanf("%d", &seconds);
	//
	//while (seconds >= 0)
	//{
	//	minutes = seconds / 60;
	//	seconds %= 60;

	//	hours = minutes / 60;
	//	minutes %= 60;

	//	// print result
	//	printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);

	//	printf("Input seconds: ");
	//	scanf("%d", &seconds);
	//}
	//printf("Good bye\n");

	// 음수를 나누었을 때
	
	// 앞에 있는 피연산자가 음수면 나머지이 연산자는 음수로 나옴

	int div, mod;
	
	div = 11 / 5;
	mod = 11 % 5;
	printf("div = %d, mod = %d\n", div, mod);	// 2, 1

	div = 11 / -5;	// 앞에 수 또는 뒤에 수가 음수면 몫은 음수
	mod = 11 % -5;	// 앞에 수가 양수면 나머지는 양수
	printf("div = %d, mod = %d\n", div, mod);	// -2, 1

	div = -11 / -5;
	mod = -11 % -5;	// fitst operand is negative
	printf("div = %d, mod = %d\n", div, mod);	// 2, -1

	div = -11 / 5;
	mod = -11 % 5;	// first operand is negative
	printf("div = %d, mod = %d\n", div, mod);	// -2, -1

	return 0;
}