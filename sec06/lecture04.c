#include <stdio.h>
#include <math.h>	// fabs() : 절대값

int main()
{
	// 관계 연산자 Relational Operators
	// : 데이터의 관계를 판단

	/*
		Relational Operators
		<		is less than
		<=		is less than or equal to
		==		is equal to
		>=		is greater than or equal to
		>		is greater than
		!=		is not equal to
	*/

	//int n = 0;
	//while (n++ < 5)		// n++ < 5 is a relational expression
	//	printf("%d ", n);	// 1 2 3 4 5

	//printf("\n");

	//char c = 'A';
	//while (c != 'Z')
	//	printf("%c ", c++);

	const double PI = 3.1415926535897932384626433832795;
	double guess = 0.0;

	printf("Input pi : ");
	scanf("%lf", &guess);

	//while (guess != PI)		// 실수끼리 비교할 떄는 != 연산자를 잘 사용하지 않음
	//{
	//	printf("Fool! Try again.\n");
	//	scanf("%lf", &guess);
	//}


	// 실수끼리 비교할 때는 직접적으로 비교하는 것이 어렵기 때문에 절대값 컴파일러 사용
	while (fabs(guess - PI) > 0.01)
	{
		printf("Fool! Try again.\n");
		scanf("%lf", &guess);
	}

	printf("Good!");





	return 0;
}