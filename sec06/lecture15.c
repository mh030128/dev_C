#include <stdio.h>

// #define NUM_ROWS		5
#define NUM_ROWS		12
#define FIRST_CHAR 'A'
// #define LAST_CHAR 'K'


int main() {
	
	// 중첩된(Nested) 루프들

	int r;		// row loop
	int c;		// character loop

	//for (r = 0; r < NUM_ROWS; r++) {	// outer row loop
	//	for (c = FIRST_CHAR; c <= LAST_CHAR; c++) {	// inner character loop
	//		printf("%c ", c);
	//	}
	//	printf("\n"); 
	//}

	/*for (r = 0; r < NUM_ROWS; r++) {
		for (c = FIRST_CHAR; c <= FIRST_CHAR + r; c++) {
			printf("%c ", c);
	}
		printf("\n");
	}*/

	for (r = 0; r < NUM_ROWS; r++) {
		for (c = FIRST_CHAR+r; c < FIRST_CHAR + NUM_ROWS; c++) {
			printf("%c ", c);
		}
		printf("\n");
	}
	
	return 0;
}