#include <stdio.h>

int main(void)
{
	// while �ݺ� �������� scanf()�� ��ȯ�� ����ϱ�

	//int i, sum = 0;
	//int status;

	//printf("Enter an integer (q to quit) : ");

	//status = scanf("%d", &i);	// return value of scanf()

	//while (status == 1)		// equality operator, true�� �Է�(1�� true�� �ǹ��ϱ� ����)
	//{
	//	sum += i;
	//	printf("Enter next integer (q to quit) : ");
	//	status = scanf("%d", &i);
	//}
	//
	//printf("Sum = %d\n", sum);


	// ���� �ڵ带 �����ϰ� �Է��ϴ� ���
	// scanf �� �Ʒ� �� �� �Է��ϱ� ������ �������� ���� �����ϰ� �Է��ϴ� ����̴�.
	int i, sum = 0;
	
	printf("Enter an integer (q to quit) : ");

	while (scanf("%d" , &i) == 1)		// scanf �Լ��� �ٷ� while���� �Է�
	{
		sum += i;

		printf("Enter next integer (q to quit) : ");

	}
	printf("Sum = %d\n", sum);
	

	return 0;
}