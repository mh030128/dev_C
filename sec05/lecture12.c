#include <stdio.h>

void draw(int n);	// ANSI functino prototype declaration

int main()
{
	// 함수의 인수(Arguments)와 매개변수(Parameters)
	
	int i = 5;
	char c = '#';		// 35
	float f = 7.1f;

	draw(i);
	draw((int)c);
	draw((int)f);	// 형변환해주면 error가 뜨지 않음

	// Arguments vs. Parameters
	// actual argument, actual parameter -> argument (values)
	// formal argument, formal parameter -> parameter (variables)

	return 0;
}

void draw(int n)
{
	// TODO : print stars (asterisks)
	while (n-- > 0)
		printf("*");
	printf("\n");
}
