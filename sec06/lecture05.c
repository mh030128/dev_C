#include <stdio.h>

int main()
{
	// 사실과 거짓

	/*int tv, fv;
	tv = (1 < 2);
	fv = (1 > 2);

	printf("True is %d\n", tv);	// 1
	printf("False is %d\n", fv);	// 0
	*/

	int i = -5;
	// 0이면 false이고, 그 외에 값은 true이다. (위에와 다르다는 것을 알아두자)
	while (i)
		printf("%d is true\n", i++);
	printf("%d is false\n", i);

	while (1)		// 항상 참임을 의미
	{
		
	
	}



	return 0;
}