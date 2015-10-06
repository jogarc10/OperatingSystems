#include <stdio.h>

int main(void) {
	int num1 = 9;
	int *num2 = &num1;
	
	printf("Direction of num1: %p\n", &num1);
	printf("Direction when num2 is stored in memory: %p\n", &num2);
	printf("Direction that num2 is pointing to: %p\n", num2);
	printf("Value of num2: %d\n", *num2);
	
	*num2 = 2000;
	printf("Value of num1: %d\n", num1);

	int animals[4] = {50, 100, 3,4 };
	int *zoologico = animals;

	printf("Direction in memory where the pointer is stored %p\n", &zoologico);
	printf("Direction where pointer is pointing %p\n", zoologico);
	printf("SEcond element of animals: %d\n", *zoologico);
	zoologico++;
	printf("Direction in memory where the pointer is stored %p\n", &zoologico);
	printf("Direction where pointer is pointing %p\n", zoologico);
	printf("SEcond element of animals: %d\n", *zoologico);

/*
	printf("BAse address for animals: %p\n", animals);
	printf("FIrst element of animals: %d\n", *animals);
	// *animals += *(animals + 1);	
	printf("SEcond element of animals: %p\n", &animals);
	printf("SEcond element of animals: %d\n", *animals);
	*animals += 9;
	printf("SEcond element of animals: %d\n", *animals);
*/

	return 0;
}
