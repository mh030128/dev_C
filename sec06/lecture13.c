#include<stdio.h>

int main() {

	// ��뷮 : for > while > do while

	// while
	// ������ �Լ��� ������ ����ϴ� ���� ��ȿ������. ���� do while�� �ۼ��ϴ� ���� ����
	const int secret_code = 337;
	int guess = 0.0;

	/*printf("Enter secret code : ");
	scanf("%d", &guess);

	while (guess != secret_code) {
		printf("Enter secret code : ");
		scanf("%d", &guess);
	}
	printf("Good!");*/


	// do while
	// �񱳸� �ϱ� �� ������ �� ���� ����
	do {
		printf("Enter secret code : ");
		scanf("%d", &guess);
	} while (guess != secret_code);
	
	printf("Good!");


	return 0;
}