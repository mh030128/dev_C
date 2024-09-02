#include <stdio.h>
#include <float.h>

int main()
{
	printf("%u\n", sizeof(float));			// 4
	printf("%u\n", sizeof(double));			// 8
	printf("%u\n", sizeof(long double));	// 8

	// gcc������ 4, 8, 12

	float f = 123.456f;
	double d = 123.456;

	// ����ȯ �� ������ ���� ���ǿ���.
	float f2 = 123.456;		// ��� : double���� float�� ũ�Ⱑ �۱� ����. float������ ������Ÿ���� double�� ��.
	double d2 = 123.456f;	// ���X : float���� double�� ũ�Ⱑ ũ�� ����. double������ ������Ÿ���� float���� ��

	int i = 3;
	float f3 = 3.f;		// 3.0f
	double d3 = 3.;		// 3.0

	float f4 = 1.234e10f;	// e�� ��ҹ��� ���о��� ��� ����.

	float f5 = 0x1.1p1;		// 10������ �ƴ� 16����.
	double d5 = 1.0625e0;

	printf("%f %F %e %E\n", f, f, f, f);
	printf("%f %F %e %E\n", d, d, d, d);
	printf("%a %A\n", f5, f5);
	printf("%a %A\n", d5, d5);


	return 0;
}