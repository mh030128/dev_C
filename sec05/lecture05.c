#include <stdio.h>

int main()
{
	// ������ ������
	printf("Integer division\n");	// ���� �κи� ǥ��
	printf("%d\n", 14 / 7);	// 2
	printf("%d\n", 7 / 2);		// 3.5 in floating division	// 3
	printf("%d\n", 7 / 3);		// 2.333 in floating division		// 2
	printf("%d\n", 7 / 4);		// 1.75 in floating division		// 1
	printf("%d\n", 8 / 4);		// 2

	printf("\nTruncating toward zero (C99)\n");	// ����
	printf("%d\n", -7 / 2);	// -3.5 in floating division		// -3
	printf("%d\n", -7 / 3);	// -2.333 in floating division	// -2
	printf("%d\n", -7 / 4);	// -1.75 in floating division		// -1
	printf("%d\n", -8 / 4);	// -2

	printf("\nFloating division\n");		// double, integer �� Ÿ���� �ٸ� �����̸� double�� ���(�Ŀ� ����ȯ ���� ���� ����)
	printf("%f\n", 9.0 / 4.0);
	printf("%f\n", 9.0 / 4);	// Note : 4 is integer

	return 0;
}