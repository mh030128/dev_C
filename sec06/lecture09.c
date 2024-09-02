#include <stdio.h>

int main()
{
	// for는 유연

	/*
		for(initailize; test; update)
			statement
	*/

	for (int i = 10; i > 0; i--)
		printf("%d ", i);
	
	printf("\n");

	for (int i = 0; i < 100; i += 8)
		printf("%d ", i);
	
	printf("\n");

	for (char c = 'A'; c <= 'Z'; c++)
		printf("%c ", c);
	
	printf("\n");

	for (int i = 0; i * i < 10; i++)
		printf("%d ", i);

	printf("\n");

	for (int x = 1, y = 5; y <= 20; y = (++x * 3) + 10)
		printf("%d ", x);

	printf("\n");

	for (double d = 100.0; d < 300; d *= 1.1)
		printf("%f", d);

	printf("\n");

	//int i, n;
	//n = 2;
	//for (i = 2; n < 10; /* left blank*/)
	//{
	//	n *= i;
	//	printf("%d\n", n);

	//}

	printf("\n");

	//for ( ; ; )	// = while(1)이랑 같음
	//	printf("I love you!");		// 무한 루프
	//
	//printf("\n");

	// 웬만하면 사용하지 않은 것이 좋다
	int i = 0;
	for (printf("Let's go!\n"); i != 7; scanf("%d", &i))
		;	// null statement
	return 0;
}