#include <stdio.h>
#define PI 3.141592f	// define���� ���� ������ ���� �빮�ڷ� ����
#define AI_NAME "Friday"	// String�� ""�� ���̴� ���� ���� ����.

int main()
{
	float radius, area, circum;

	// PI�� #define���� �������� �ʴ´ٸ� const float pi = 3.141592f; �̷������� ���ǵ� ����
	// const�� �������ν� �ش� ������ ���� ������ �� ���� ����.

	// #define���� �����ϸ� �̸�(AI_NAME)�� �ٲ��� �ϳ��ϳ� ã�ƴٴ��� �ʰ� ����� �̸��� �����ϸ� �Ǳ� ������ �̷��� �ۼ��ϴ� ���� �� ȿ������
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