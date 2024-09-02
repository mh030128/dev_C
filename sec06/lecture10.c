#include<stdio.h>


int main() {

	/* +=, -=, *=, /=, %= */

	int i = 1024;
	
	i = i + 10;
	i += 10;	//으로 작성 가능

	i % 4;

	i = i * (1 + 2);
	i *= 1 + 2;
	i *= (1 + 2);		// check precedence

	for (int i = 0; i < 10; i += 2);

	/*
		최적화 관심 있으면 어셈블리 레벨에서 코드 검토 가능
		Debug - Windows - Disassembly
		오른쪽 마우스 - Go to Disassembly
	*/



	return 0;
}