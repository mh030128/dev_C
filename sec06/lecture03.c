#include <stdio.h>

int main()
{
	// 진입조건 루프 (Entry-Condition Loop) While

	/*
	while (expression)
			statement

	// expression이 이론적으로는 true, false를 말하고, 프로그래밍에서는 0이면 false를 의미
	*/

	int i;

	//i = 1;		// infinite loop
	/*while (i < 5)
		printf("Hi\n");*/

	//while (--i < 5)	// wrong direction
	//	printf("Hi\n");

	/*while (i < 5)
	{
		printf("i before = %d\n", i);
		i++;
		printf("i after = %d\n", i);
	}*/

	//i = 10;
	//while (i++ < 5)	// cannot enter
	//{
	//	printf("Hi\n");
	//}

	//i = 0;
	//while (i < 3)
	//	printf("%i\n", i);
	//	i++;		// indenting	

	//i = 0;
	//while (i++ < 3);		// null statement
	//printf("%i\n", i);

	while (scanf("%d", &i) == 1)
		;	// null statement
	// do something(?)

	// 암호보다는 의미를 직접 전달하는 코드를 입력하자

	return 0;
}