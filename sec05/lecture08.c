#include <stdio.h>

int main()
{
	// ����(++), ����(--) ������ => ����������
	/*
	int a = 0;
	a++;	// ����������	a = a + 1 or a += 1;
	printf("%d\n", a);		// 1

	++a;	// ����������	a = a + 1 or a += 1;
	printf("%d\n", a);		// 2

	double b = 0;
	b++;
	printf("%f\n", b);		// 1.000000

	++b;
	printf("%f\n", b);		// 2.000000
	*/

	/*
	++ �����ڰ� ����, ���������� ���� ���� �޶����� ���� Ȯ��
	int count = 0;
	while (count < 10)	// count++ or ++count
	{
		printf("%d ", ++count);	// count++ or ++count
		//count++;
	}
	*/

	/*
	int i = 1, j = 1;
	int i_post, pre_j;

	i_post = i++;		// i�� ���� ���� �ϱ� ���� i_post�� ������ �� �� ���
	pre_j = ++j;

	printf("%d %d\n", i, j);	// 2 2
	printf("%d %d\n", i_post, pre_j);	// 1 2
	*/

	/*
	int i = 3;
	int l = 2 * --i;		// *���� ���� �����ڰ� �켱���� �� ����
	printf("%d %d\n", i, l);	// 2, 4


	i = 1;
	l = 2 * i--;
	printf("%d %d\n", i, l);	// 0, 2

	// very high precedence
	int x, y, z;
	x = 3, y = 4;
	z = (x + y++) * 5;
	printf("%d %d %d", x, y, z);		// 3, 5, 35
	*/

	// ++ and -- affect modifiable lvaues(���������� L_Values (�������� ��밡��. ���ͷ�, ��� ��� �Ұ���))
	/*
	int x = 1, y = 1, z;		
	z = x * y++;	// (x) * (y++), not (x*y)++
	//z = (x * y++);	// error
	// z = 3++;	// error
	*/

	// Bad practices
	int n = 1;
	printf("%d %d", n, n * n++);	// �Լ� ȣ�� �� ���ڸ� ������ ���� ����ϴ� ���� ���� ����(�ý��۸��� ��°��� �ٸ� �� ����)
	int x = n / 2 * 5 * (1 + n++);
	int y = n++ + n++;	// ���� �����ڸ� ���� �� �����ؼ� ����ϴ� ���� ���� �����

	return 0;
}