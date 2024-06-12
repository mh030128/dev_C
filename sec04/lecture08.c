#include <stdio.h>
#include <limits.h>

int main()
{

	// 변환 지정자의 수식어들 (Modifiers)

	printf("%10i\n", 1234567);
	printf("%-10i\n", 1234567);
	printf("%+i %+i\n", 123, -123);
	printf("% i \n% i\n", 123, -123);
	printf("%X\n", 17);
	printf("%#X\n", 17);		// #을 붙이면 0을 출력
	printf("%05i\n", 123);
	printf("%*i\n", 7, 456);	// *를 붙이면 형식지정자 안에서 입력이 아닌 파라미터 값으로 입력하여 출력, 따라서 7이 i 값으로 들어간다고 생각하면 됨 / scanf에서는 의미가 다름

	printf("\nPrecicsion\n");
	printf("%.3d\n", 1024);	// 3이 4자리수보다 작으므로 그냥 출력
	printf("%.5d\n", 1024);	// 5는 4자리수보다 크기 때문에 빈 공간은 0으로 출력
	printf("%.3f\n", 123456.1234567);	// 소수점 아래 3번째까지 나타내므로 나머지 숫자는 버림
	printf("%.3f\n", 123456.1235);	// 반올림 되는 것을 확인
	printf("%10.3f\n", 123.45678);
	printf("%010.3f\n", 123.45678);
	printf("%.5s\n", "ABCDEFGHIJKLM");
	printf("%.s\n", "ABCDEFGHIJKLM");	// 숫자 0이 들어있는 것과 동일하므로 아무것도 출력되지 않음  / assumes .0 / string 뿐만 아니라 decimal, float도 사용 가능

	printf("\nlength\n");
	printf("%hhd %hd %d\n", 257, 257, 257);
	printf("%d %lld %lld\n", INT_MAX + 1, INT_MAX + 1, 2147483648LL);	// x64와 x86 크기에서 나오는 값이 다른것을 알아두자



	return 0;
}