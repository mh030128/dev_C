#include <stdio.h>

// ������ ���Ƽ� �򰥸� �� ������ �� Ȯ���ϰ� ���� ��

/*
	�츮�� �ַ� main �Լ��� ���� �����.���� ���� �÷ȴ� ���ȴ� �ϴ� ���� 
	������ ���� �ֱ� ������ ������Ÿ������ �и��ؼ� �ۼ�����.

*/
int compute_pow(int base, int exp);

int main() {

	// 3�� 4����

	int base, exp, i, result;
	/*while (scanf("%d %d", &base, &exp) == 2)
	{
		result = 1;
		for (i = 0; i < exp; i++) {
			result *= base;
		}
		printf("result = %d\n", result);
	}*/

	// main �ۿ��� �Լ� ���� ���
	while (scanf("%d %d", &base, &exp) == 2)
	{
		result = compute_pow(base, exp);
		printf("result = %d\n", result);
	}

	return 0;
}

int compute_pow(int base, int exp)
{
	int i, result;	// main �Լ� �ȿ��� �����ߴ� �ص� ���� ��������� ��. 

	result = 1;
	for (i = 0; i < exp; i++) {
		result *= base;
	}
	return result;
}