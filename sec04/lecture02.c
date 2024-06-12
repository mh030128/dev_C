#include <stdio.h>
#include <stdlib.h>	// malloc()

// ����ü
struct MyStruct
{
	int i;
	float f;
};

int main()
{

	// 1. sizeof basic types

	//int a = 0;
	//unsigned int int_size1 = sizeof a;
	//unsigned int int_size2 = sizeof(int);	// ù ��°���� �� ��°, �� ���縦 ���� ���
	//unsigned int int_size3 = sizeof(a);		// ù ��°���� �� ��°, �� ���縦 ���� ���

	//size_t int_size4 = sizeof(a);	// size_t�� unsigned
	//size_t float_size = sizeof(float);

	//printf("Size of int type is %u bytes. \n", int_size1);		// 4
	//printf("Size of int type is %zu bytes. \n", int_size4);		// 4
	//printf("Size of float tye is %zu bytes. \n", float_size);	// 4


	// 2. sizeof arrays

	//int int_arr[30];	// int arr[0] = 1024...		int_arr�� 30�� �޸� ������ ��ǥ�ϴ� �޸��� �ּ��� �� �� �ּ� �ǹ�
	//int *int_ptr = NULL;
	//int_ptr = (int*)malloc(sizeof(int) * 30);	// int_ptr[0] = 1024...

	//printf("Size of array = %zu bytes\n", sizeof(int_arr));		// 120
	//printf("Size of pointer = %zu bytes\n", sizeof(int_ptr));	// 8(x64), 4(x86)

	// 3.  sizeof character array

	//char c = 'a';
	//char string[10];	// maximally 9 character + '/0' (string�� null character�� �������� �߰�)

	//size_t char_size = sizeof(char);
	//size_t str_size = sizeof(string);

	//printf("Size of char type is %zu bytes. \n", char_size);	// 1
	//printf("Size of string type is %zu bytes. \n", str_size);	// 10

	// 4. sizeof structure

	printf("%zu\n", sizeof(struct MyStruct));	// 8 (int���� float���� ���� ���� ����. ���Ŀ� �ٽ� �н�)

	return 0;
}