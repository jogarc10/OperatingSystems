#include <stdio.h>

void init_array(int array[], int size);
void init_array(int *array, int size);

void main() {
	int i, list[5];
	init_array(list, 5);
	for(i = 0; i < 5; i++)
		printf("next: %d \n", list[i]);
}

void init_array(int array[], int size) {
	
}
void init_array(int *array, int size) {
	
}

