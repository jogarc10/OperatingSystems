#include <stdio.h>

void doSomething(int *ptr);

int main() {
	int num = 0; 	
	int *ptr = &num;

	doSomething(ptr);
	printf("Total sum is %d\n", *ptr);

	return 0;
}

void doSomething(int *ptr) {
	int total = 3000 + 30;
	*ptr = total;
}
