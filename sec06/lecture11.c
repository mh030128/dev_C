#include<stdio.h>

int main() {

	// for문 안에 콤마(,)를 사용함으로써 한 줄로 작성 가능
	// 하지만 제약이 있음 (다른 타입으로는 사용 불가능)

	// Note that commas in printf() are not comma operators
	// but separators

	/*for (int n = 1, nsqr = n * n; n < 10; n++, nsqr = n * n)
		printf("%d %d\n", n, nsqr);*/


	//int i, j;
	//i = 1;
	//i++, j = i;	// comma is a sequence point 즉 후위연산자 다음 콤마가 있으므로 연산이 된 후 다음 연산이 실행됨
	//printf("%d %d\n", i, j);		// 2 2


	//int x, y, z;
	//z = x = 1, y = 2;
	//printf("x=%d, y=%d, z=%d \n", x, y, z);		// x=1, y=2, z=1
	//z = (x = 1), (y = 2);
	//printf("x=%d, y=%d, z=%d \n", x, y, z);		// x=1, y=2, z=1
	//z = ((x = 1), (y = 2));
	//printf("x=%d, y=%d, z=%d \n", x, y, z);		// x=1, y=2, z=2


	// int my_money = 123,456;		// error
	int my_money = (123, 456);
	printf("%d\n", my_money);		// 456
	
	// 콤마 연산자는 left -> right 로 연산
	// simple assignment는 right -> left 로 연산

	return 0;

}