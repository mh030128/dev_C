#include <stdio.h>

int main()
{
	//int a = 1;
	//int int_arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };		// �ʱ�ȭ�ϴ� ��� �� �ϳ�

	//printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]);	// 0 1 9

	//printf("%i\n", int_arr[10000]);		// �ʱ�ȭ�� �ͺ��� ū ���� �Է��ϸ� �ȵ�

	//char c = 'a';
	//char str1[10] = "Hello";	// null character (=Hello\n)
	//char str2[10] = { 'H', 'i' };

	//printf("%c\n", c);		// a
	//printf("%s\n", str1);	// Hello
	//printf("%s\n", str2);	// Hi

	//printf("%hhi %hhi %hhi %hhi %hhi\n", str2[0], str2[1], str2[2], str2[3], str2[4]);
	// 72 105 0 0 0

	// array size is not enough	char[13]���� �ߴµ� �� 12���������� �ڿ� \0(null)�� �����ϹǷ� 13���ڷ� ��
	//char str3[10] = "Hello, World";	// ������ �츮�� 10���� �������� �ʱ�ȭ �߱� ������ ������ ũ�Ⱑ �Ѿ����Ƿ� ������ ��

	char str3[20] = "Hello, \0World";
	printf("%s\n", str3);	// \0(null)�� ������ �ڿ��� ����� ���� ����	Hello,
	printf("%hhi\n", str3[10]);	//114
	printf("%c\n", str3[10]);		// r
	printf("%c\n", str3[11]);		// l
	// ������ %hhi�� %c�� ����ϴ� ���� ���� �޸𸮿��� ����Ǿ� ������ printf �Լ��� ����� �� /0(null)�� ������ ������� �ʴ� ���� Ȯ���� �� ����

	return 0;
}