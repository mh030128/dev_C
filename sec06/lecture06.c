#include <stdio.h>
#include <stdbool.h>

int main()
{
	// _Bool 자료형 

	//int i;
	//i = 5;		// 대입연산자
	//i == 5;	// 비교연산자
	//5 = i;		// error (메모리 공간을 가지고 있지 않기 때문에 L-Value로 사용불가)
	//5 == i;	// not error (비교하는 것이기 때문)

	//while (i = 5) {/* do something*/ };
	//while (i == 5) {/*do something*/ };

	/*_Bool boolean_true = (2 > 1);
	_Bool boolean_false = (1 > 2);

	printf("True is %d\n", boolean_true);
	printf("False is %d\n", boolean_false);

	printf(boolean_true ? "true" : "false");
	printf("\n");
	printf(boolean_false ? "true" : "false");*/

	/* #include <stdbool.h> 입력 후 */

	// bool 색이 파란색이 아닌 보라색으로 나오는데 키워드가 아니기 때문
	/*
	#define bool  _Bool
	#define false 0
	#define true  1
	*/
	bool bt = true;
	bool bf = false;

	printf("\n");
	printf("True is %d\n", bt);
	printf("False is %d\n", bf);

	return 0;
}