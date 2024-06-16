#include <stdio.h>

int main()
{
	// 자료형 변환 Type Conversions

	/* promotions in assignments */
	short s = 64;
	int i = s;

	float f = 3.14f;
	double d = f;

	/* demotion in assignments */
	d = 1.25;
	f = 1.25;	
	//f = 1.123;	// errors : truncation from 'double' to 'float', 위에는 에러가 안 나지만 이 식은 에러가 나는 이유는 절삭 오류가 미묘하게 생기기 때문

	/* ranking of types in operations */
	/*long double > double > float
	unsigned long long, long long
	unsigned long, long
	unsigned int
	short int, unsigned short int
	signed char, char, unsigned char
	_Bool

	※실수가 정수형보다 ranking이 높음. 위에서 적은 순서대로 내려갈수록 ranking이 낮음

	Ref : Google 'Integer conversion rank'
	*/
	d = f + 1.234;	// double = float + double은 일시적으로 float형이 double로 변환하여 값을 계산하여 double형에 대입
	f = f + 1.234;	// errors : conversion from 'double' to 'float', possible loss of data

	/* automatic promotion of function arguments */
	// 뒤에 추후에 다시 공부
	// 1. Function without prototypes	프로토타입이 없는 함수 (요즘에는 잘 사용하지 않음)
	// 2. Variadic functions	ex)printf 함수... 인수가 변할 수 있는 함수 (추후에 다시 공부) (고급 프로그램을 할 때 사용하므로 알아두는 것이 좋음)

	/* casting operators */
	d = (double)3.14f;	// expression의 값은 double로 변환		3.140000
	i = 1.6 + 1.7;	// double + double은 실수이지만 integer에 대입하므로 절삭되기 때문에 출력값은 3
	i = (int)1.6 + (int)1.7;	// 형변환하므로 1 + 1 = 2 

	/* more examples */
	char c;
	// int i;
	// float f;
	f = i = c = 'A';		// 65
	printf("%c %d %f\n", c, i, f);
	c = c + 2;		// A(65) + 2 = C, 'C'는 67
	i = f + 2 * c;	// 65.0f + 2 * 67		우리가 보여지는 것은 문자지만 실제로 프로그램 구현하면 정수로 계산되는 것을 잊지 말자
	printf("%c %d %f\n", c, i, f);	// 199
	c = 1106;	// demolition, 1106 = 0b10001010010, ob1010010 = 1106 % 256 = 82 = 'R'	나머지 연산자를 적용한 거랑 같은 의미
	printf("%c\n", c);
	c = 83.99;	// 반올림이 아닌 절삭하므로 83 = 'S'
	printf("%c\n", c);

	return 0;
}