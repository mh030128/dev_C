#include <stdio.h>
#include <stdbool.h>

int main()
{
	// _Bool �ڷ��� 

	//int i;
	//i = 5;		// ���Կ�����
	//i == 5;	// �񱳿�����
	//5 = i;		// error (�޸� ������ ������ ���� �ʱ� ������ L-Value�� ���Ұ�)
	//5 == i;	// not error (���ϴ� ���̱� ����)

	//while (i = 5) {/* do something*/ };
	//while (i == 5) {/*do something*/ };

	/*_Bool boolean_true = (2 > 1);
	_Bool boolean_false = (1 > 2);

	printf("True is %d\n", boolean_true);
	printf("False is %d\n", boolean_false);

	printf(boolean_true ? "true" : "false");
	printf("\n");
	printf(boolean_false ? "true" : "false");*/

	/* #include <stdbool.h> �Է� �� */

	// bool ���� �Ķ����� �ƴ� ��������� �����µ� Ű���尡 �ƴϱ� ����
	/*
	#define bool  _Bool
	#define false 0
	#define true  1
	*/
	bool bt = true;
	bool bf = false;

	printf("\n");
	printf("True is %d\n", bt);
	printf("False is %d\n", bf);

	return 0;
}