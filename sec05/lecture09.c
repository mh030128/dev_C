#include <stdio.h>

int main()
{
	// ǥ����(Expressions)�� ����(Statments)

	/*ǥ���Ŀ��� �߿��� �� ���� ����� �� �־�� ��*/

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

	// Side Effects and Sequence Points	�ΰ����� ȿ��(����X)
	// sequence points�� ������ ���� ����ص� �ȴٴ� �ǹ̷� �۵���. ;(�����ݷ�)�� sequence points

	x = 4;		// main intent is evaluating expressions �� �ǵ��� �� ��� ǥ��
	y = 1 + x++;

	while (x++ < 10)		// (x++ < 10) is a full expression
		printf("%d\n", x);

	y = (4 + x++) + (6 + x++);		// Not (4 + x++) nor (6 + x++) is a full expression



	return 0;		// return statement
}