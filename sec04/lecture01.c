#include <stdio.h>

int main()
{


	//// ���ϴ� ���ڿ��� ����� �� ����. char�� 1byte�̱� ����.
	//// ���� ���ϴ� ���ڿ��� ����ϱ� ���ؼ��� �迭�� ���.
	//char fruit_name;
	//
	//printf("What is your favorite fruit?\n ");

	//scanf("%c", &fruit_name);

	//printf("You like %c!\n", fruit_name);

	char fruit_name[40];	// stores only one character.

	printf("What is your favorite fruit?\n");

	scanf("%s", fruit_name);	// be careful with &, %c�� �ƴ� %s(String)�� ����ؾ� ��.

	printf("You like %s!\n", fruit_name);

	return 0;

}