#include <stdio.h>
#include <stdbool.h>

int main()
{
	printf("%u\n", sizeof(_Bool));	// 1 byte

	_Bool b1;
	b1 = 0;	// false
	b1 = 1;	// true

	printf("%d\n", b1);	// 형식지정자가 따로 없어서 정수형우로 출력

	bool b2, b3;
	b2 = true;
	b3 = false;

	printf("%d %d\n", b2, b3);


	return 0;
}