#include <stdio.h>
#include <float.h>
#include <math.h>

int main()
{
	// round-off errors (ex1)
	float a, b;
	a = 1000.0f + 1.0f;
	b = a - 1000.0f;
	printf("%f\n", b);	// 1.000000

	float c, d;
	c = 1.0E20f + 1.0f;
	d = c - 1.0E20f;
	printf("%f\n", d);	// 0.000000 : 위와 같은 결과가 나오지 않는 이유는 범위가 크기 때문에 작은 숫자인 1.0f는 사라지게 됨.

	// round-off errors (ex2)
	float e = 0.0f;
	e = e + 0.01f;
	// 0.01을 딱 떨어지게 계산할 수 없기 때문에 만약 e를 100번 더한다해도 1.0의 값이 나오지 않음.

	// overflow
	float max = 3.402823466e+38F;
	printf("%f\n", max);
	max = max * 100.0f;
	printf("%f\n", max);	// inf : 범위가 너무 커서 나오는것

	// underflow
	float ff = 1.401298464e-45F;
	printf("%e\n", ff);
	ff = ff / 100.0f;	// subnormal : 부동소수점형의 정밀도로는 더 이상 표현할 수 없을 정도로 작은 숫자면 숫자가 사라짐
	printf("%e\n", ff);

	// 프로그램은 0으로 나누기가 발생하지 않도록 확인
	float f01 = 104.0f;
	printf("%f\n", f01);
	f01 = f01 / 0.0f;	// warning C4723 : potential divide by 0
	printf("%f\n", f01);	// inf


	float f02 = asinf(1.0f);
	printf("%f\n", f02);

	f02 = asinf(2.0f);		// sinf는 2.0의 숫자를 가질 수 없음. 따라서 asinf는 sinf의 역함수이므로 2.0f의 숫자를 가질 수 없음
	printf("%f\n", f02);	// -nan(ind) : 수학적으로 존재하지 않은 숫자를 강제로 계산할 때 나오는 값

	return 0;
}