#include <stdio.h>

int main()
{
	// 곱하기 연산자
	
	// annual_interest : 연간이자율
	double seed_money, target_money, annual_interest;

	// scanf 사용시 double에서는 %lf, float에서는 %f를 사용
	printf("Input seed_money : ");
	scanf("%lf", &seed_money);

	printf("Input target_money : ");
	scanf("%lf", &target_money);

	printf("Input annual_interest (%%): ");
	scanf("%lf", &annual_interest);

	double fund = seed_money;
	int year_count = 0;

	while (fund < target_money)
	{
		fund += fund * annual_interest / 100.0;
		year_count += 1;
		// year_count++;		C언어에서는 이렇게도 사용 가능
		
		printf("Year %d, fund %f\n", year_count, fund);
	}
	printf("It takes %d years\n", year_count);

	return 0;
}