#include <stdio.h>

int main()
{


	//// 원하는 문자열을 출력할 수 없음. char는 1byte이기 때문.
	//// 따라서 원하는 문자열을 출력하기 위해서는 배열을 사용.
	//char fruit_name;
	//
	//printf("What is your favorite fruit?\n ");

	//scanf("%c", &fruit_name);

	//printf("You like %c!\n", fruit_name);

	char fruit_name[40];	// stores only one character.

	printf("What is your favorite fruit?\n");

	scanf("%s", fruit_name);	// be careful with &, %c가 아닌 %s(String)을 사용해야 함.

	printf("You like %s!\n", fruit_name);

	return 0;

}