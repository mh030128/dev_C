#include <stdio.h>

#define SIZE 5

int main() {
	
	// for ������ �迭�� �Բ� ���

	/* Motivation */
	//int i1 = 0;
	//int i2 = 1;
	//int i3 = 2;
	//// ...

	//printf("%d\n", i1);
	//printf("%d\n", i2);
	//printf("%d\n", i3);
	// ...

	//int my_arr[SIZE];

	//// prepare for array data
	//for (int i = 0; i < SIZE; i++) {
	//	my_arr[i] = i;
	//}

	//// print array data
	//for (int i = 0; i < SIZE; i++) {
	//	printf("%d ", my_arr[i]);
	//}

	// try debugger
	/*
		Debugger ��� �� dummy �Է��ϸ� ���� ���� ����
	*/

	int numbers[SIZE];
	int sum = 0;
	int i;

	printf("Enter %d numbers : \n", SIZE);

	// for���� ��ɺ��� �ɰ��� �ۼ��ϴ� �͵� ȿ������ (���� ���� ���� ���� ����� �� ������ ���� ������ ������ �ۼ��ϴ� ���� ����)
	for (i = 0; i < SIZE; i++) {
		scanf("%d", &numbers[i]);
	}
	for(i=0; i<SIZE; i++){
		sum += numbers[i];
		
	}
	printf("sum = %d\n", sum);





	return 0;
}