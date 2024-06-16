#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
	/*
	* unsigned int i = 0;

	printf("%u\n", sizeof(unsigned int));	// ����Ϸ��� �����Ͱ� unsigned�� u�� ���
	printf("%u", sizeof(i));
	*/

	// unsigned int i = 0b11111111111111111111111111111111;	// 2���� ��� �� 0b�Է� (0b�� C��� ǥ���� �ƴ�)

	/*
	unsigned int u_max = UINT_MAX;
	unsigned int u_min = 0;
	signed int i_max = INT_MAX;
	signed int i_min = INT_MIN;

	// printf("%u\n", i);	// 2^32�� ��
	printf("max of unit = %u\n", u_max);
	printf("min of unit = %u\n", u_min);	// ��ũ�ΰ� ����. unsigned�� ���� ���� ���� 0
	printf("max of int = %d\n", i_max);
	printf("min of int = %d\n", i_min);
	*/

	/*
	overflow
	unsigned int u_max = UINT_MAX + 1;
	printf("%u\n", u_max);	// 0
	*/

	/*
	unsigned int u_max = UINT_MAX;

	// i to binary representation
	// u_max�� ��� �ִ� ���ڸ� 2������ ��ȯ
	_itoa(u_max, buffer, 2);

	// print decimal and binary
	// 2���� ���·� ���
	printf("decimal : %u\n", u_max);
	printf("binary : %s\n", buffer);
	*/

	// �پ��� ��������
	char c = 65;
	short s = 200;
	unsigned int ui = 3000000000U;
	long l = 65537L;
	long long ll = 12345678908642LL;

	printf("char = %hhd, %d, %c\n", c, c, c);
	printf("short = %hhd, %hd, %d\n", s, s, s);
	printf("unsigned int = %u, %d\n", ui, ui);
	printf("long = %ld, %hd\n", l, l);
	printf("long long = %lld, %ld\n", ll, ll);


	return 0;
}