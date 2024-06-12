#include <stdio.h>

int main()
{
	char c = 'A';
	char d = 65;
	char e = '*';

	printf("%c %hhd\n", c, c);
	printf("%c %hhd\n", d, d);
	printf("%c %hhd\n", e, e);

	printf("%c \n", c + 1);		// 65(A) + 1 = 66(B)

	char a = '\a';	// \는 행위를 나타냄
	printf("%c", a);
	printf("\07");
	printf("\x7");

	printf("\x23\n");	// # : 16진수로 23이기 때문에 x를 앞에 붙이고 23을 입력

	float salary;
	printf("$______\b\b\b\b\b\b");	// \b는 backspace를 의미
	// scanf("%f", &salary);

	printf("AB\tCDEF\n");
	printf("ABC\tDEF\n");

	printf("\\ \'HA+\' \"Hello\" \?\n");	// \\는 뒤에 \를 출력, \'는 작은따옴표 출력, 


	return 0;
}