#include <stdio.h>

int main()
{
	// 관계연산자의 우선순위
	int x = 1, y = 2, z;

	x > y + 2;
	x > (y + 2);

	x = y > 2;
	x = (y > 2);

	z = x > y;
	z = (x > y);

	x != y == z;		// != 와 ==는 우선순위가 같기 때문에
	(x != y) == z;	// 왼쪽에서 오른쪽으로 연산이 됨

	return 0;
}