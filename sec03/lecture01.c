#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int i = 0, j = 0;	// ���� ������ �� �ʱ�ȭ�ϴ� ���� ����!
	int sum = 0;

	printf("Input two integers\n");

	scanf("%d %d", &i, &j);	// ��ĭ�� ������ �������(%d %d)

	sum = i + j;

	printf("Value is %d, %d\nSum is %d\n", i, j, sum);

	return 0;
}