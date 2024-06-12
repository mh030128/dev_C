#include<stdio.h>

void say_hello(void);	// prototytping, function declaration

int main()
{
	say_hello();
	say_hello();
	say_hello();
	say_hello();
	say_hello();
	say_hello();

	return 0;
}

void say_hello(void)	// function defination
{
	printf("Helllo, World!\n");

	return;
}