#include <stdio.h>
#include <limits.h>

int main()
{

	// ��ȯ �������� ���ľ�� (Modifiers)

	printf("%10i\n", 1234567);
	printf("%-10i\n", 1234567);
	printf("%+i %+i\n", 123, -123);
	printf("% i \n% i\n", 123, -123);
	printf("%X\n", 17);
	printf("%#X\n", 17);		// #�� ���̸� 0�� ���
	printf("%05i\n", 123);
	printf("%*i\n", 7, 456);	// *�� ���̸� ���������� �ȿ��� �Է��� �ƴ� �Ķ���� ������ �Է��Ͽ� ���, ���� 7�� i ������ ���ٰ� �����ϸ� �� / scanf������ �ǹ̰� �ٸ�

	printf("\nPrecicsion\n");
	printf("%.3d\n", 1024);	// 3�� 4�ڸ������� �����Ƿ� �׳� ���
	printf("%.5d\n", 1024);	// 5�� 4�ڸ������� ũ�� ������ �� ������ 0���� ���
	printf("%.3f\n", 123456.1234567);	// �Ҽ��� �Ʒ� 3��°���� ��Ÿ���Ƿ� ������ ���ڴ� ����
	printf("%.3f\n", 123456.1235);	// �ݿø� �Ǵ� ���� Ȯ��
	printf("%10.3f\n", 123.45678);
	printf("%010.3f\n", 123.45678);
	printf("%.5s\n", "ABCDEFGHIJKLM");
	printf("%.s\n", "ABCDEFGHIJKLM");	// ���� 0�� ����ִ� �Ͱ� �����ϹǷ� �ƹ��͵� ��µ��� ����  / assumes .0 / string �Ӹ� �ƴ϶� decimal, float�� ��� ����

	printf("\nlength\n");
	printf("%hhd %hd %d\n", 257, 257, 257);
	printf("%d %lld %lld\n", INT_MAX + 1, INT_MAX + 1, 2147483648LL);	// x64�� x86 ũ�⿡�� ������ ���� �ٸ����� �˾Ƶ���



	return 0;
}