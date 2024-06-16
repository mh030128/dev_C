#include <stdio.h>

int main()
{
	//int a = 1;
	//int int_arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };		// 초기화하는 방법 중 하나

	//printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]);	// 0 1 9

	//printf("%i\n", int_arr[10000]);		// 초기화한 것보다 큰 값을 입력하면 안됨

	//char c = 'a';
	//char str1[10] = "Hello";	// null character (=Hello\n)
	//char str2[10] = { 'H', 'i' };

	//printf("%c\n", c);		// a
	//printf("%s\n", str1);	// Hello
	//printf("%s\n", str2);	// Hi

	//printf("%hhi %hhi %hhi %hhi %hhi\n", str2[0], str2[1], str2[2], str2[3], str2[4]);
	// 72 105 0 0 0

	// array size is not enough	char[13]으로 뜨는데 총 12글자이지만 뒤에 \0(null)도 포함하므로 13글자로 뜸
	//char str3[10] = "Hello, World";	// 하지만 우리가 10개의 공간으로 초기화 했기 때문에 공간의 크기가 넘었으므로 에러가 남

	char str3[20] = "Hello, \0World";
	printf("%s\n", str3);	// \0(null)을 만나서 뒤에는 출력을 하지 않음	Hello,
	printf("%hhi\n", str3[10]);	//114
	printf("%c\n", str3[10]);		// r
	printf("%c\n", str3[11]);		// l
	// 실제로 %hhi와 %c로 출력하는 것을 보면 메모리에는 저장되어 있지만 printf 함수는 출력할 때 /0(null)을 만나면 출력하지 않는 것을 확인할 수 있음

	return 0;
}