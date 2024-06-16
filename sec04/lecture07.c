#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	// printf(제어-문자열, 아이템1, 아이템2...)
	// 아이템 입력값은 변수, 상수, 표현식 등이 있음.

	/*
		%a : 부동소수점 수, 16진수, p-표기법
		&A	 : 부동소수점 수, 16진수, p-표기법
		%c : 한 글자(문자 1개(character))
		%d (또는 %i) : 부호가 있는 10진(decimal) 정수(integer)
		%e : 부동 소수점 수, e-표기법
		%E : 부동 소수점 수, E-표기법
		%f : 부동 소수점 수, 10진수 표기
		%g : 값에 따라서 %e나 %f 사용. 지수가 -4보다 작거나 정밀도보다 크거나 같을 경우에는 %e 사용
		%G : 값에 따라서 %E나 %f 사용. 지수가 -4보다 작거나 정밀도보다 크거나 같을 경우에는 %E 사용
		%o : 부호가 없는 8진(octal) 정수
		%p : 포인터
		%s : 문자열, str() 내장 함수
		%u : 부호가 없는 10진 정수
		%x : 부호가 없는 16진 정수, 소문자 알파벳 사용
		%X : 부호가 없는 16진 정수, 대문자 알파벳 사용
		%% : 퍼센트 기호 출
		%r : repr() 내장함수
	*/

	double d = 3.1415926535897932384626433832795028841971693993751058209749445;

	printf("%c\n", 'A');
	printf("%s", "I love you\n");		// 문자열 안이 아닌 출력할 문자 안에다가 \n 입력
	printf("Even if there's a small chance, \
we owe this to everyone who's not in this room to try.\n");		// 줄바꿈 하려면  \ 를 입력

	printf("\n");
	printf("%d %i %i %i\n", 1004, 1234, INT_MAX, UINT_MAX);		// Note overflow
	printf("%u %u %u\n", 1024, -1, UINT_MAX);		// Note overflow

	printf("\n");
	printf("%f %f %lf\n", 3.141592f, d, d);		// l in %lf is ignored
	printf("%a %A\n", d, d);
	printf("%e %E\n", d, d);

	printf("\n");
	printf("%g %g\n", 123456.789, 1234567.89);
	printf("%G %G\n", 123456.789, 1234567.89);
	printf("%g %g\n", 0.00012345, 0.000012345);
	printf("%G %G\n", 0.00012345, 0.000012345);

	printf("\n");
	printf("%o\n", 9);
	printf("%p\n", &d);		// pointer-of perator

	printf("\n");
	printf("%x %X\n", 11, 11);
	printf("%%\n", d);		// Note the warning. d is ignored.

	printf("\n");
	printf("%9d\n", 12345);
	printf("%09d\n", 12345);
	printf("%.2f\n", 3.141592);		// 소수점 아래 두자리수만 출력
	printf("%.20f %.20lf\n", d, d);

	printf("\n");
	int n_printed = printf("Counting!");	// printf 함수의 return 값은 출력할 문자 갯수 
	printf("%u\n", n_printed);	// 9 : Counting!의 문자 갯수

	return 0;
}