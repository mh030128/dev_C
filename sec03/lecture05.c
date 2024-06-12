#include <stdio.h>
#include <stdint.h>	// also included in inttypes.h
#include <inttypes.h>

int main()
{
	// 너비가 고정되어 있는 정수형
	int i;
	int32_t i32;		// 32 bit integer 항상 32비트 메모리를 가지고 있음
	int_least8_t i8;	// smallest 8 bit
	int_fast8_t f8;		// fastest minimum
	intmax_t imax;		// biggest signed integers
	uintmax_t uimax;	// biggest unsigned integers

	i32 = 1004;

	printf("me32 = %d\n", i32);
	printf("me32 = %" "d" "\n", i32);	// 포맷 형식을 나눠서 사용 가능
	printf("me32 = %" PRId32 "\n", i32);	// <inttypes.h> 입력해야 사용 가능


	return 0;
}