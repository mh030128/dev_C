#include <stdio.h>

int main()
{
	// �ڷ��� ��ȯ Type Conversions

	/* promotions in assignments */
	short s = 64;
	int i = s;

	float f = 3.14f;
	double d = f;

	/* demotion in assignments */
	d = 1.25;
	f = 1.25;	
	//f = 1.123;	// errors : truncation from 'double' to 'float', ������ ������ �� ������ �� ���� ������ ���� ������ ���� ������ �̹��ϰ� ����� ����

	/* ranking of types in operations */
	/*long double > double > float
	unsigned long long, long long
	unsigned long, long
	unsigned int
	short int, unsigned short int
	signed char, char, unsigned char
	_Bool

	�ؽǼ��� ���������� ranking�� ����. ������ ���� ������� ���������� ranking�� ����

	Ref : Google 'Integer conversion rank'
	*/
	d = f + 1.234;	// double = float + double�� �Ͻ������� float���� double�� ��ȯ�Ͽ� ���� ����Ͽ� double���� ����
	f = f + 1.234;	// errors : conversion from 'double' to 'float', possible loss of data

	/* automatic promotion of function arguments */
	// �ڿ� ���Ŀ� �ٽ� ����
	// 1. Function without prototypes	������Ÿ���� ���� �Լ� (���򿡴� �� ������� ����)
	// 2. Variadic functions	ex)printf �Լ�... �μ��� ���� �� �ִ� �Լ� (���Ŀ� �ٽ� ����) (��� ���α׷��� �� �� ����ϹǷ� �˾Ƶδ� ���� ����)

	/* casting operators */
	d = (double)3.14f;	// expression�� ���� double�� ��ȯ		3.140000
	i = 1.6 + 1.7;	// double + double�� �Ǽ������� integer�� �����ϹǷ� ����Ǳ� ������ ��°��� 3
	i = (int)1.6 + (int)1.7;	// ����ȯ�ϹǷ� 1 + 1 = 2 

	/* more examples */
	char c;
	// int i;
	// float f;
	f = i = c = 'A';		// 65
	printf("%c %d %f\n", c, i, f);
	c = c + 2;		// A(65) + 2 = C, 'C'�� 67
	i = f + 2 * c;	// 65.0f + 2 * 67		�츮�� �������� ���� �������� ������ ���α׷� �����ϸ� ������ ���Ǵ� ���� ���� ����
	printf("%c %d %f\n", c, i, f);	// 199
	c = 1106;	// demolition, 1106 = 0b10001010010, ob1010010 = 1106 % 256 = 82 = 'R'	������ �����ڸ� ������ �Ŷ� ���� �ǹ�
	printf("%c\n", c);
	c = 83.99;	// �ݿø��� �ƴ� �����ϹǷ� 83 = 'S'
	printf("%c\n", c);

	return 0;
}