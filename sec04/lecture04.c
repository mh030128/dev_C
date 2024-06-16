#include <stdio.h>
#include <string.h>		// strlen and more

int main()
{
	//char str1[100] = "Hello";
	//char str2[] = "Hello";
	//char str3[100] = "\0";		// blank
	//char str4[100] = "\n";		// null

	//printf("%zu %zu\n", sizeof(str1), strlen(str1));		// 100 5
	//printf("%zu %zu\n", sizeof(str2), strlen(str2));		// 6 5
	//printf("%zu %zu\n", sizeof(str3), strlen(str3));		// 100 0
	//printf("%zu %zu\n", sizeof(str4), strlen(str4));		// 100 1
	//// blank와 null은 ASCII가 다름
	//// zu타입이 안 되는 컴파일러도 있음

	// Extra
	char* str5 = (char*)malloc(sizeof(char) * 100);
	str5[0] = 'H';
	str5[1] = 'e';
	str5[2] = 'l';
	str5[3] = 'l';
	str5[4] = 'o';
	str5[5] = '\0';

	printf("%zu %zu\n", sizeof(str5), strlen(str5));		// 4 5
	// sizeof(str5)는 str5가 가리키는 데이터의 크기가 아니라 str5 자체, 즉 포인터 크기를 반환
	// x86(32비트) 시스템에서는 포인터 크기가 4바이트

	return 0;
}