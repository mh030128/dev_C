#include <stdio.h>

int main()
{
	// ���ϱ� ������
	
	// annual_interest : ����������
	double seed_money, target_money, annual_interest;

	// scanf ���� double������ %lf, float������ %f�� ���
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
		// year_count++;		C������ �̷��Ե� ��� ����
		
		printf("Year %d, fund %f\n", year_count, fund);
	}
	printf("It takes %d years\n", year_count);

	return 0;
}