#include <stdio.h>

int main()
{
	// 표현식(Expressions)과 문장(Statments)

	/*표현식에서 중요한 건 값을 계산할 수 있어야 함*/

	int x, y, apples;	// declaration statement
	apples = 3;		// assignment statement
	;		// null statement
	7;
	1 + 2;
	x = 4;
	++x;
	x = 1 + (y = 5);		// y = 5 is subexpression
	
	while (x++ <	10)		// while statement (structured statements)
		y = x + y;

	printf("%d\n", y);		// function statement

	// Side Effects and Sequence Points	부가적인 효과(부정X)
	// sequence points가 있으면 값을 계산해도 된다는 의미로 작동됨. ;(세미콜론)이 sequence points

	x = 4;		// main intent is evaluating expressions 주 의도는 값 계산 표현
	y = 1 + x++;

	while (x++ < 10)		// (x++ < 10) is a full expression
		printf("%d\n", x);

	y = (4 + x++) + (6 + x++);		// Not (4 + x++) nor (6 + x++) is a full expression



	return 0;		// return statement
}