#include <stdio.h>

#define SIZE 5

int main() {
	
	// for 루프를 배열과 함께 사용

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
		Debugger 사용 시 dummy 입력하면 눈에 보기 좋음
	*/

	int numbers[SIZE];
	int sum = 0;
	int i;

	printf("Enter %d numbers : \n", SIZE);

	// for문을 기능별로 쪼개서 작성하는 것도 효율적임 (양이 적을 때는 같이 사용할 수 있지만 양이 많으면 나눠서 작성하는 것이 좋음)
	for (i = 0; i < SIZE; i++) {
		scanf("%d", &numbers[i]);
	}
	for(i=0; i<SIZE; i++){
		sum += numbers[i];
		
	}
	printf("sum = %d\n", sum);





	return 0;
}