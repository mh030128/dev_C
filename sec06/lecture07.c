#include <stdio.h>

int main()
{
	// ���迬������ �켱����
	int x = 1, y = 2, z;

	x > y + 2;
	x > (y + 2);

	x = y > 2;
	x = (y > 2);

	z = x > y;
	z = (x > y);

	x != y == z;		// != �� ==�� �켱������ ���� ������
	(x != y) == z;	// ���ʿ��� ���������� ������ ��

	return 0;
}