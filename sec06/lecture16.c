#include <stdio.h>

#define NUM_DAYS 365

int main() {
	
	// �迭(array)�� ��Ÿ��(runetime) ����

	//char my_chars[] = "Hello, World!";

	//// �迭����
	//int daily_temperature[NUM_DAYS];
	//double stock_prices_history[NUM_DAYS];

	//printf("%zd\n", sizeof(stock_prices_history));	// 2920
	//printf("%zd\n", sizeof(double) * NUM_DAYS);		// 2920
	//printf("%zd\n", sizeof(stock_prices_history[0]));	// 8

	int my_numbers[5];

	//my_numbers[0] = 1;		// subscripts, indices, offsets
	//my_numbers[1] = 3;
	//my_numbers[2] = 4;
	//my_numbers[3] = 2;
	//my_numbers[4] = 1024;

	//// &my_numbers[0] = my_numbers�� ����
	//scanf("%d", my_numbers);

	//for (int i = 0; i < 5; i++) {
	//	printf("%d\n", my_numbers[i]);
	//}
	///*printf("%d\n", my_numbers[0]);
	//printf("%d\n", my_numbers[1]);
	//printf("%d\n", my_numbers[2]);
	//printf("%d\n", my_numbers[3]);
	//printf("%d\n", my_numbers[4]);*/

	/* Runtime Error */
	//my_numbers[5] = 123;		// out of boud	������ �� ���� error�� �� �����
	////my_numbers = 7;	// compile error
	//printf("%d\n", my_numbers[5]);		// out of bound

	return 0;
}