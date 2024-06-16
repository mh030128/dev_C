#include <stdio.h>
#include <inttypes.h>	// intmax_t

int main()
{
	// multiple inputs with blank separators
	//int i;
	//float f;		// double일 때는 scanf 사용 시 %f가 아닌 %lf
	//char str[30];
	//scanf("%d %f %s", &i, &f, str);	// Note % is absent in front of str
	//printf("%d %f %s\n", i, f, str);

	// character
	//char c;
	//scanf("%c", &c);		// try blank
	//printf("%i\n", c);	// blank is 32

	// Unsigned as signed
	//unsigned i;
	//scanf("%i", &i);		// try negative number
	//printf("%i\n", i);

	// Unsigned as unsigned
	//unsigned i2;
	//scanf("%u", &i2);	// try negative number
	//printf("%u\n", i2);		// unsigned는 음수를 받지 못하기 때문

	// floating point numbers
	// l for double for %f, %e, %E, %g
	//float d = 0.0;
	//scanf("%f", &d);	// lf, try E notation
	//printf("%f\n", d);	// f

	// width
	//char str[30];
	//scanf("%5s", str);		// width
	//printf("%s\n", str);

	// modifier
	//char i;
	//scanf("%hhd", &i);	// try large numbers
	//printf("%i\n", i);

	// integer with characters
	//int i;
	//scanf("%i", &i);		// try '123ab', '123a456'
	//printf("%i\n", i);

	//// j modifier

	//intmax_t i;
	//scanf("%ji", &i);
	//printf("%ji", i);

	// Regular characters
	//int a, b;
	//scanf("%d, %d", &a, &b);	// try blank separator only
	///*scanf("%d ,%d", &a, &b);
	//scanf("%d,%d", &a, &b);
	//scanf("%d-%d", &a, &b);
	//scanf("%dA%d", &a, &b);*/
	//printf("%d %d\n", a ,b);

	// char receives blank
	//int a, b;
	//char c;
	//scanf("%d%c%d", &a, &c, &b);		// try 123 456 (blank)
	//printf("%d|%c|%d", a, c, b);		// | is separator

	// sentences?, getchar(), fgets(), etc.

	// return value of scanf()
	/*int a, b;
	int i = scanf("%d%d", &a, &b);
	printf("%d", i);*/

	// *modifier for printf()
	//int i = 123;
	//int width = 5;
	//printf("Input width : ");		// from script file, scanf, etc.
	//scanf("%d", &width);
	//printf("%*d\n", width, i);

	// modifier for scanf()
	int i;
	scanf("%*d%*d%d", &i);
	printf("Your third input = %d", i);	// 입력은 3개 받지만 변수에 대입하지 않고 무시함



	return 0;
}