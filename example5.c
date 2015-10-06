// Practising arrays
// I'd like to test and see the size of an array in memory and so on.

#include <stdio.h>

int main(void) { 
	
	// Printing size of different elements.

	int points[3][4];
	printf("Size of points[3][4]: %ld \n", sizeof(points));

	int score[12];
	printf("Size of score[12]: %ld \n", sizeof(score));
	
	// Printing address for some variables.
	
	printf("Adress of points[][] %p \n", &points);
	printf("Adress of points[0][0] %p \n", &points[0][0]);
	printf("Adress points[1][1] %p \n", &points[1][1]);
	printf("Adress of points[3][4] %p \n", &points[3][4]);

	return 0;
}
