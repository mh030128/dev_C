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
		- L-Value : �޸𸮸� �����ϰ� �ִ� Ư�� ������ ��ü(��ü)
		- R-Value : ���� ������ L-Value���� ���Ե� ���� ������ �ڱ� �ڽ��� L-Value�� �� �� ���� �͵�
		- a, b, c�� ���� ������ L-Value
		- TWO�� ���� �Ұ����� L-Valuue (���⼭ =�� ������ �ƴ� �ʱ�ȭ)
		- 42�� R-Value, (a + b)�� R-Value (���α׷��� ����ϴ� �ӽ� ��, ������ �����)
	*/

	return 0;
}