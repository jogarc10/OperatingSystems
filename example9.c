#include <stdio.h>

int main() {
	int people[12]; // people has the base address.
	printf("Base address of people %p\n", people);
			
	int *ptr = people + 1; 	
	printf("Base address of ptr %p\n", ptr);
	
	ptr++; // address of ptr + 4
	printf("Base address of ptr %p\n", ptr);


	return 0;
}


