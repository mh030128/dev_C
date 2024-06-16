#include <stdio.h>

int main()
{
	// 증가(++), 감소(--) 연산자 => 증감연산자
	/*
	int a = 0;
	a++;	// 후위연산자	a = a + 1 or a += 1;
	printf("%d\n", a);		// 1

	++a;	// 전위연산자	a = a + 1 or a += 1;
	printf("%d\n", a);		// 2

	double b = 0;
	b++;
	printf("%f\n", b);		// 1.000000

	++b;
	printf("%f\n", b);		// 2.000000
	*/

	/*
	++ 연산자가 전위, 후위인지에 따라 값이 달라지는 것을 확인
	int count = 0;
	while (count < 10)	// count++ or ++count
	{
		printf("%d ", ++count);	// count++ or ++count
		//count++;
	}
	*/

	/*
	int i = 1, j = 1;
	int i_post, pre_j;

	i_post = i++;		// i의 값이 증가 하기 전에 i_post에 대입이 된 후 출력
	pre_j = ++j;

	printf("%d %d\n", i, j);	// 2 2
	printf("%d %d\n", i_post, pre_j);	// 1 2
	*/

	/*
	int i = 3;
	int l = 2 * --i;		// *보다 증감 연산자가 우선순위 더 높음
	printf("%d %d\n", i, l);	// 2, 4


	i = 1;
	l = 2 * i--;
	printf("%d %d\n", i, l);	// 0, 2

	// very high precedence
	int x, y, z;
	x = 3, y = 4;
	z = (x + y++) * 5;
	printf("%d %d %d", x, y, z);		// 3, 5, 35
	*/

	// ++ and -- affect modifiable lvaues(수정가능한 L_Values (변수에만 사용가능. 리터럴, 상수 사용 불가능))
	/*
	int x = 1, y = 1, z;		
	z = x * y++;	// (x) * (y++), not (x*y)++
	//z = (x * y++);	// error
	// z = 3++;	// error
	*/

	// Bad practices
	int n = 1;
	printf("%d %d", n, n * n++);	// 함수 호출 시 인자를 여러번 들어가게 출력하는 것은 좋지 않음(시스템마다 출력값이 다를 수 있음)
	int x = n / 2 * 5 * (1 + n++);
	int y = n++ + n++;	// 증감 연산자를 여러 번 남발해서 사용하는 것은 보기 어려움

	return 0;
}