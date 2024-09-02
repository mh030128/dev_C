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
	printf("%f\n", d);	// 0.000000 : ���� ���� ����� ������ �ʴ� ������ ������ ũ�� ������ ���� ������ 1.0f�� ������� ��.

	// round-off errors (ex2)
	float e = 0.0f;
	e = e + 0.01f;
	// 0.01�� �� �������� ����� �� ���� ������ ���� e�� 100�� ���Ѵ��ص� 1.0�� ���� ������ ����.

	// overflow
	float max = 3.402823466e+38F;
	printf("%f\n", max);
	max = max * 100.0f;
	printf("%f\n", max);	// inf : ������ �ʹ� Ŀ�� �����°�

	// underflow
	float ff = 1.401298464e-45F;
	printf("%e\n", ff);
	ff = ff / 100.0f;	// subnormal : �ε��Ҽ������� ���е��δ� �� �̻� ǥ���� �� ���� ������ ���� ���ڸ� ���ڰ� �����
	printf("%e\n", ff);

	// ���α׷��� 0���� �����Ⱑ �߻����� �ʵ��� Ȯ��
	float f01 = 104.0f;
	printf("%f\n", f01);
	f01 = f01 / 0.0f;	// warning C4723 : potential divide by 0
	printf("%f\n", f01);	// inf


	float f02 = asinf(1.0f);
	printf("%f\n", f02);

	f02 = asinf(2.0f);		// sinf�� 2.0�� ���ڸ� ���� �� ����. ���� asinf�� sinf�� ���Լ��̹Ƿ� 2.0f�� ���ڸ� ���� �� ����
	printf("%f\n", f02);	// -nan(ind) : ���������� �������� ���� ���ڸ� ������ ����� �� ������ ��

	return 0;
}