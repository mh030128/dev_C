#include <stdio.h>

int main()
{
	// ���ϱ�(Addition), ����(Subtraction), ��ȣ(Sign) �����ڵ�

	printf("%d\n", 1 + 2);

	int income, salary, bonus;		// dataObject, L-Value

	income = salary = bonus = 100;	//	 triple ssignment

	salary = 100;
	bonus = 30;

	income = salary + bonus;	// L-value vs R-Value	(salary + bonus ���� ���� �Ͻ������� R-Value)

	int takehome, tax;
	tax = 20;
	takehome = income - tax;

	// ��ȣ ������
	int a, b;
	a = -7;
	b = -a;
	b = +a;		// + does nothing (+������ ������ �ʾƵ� ������ ���̰� ������ �տ� �ּ��� �ٿ��� ����ص� ��, -������ ǥ���� �� �ٿ���� ��)

	1.0f + 2;		// float �ڷ������� �����

	return 0;
}