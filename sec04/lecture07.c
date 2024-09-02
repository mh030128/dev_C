#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	// printf(����-���ڿ�, ������1, ������2...)
	// ������ �Է°��� ����, ���, ǥ���� ���� ����.

	/*
		%a : �ε��Ҽ��� ��, 16����, p-ǥ���
		&A	 : �ε��Ҽ��� ��, 16����, p-ǥ���
		%c : �� ����(���� 1��(character))
		%d (�Ǵ� %i) : ��ȣ�� �ִ� 10��(decimal) ����(integer)
		%e : �ε� �Ҽ��� ��, e-ǥ���
		%E : �ε� �Ҽ��� ��, E-ǥ���
		%f : �ε� �Ҽ��� ��, 10���� ǥ��
		%g : ���� ���� %e�� %f ���. ������ -4���� �۰ų� ���е����� ũ�ų� ���� ��쿡�� %e ���
		%G : ���� ���� %E�� %f ���. ������ -4���� �۰ų� ���е����� ũ�ų� ���� ��쿡�� %E ���
		%o : ��ȣ�� ���� 8��(octal) ����
		%p : ������
		%s : ���ڿ�, str() ���� �Լ�
		%u : ��ȣ�� ���� 10�� ����
		%x : ��ȣ�� ���� 16�� ����, �ҹ��� ���ĺ� ���
		%X : ��ȣ�� ���� 16�� ����, �빮�� ���ĺ� ���
		%% : �ۼ�Ʈ ��ȣ ��
		%r : repr() �����Լ�
	*/

	double d = 3.1415926535897932384626433832795028841971693993751058209749445;

	printf("%c\n", 'A');
	printf("%s", "I love you\n");		// ���ڿ� ���� �ƴ� ����� ���� �ȿ��ٰ� \n �Է�
	printf("Even if there's a small chance, \
we owe this to everyone who's not in this room to try.\n");		// �ٹٲ� �Ϸ���  \ �� �Է�

	printf("\n");
	printf("%d %i %i %i\n", 1004, 1234, INT_MAX, UINT_MAX);		// Note overflow
	printf("%u %u %u\n", 1024, -1, UINT_MAX);		// Note overflow

	printf("\n");
	printf("%f %f %lf\n", 3.141592f, d, d);		// l in %lf is ignored
	printf("%a %A\n", d, d);
	printf("%e %E\n", d, d);

	printf("\n");
	printf("%g %g\n", 123456.789, 1234567.89);
	printf("%G %G\n", 123456.789, 1234567.89);
	printf("%g %g\n", 0.00012345, 0.000012345);
	printf("%G %G\n", 0.00012345, 0.000012345);

	printf("\n");
	printf("%o\n", 9);
	printf("%p\n", &d);		// pointer-of perator

	printf("\n");
	printf("%x %X\n", 11, 11);
	printf("%%\n", d);		// Note the warning. d is ignored.

	printf("\n");
	printf("%9d\n", 12345);
	printf("%09d\n", 12345);
	printf("%.2f\n", 3.141592);		// �Ҽ��� �Ʒ� ���ڸ����� ���
	printf("%.20f %.20lf\n", d, d);

	printf("\n");
	int n_printed = printf("Counting!");	// printf �Լ��� return ���� ����� ���� ���� 
	printf("%u\n", n_printed);	// 9 : Counting!�� ���� ����

	return 0;
}