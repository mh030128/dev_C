#include <stdio.h>
#include <math.h>	// fabs() : ���밪

int main()
{
	// ���� ������ Relational Operators
	// : �������� ���踦 �Ǵ�

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

	//while (guess != PI)		// �Ǽ����� ���� ���� != �����ڸ� �� ������� ����
	//{
	//	printf("Fool! Try again.\n");
	//	scanf("%lf", &guess);
	//}


	// �Ǽ����� ���� ���� ���������� ���ϴ� ���� ��Ʊ� ������ ���밪 �����Ϸ� ���
	while (fabs(guess - PI) > 0.01)
	{
		printf("Fool! Try again.\n");
		scanf("%lf", &guess);
	}

	printf("Good!");





	return 0;
}