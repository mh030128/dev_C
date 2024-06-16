#include <stdio.h>

void draw(int n);	// ANSI functino prototype declaration

int main()
{
	// �Լ��� �μ�(Arguments)�� �Ű�����(Parameters)
	
	int i = 5;
	char c = '#';		// 35
	float f = 7.1f;

	draw(i);
	draw((int)c);
	draw((int)f);	// ����ȯ���ָ� error�� ���� ����

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
