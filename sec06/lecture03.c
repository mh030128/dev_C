#include <stdio.h>

int main()
{
	// �������� ���� (Entry-Condition Loop) While

	/*
	while (expression)
			statement

	// expression�� �̷������δ� true, false�� ���ϰ�, ���α׷��ֿ����� 0�̸� false�� �ǹ�
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

	// ��ȣ���ٴ� �ǹ̸� ���� �����ϴ� �ڵ带 �Է�����

	return 0;
}