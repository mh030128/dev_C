#include <stdio.h>

int main()
{
	// for ���� �Ұ�
	
	// Idefinite(���������� ����) loop vs. Counting loop
	//while (1)
	//{
	//	// do something
	//}

	/*
		Counting Loop
		1. Counter initialization
		2. Counter check
		3. Counter change
	*/

	//int i;

	//i = 1;
	//while (i <= 10)		// Note : <=
	//{
	//	printf("%d ", i);
	//	i++;
	//}

	// ���� �ڵ带 for�� ����Ͽ� ���� ��� ����
	//int i;	// �Ʒ��� ���� �� ����

	for (int i = 1; i <= 10; i++)	// ����� �����غ��� i++ Ȯ�� �� i<=10 Ȯ�� 
		printf("%d ", i);	// ������ ���������� { } �Է� �� �ص� ��
	

	return 0;
}