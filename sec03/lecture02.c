#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	float won = 0.0f;
	float dollar = 0.0f;

	printf("Input won :");
	scanf("%f", &won);

	dollar = won * 0.00089f;

	printf("Dollor = %f\n", dollar);

	return 0;
}