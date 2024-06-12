#include <stdio.h>
#include <float.h>

int main()
{
	printf("%u\n", sizeof(float));			// 4
	printf("%u\n", sizeof(double));			// 8
	printf("%u\n", sizeof(long double));	// 8

	// gcc에서는 4, 8, 12

	float f = 123.456f;
	double d = 123.456;

	// 형변환 할 내용은 다음 강의에서.
	float f2 = 123.456;		// 경고 : double보다 float의 크기가 작기 때문. float이지만 데이터타입은 double로 뜸.
	double d2 = 123.456f;	// 경고X : float보다 double의 크기가 크기 때문. double이지만 데이터타입은 float으로 뜸

	int i = 3;
	float f3 = 3.f;		// 3.0f
	double d3 = 3.;		// 3.0

	float f4 = 1.234e10f;	// e는 대소문자 구분없이 사용 가능.

	float f5 = 0x1.1p1;		// 10진수가 아닌 16진수.
	double d5 = 1.0625e0;

	printf("%f %F %e %E\n", f, f, f, f);
	printf("%f %F %e %E\n", d, d, d, d);
	printf("%a %A\n", f5, f5);
	printf("%a %A\n", d5, d5);


	return 0;
}