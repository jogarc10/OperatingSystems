// Pointers examples from page > 15 on "Review C"

#include <stdio.h>
#include <stdlib.h>

void example1();
void example2();
void example3();

int main() {

	example3();
	return 0;
}

// Dinamic memory allocation
void example3() {
	char c = 'A';
	int *ptr;
	int j;
	
	printf("Size of pointer %ld \n", sizeof(*ptr));
	ptr = malloc(1000 * sizeof(int));
	printf("Size after allocating memory: %ld \n", sizeof(*ptr));

	// Assign data to ptr
	*ptr = 100;
	printf("Now ptr value has changed: %d \n", *ptr);
	printf("c value is %d \n", c);

	free(ptr);
}

void example2() {
	int j = 10;
	int* ptr;

	printf("Valor de J: %d antes de cambiar el valor con el puntero \n", j);

	ptr = &j; // Ahora el valor de la variable (puntero) ptr apunta a j	
	*ptr = 1000; // Asigno 1000 a j, porque ptr apunta a j.	
	
	printf("Valor de J: %d despues de modificarlo con un puntero \n", j);
}

void example1() {
	float f; // data variable.
	float *f_addr; // pointer variable
	
	printf("f = %f \n", f);
	printf("&f (address)= %p \n", &f);
 	

        printf("-------- Before assigning f_addr = f -------- \n");
        printf("f_addr %p \n", f_addr);

	f_addr = &f;
	
        printf("-------- After assigning f_addr = f -------- \n");
        printf("f_addr %p \n", f_addr);
        printf("*f_addr %f \n", *f_addr); // the pointer stores a direction to a variable.
        printf("&f_addr, %p \n", &f_addr);
}
