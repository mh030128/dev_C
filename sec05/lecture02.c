#include <stdio.h>

int main()
{
	const int TWO = 2;
	int a;
	int b;
	int c;

	a = 42;
	b = a;
	c = TWO * (a + b);

	/*
		- L-Value : 메모리를 차지하고 있는 특정 데이터 객체(개체)
		- R-Value : 수정 가능한 L-Value에게 대입될 수는 있지만 자기 자신은 L-Value가 될 수 없는 것들
		- a, b, c는 수정 가능한 L-Value
		- TWO는 수정 불가능한 L-Valuue (여기서 =은 대입이 아닌 초기화)
		- 42는 R-Value, (a + b)는 R-Value (프로그램이 계산하는 임시 값, 끝나면 사라짐)
	*/

	return 0;
}