#include<stdio.h>


int main() {

	/* +=, -=, *=, /=, %= */

	int i = 1024;
	
	i = i + 10;
	i += 10;	//���� �ۼ� ����

	i % 4;

	i = i * (1 + 2);
	i *= 1 + 2;
	i *= (1 + 2);		// check precedence

	for (int i = 0; i < 10; i += 2);

	/*
		����ȭ ���� ������ ����� �������� �ڵ� ���� ����
		Debug - Windows - Disassembly
		������ ���콺 - Go to Disassembly
	*/



	return 0;
}