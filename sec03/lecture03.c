#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
	/*
	* unsigned int i = 0;

	printf("%u\n", sizeof(unsigned int));	// 출력하려는 데이터가 unsigned면 u로 출력
	printf("%u", sizeof(i));
	*/

	// unsigned int i = 0b11111111111111111111111111111111;	// 2진수 사용 시 0b입력 (0b는 C언어 표준이 아님)

	/*
	unsigned int u_max = UINT_MAX;
	unsigned int u_min = 0;
	signed int i_max = INT_MAX;
	signed int i_min = INT_MIN;

	// printf("%u\n", i);	// 2^32의 값
	printf("max of unit = %u\n", u_max);
	printf("min of unit = %u\n", u_min);	// 매크로가 없음. unsigned의 가장 작은 값은 0
	printf("max of int = %d\n", i_max);
	printf("min of int = %d\n", i_min);
	*/

	/*
	overflow
	unsigned int u_max = UINT_MAX + 1;
	printf("%u\n", u_max);	// 0
	*/

	/*
	unsigned int u_max = UINT_MAX;

	// i to binary representation
	// u_max가 담고 있는 숫자를 2진수로 변환
	_itoa(u_max, buffer, 2);

	// print decimal and binary
	// 2진수 형태로 출력
	printf("decimal : %u\n", u_max);
	printf("binary : %s\n", buffer);
	*/

	// 다양한 정수형들
	char c = 65;
	short s = 200;
	unsigned int ui = 3000000000U;
	long l = 65537L;
	long long ll = 12345678908642LL;

	printf("char = %hhd, %d, %c\n", c, c, c);
	printf("short = %hhd, %hd, %d\n", s, s, s);
	printf("unsigned int = %u, %d\n", ui, ui);
	printf("long = %ld, %hd\n", l, l);
	printf("long long = %lld, %ld\n", ll, ll);


	return 0;
}