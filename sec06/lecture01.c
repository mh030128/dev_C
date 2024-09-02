#include <stdio.h>

int main(void)
{
	// while 반복 루프에서 scanf()의 반환값 사용하기

	//int i, sum = 0;
	//int status;

	//printf("Enter an integer (q to quit) : ");

	//status = scanf("%d", &i);	// return value of scanf()

	//while (status == 1)		// equality operator, true값 입력(1은 true를 의미하기 때문)
	//{
	//	sum += i;
	//	printf("Enter next integer (q to quit) : ");
	//	status = scanf("%d", &i);
	//}
	//
	//printf("Sum = %d\n", sum);


	// 위에 코드를 간결하게 입력하는 방법
	// scanf 위 아래 두 번 입력하기 때문에 가독성을 위해 간결하게 입력하는 방법이다.
	int i, sum = 0;
	
	printf("Enter an integer (q to quit) : ");

	while (scanf("%d" , &i) == 1)		// scanf 함수를 바로 while문에 입력
	{
		sum += i;

		printf("Enter next integer (q to quit) : ");

	}
	printf("Sum = %d\n", sum);
	

	return 0;
}