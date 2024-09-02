#include <stdio.h>
#define PI 3.141592f	// define으로 무언갈 선언할 때는 대문자로 정의
#define AI_NAME "Friday"	// String은 ""를 붙이는 것을 잊지 말자.

int main()
{
	float radius, area, circum;

	// PI를 #define으로 선언하지 않는다면 const float pi = 3.141592f; 이런식으로 정의도 가능
	// const를 붙임으로써 해당 변수의 값을 변경할 수 없기 때문.

	// #define으로 선언하면 이름(AI_NAME)이 바뀌었어도 하나하나 찾아다니지 않고 선언된 이름만 변경하면 되기 때문에 이렇게 작성하는 것이 더 효율적임
	printf("I'm %s\n", AI_NAME);
	printf("Please, input radius : ");

	scanf("%f", &radius);

	area = PI * radius * radius;	// area = pi * r * r
	circum = 2.0f * PI * radius;	// circum = 2.0 * pi * r

	printf("Area is %f\n", area);
	printf("Circumference is %f\n", circum);

	// TODO : wrong usage, strings, const

	return 0;
}