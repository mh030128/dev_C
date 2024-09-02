#include <stdio.h>

int main()
{
	// 더하기(Addition), 빼기(Subtraction), 부호(Sign) 연산자들

	printf("%d\n", 1 + 2);

	int income, salary, bonus;		// dataObject, L-Value

	income = salary = bonus = 100;	//	 triple ssignment

	salary = 100;
	bonus = 30;

	income = salary + bonus;	// L-value vs R-Value	(salary + bonus 더한 값은 일시적으로 R-Value)

	int takehome, tax;
	tax = 20;
	takehome = income - tax;

	// 부호 연산자
	int a, b;
	a = -7;
	b = -a;
	b = +a;		// + does nothing (+연산을 붙이지 않아도 되지만 붙이고 싶으면 앞에 주석을 붙여서 사용해도 됨, -연산은 표현할 때 붙여줘야 함)

	1.0f + 2;		// float 자료형으로 저장됨

	return 0;
}