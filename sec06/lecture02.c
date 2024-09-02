#include <stdio.h>

int main()
{
	// 의사코드 (Pseudocode)
	
	int i, sum = 0;
	int status;

	printf("Enter an integer (q to quit) : ");

	status = scanf("%d", &i);	// return value of scanf()

	while (status == 1)		// equality operator, true값 입력(1은 true를 의미하기 때문)
	{
		sum += i;
		printf("Enter next integer (q to quit) : ");
		status = scanf("%d", &i);
	}

	printf("Sum = %d\n", sum);

	// sum을 0으로 초기화 한다.
	// 사용자에게 안내한다.  
	// 사용자에게 입력을 받는다. (아래는 while문 의미)   
		// 그 입력이 정수인 동안에는 그 입력을 sum에 더한다.    
		// 사용자에게 안내한다.   
		// 사용자에게 다음번 입력을 받는다.  
	// sum을 출력한다.

	// Initialize sum to 0
	// Prompt user
	// Read input
	// While the input is an integer
		// Add the input to sum,
		//  Prompt user,
		// Then read next input 
	//After input complete, print sum


	while (scanf("%d", &i) == 1)		// scanf 함수를 바로 while문에 입력
	{
		// do something with i
	}

	// While getting and testing the value succeeds
		// Process the value


	return 0;
}