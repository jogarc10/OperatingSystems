// One dimensional array. Example from page 11 of intro to c slides.

#include <stdio.h>
int main(void) {
	int number[12]; // 12 cells, one per students
	int index, sum = 0;

	/* Always initialize array before use  */

	for (index = 0; index < 12; index++) {
		printf("Array before assignation: %d \n", number[index]);
		number[index] = index;	
	}

	/* If I try to access the array with index after the for, will cause 
           an error due index is 12... (sums 1 before exitsting loop) */
	
	for (index = 0; index < 12; index++) {
		sum += number[index]; // sum array elements
	}
	printf("------------\n");
	printf("Total sum of the array: %d\n", sum);
	printf("Size of the array: %ld \n", sizeof(number));
	return 1;
}

