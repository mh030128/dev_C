#include <stdio.h>

int main()
{
	// �ǻ��ڵ� (Pseudocode)
	
	int i, sum = 0;
	int status;

	printf("Enter an integer (q to quit) : ");

	status = scanf("%d", &i);	// return value of scanf()

	while (status == 1)		// equality operator, true�� �Է�(1�� true�� �ǹ��ϱ� ����)
	{
		sum += i;
		printf("Enter next integer (q to quit) : ");
		status = scanf("%d", &i);
	}

	printf("Sum = %d\n", sum);

	// sum�� 0���� �ʱ�ȭ �Ѵ�.
	// ����ڿ��� �ȳ��Ѵ�.  
	// ����ڿ��� �Է��� �޴´�. (�Ʒ��� while�� �ǹ�)   
		// �� �Է��� ������ ���ȿ��� �� �Է��� sum�� ���Ѵ�.    
		// ����ڿ��� �ȳ��Ѵ�.   
		// ����ڿ��� ������ �Է��� �޴´�.  
	// sum�� ����Ѵ�.

	// Initialize sum to 0
	// Prompt user
	// Read input
	// While the input is an integer
		// Add the input to sum,
		//  Prompt user,
		// Then read next input 
	//After input complete, print sum


	while (scanf("%d", &i) == 1)		// scanf �Լ��� �ٷ� while���� �Է�
	{
		// do something with i
	}

	// While getting and testing the value succeeds
		// Process the value


	return 0;
}