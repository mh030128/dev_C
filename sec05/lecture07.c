#include <stdio.h>

int main()
{
	// ������ ������ Modulus Operator

	int seconds = 0, minutes = 0, hours = 0;
	
	/*
	* ������ �ޱ� ������ �ʸ� �Է¹����� ����ϰ�, ������ ������ �ʸ� ������� �ʰ�
	* Good bye�� ����ϴ� ���
	* ������ ó���� �������� �Է��� �޴°� �� �� �����Ƿ� ���� ���� �ڵ���. (���� ����� �ڵ�)
	* �̷��� ����� �ƴ� �� ���� �Է��Ͽ� ��µǴ� ����� ������ ��� ����
	*/ 
	
	//printf("Input seconds: ");
	//scanf("%d", &seconds);
	//
	//while (seconds >= 0)
	//{
	//	minutes = seconds / 60;
	//	seconds %= 60;

	//	hours = minutes / 60;
	//	minutes %= 60;

	//	// print result
	//	printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);

	//	printf("Input seconds: ");
	//	scanf("%d", &seconds);
	//}
	//printf("Good bye\n");

	// ������ �������� ��
	
	// �տ� �ִ� �ǿ����ڰ� ������ �������� �����ڴ� ������ ����

	int div, mod;
	
	div = 11 / 5;
	mod = 11 % 5;
	printf("div = %d, mod = %d\n", div, mod);	// 2, 1

	div = 11 / -5;	// �տ� �� �Ǵ� �ڿ� ���� ������ ���� ����
	mod = 11 % -5;	// �տ� ���� ����� �������� ���
	printf("div = %d, mod = %d\n", div, mod);	// -2, 1

	div = -11 / -5;
	mod = -11 % -5;	// fitst operand is negative
	printf("div = %d, mod = %d\n", div, mod);	// 2, -1

	div = -11 / 5;
	mod = -11 % 5;	// first operand is negative
	printf("div = %d, mod = %d\n", div, mod);	// -2, -1

	return 0;
}