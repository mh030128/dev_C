#include <stdio.h>

int main()
{
	char c = 'A';
	char d = 65;
	char e = '*';

	printf("%c %hhd\n", c, c);
	printf("%c %hhd\n", d, d);
	printf("%c %hhd\n", e, e);

	printf("%c \n", c + 1);		// 65(A) + 1 = 66(B)

	char a = '\a';	// \�� ������ ��Ÿ��
	printf("%c", a);
	printf("\07");
	printf("\x7");

	printf("\x23\n");	// # : 16������ 23�̱� ������ x�� �տ� ���̰� 23�� �Է�

	float salary;
	printf("$______\b\b\b\b\b\b");	// \b�� backspace�� �ǹ�
	// scanf("%f", &salary);

	printf("AB\tCDEF\n");
	printf("ABC\tDEF\n");

	printf("\\ \'HA+\' \"Hello\" \?\n");	// \\�� �ڿ� \�� ���, \'�� ��������ǥ ���, 


	return 0;
}