#include<stdio.h>

int main() {

	// 사용량 : for > while > do while

	// while
	// 동일한 함수를 여러번 사용하는 것은 비효율적임. 따라서 do while을 작성하는 것이 좋음
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
	// 비교를 하기 전 무조건 한 번은 실행
	do {
		printf("Enter secret code : ");
		scanf("%d", &guess);
	} while (guess != secret_code);
	
	printf("Good!");


	return 0;
}