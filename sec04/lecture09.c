#include <stdio.h>

int main()
{
	float n1 = 3.14;		// 4 bytes
	double n2 = 1.234;	// 8 bytes
	int n3 = 1024;		// 4 yvtes

	printf("%f %f %d\n\n", n1, n2, n3);	// 8, 8, 4 (Y, Y, Y)

	// Note the warnings in output window

	// 4, 4, 4 (N, N, N(
	printf("%d %d %d\n\n", n1, n2, n3);
	// 8, 8, 4 (N, N, Y)
	printf("%lld %lld %d\n\n", n1, n2, n3);		// ũ��� ������ Ÿ���� ���� �ʾ� ����� �̻��ϰ� ��, n3�� Ÿ���� �¾Ƽ� ����� ��µ�
	// 8, 4, 4 (Y, N, N)
	printf("%f %d %d\n\n", n1, n2, n3);
	// 8, 8, 4 (Y, N, Y)
	printf("%f %lld %d\n\n", n1, n2, n3);	// n2�� ũ��� ������ Ÿ���� ���� �ʾ� ����� �̻��ϰ� �� 


	return 0;
}