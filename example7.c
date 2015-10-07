#include <stdio.h>

int divisionByValue(int dividend, int divisor);
int sumByValue(int a, int b);
int sumByReference(int* pa, int* pb);
void runSum();
void runDivision();

int main() {

	// runDivision();
	// runSum();

	return 0;
}

// SUM BY VALUE AND REFERENCE
void runSum() {
	
	int a = 10, b = 20;
	int *pa, *pb;
	pa = &a;
	pb = &b;

	printf("The total sum is %d \n", sumByValue(a, b));
     // printf("The total sum is %d \n", sumByReference(&a, pb));
	printf("The total sum is %d \n", sumByReference(pa, pb));
}

// DIVISION BY VALUE AND REFERENCE.
void runDivision() {	
	
	int c = 20, d = 10, total = 0;
	int *dividend;
	int *divisor;

	dividend = &c;
	divisor = &d;

	total = divisionByValue(c, d);
	printf("Division is %d\n", total);
	
	*dividend = 2000;

	total = divisionByReference(dividend, divisor);
	printf("Division is %d\n", total);
}

int divisionByValue(int dividend, int divisor) {
	return (dividend / divisor);
}	

int divisionByReference(int *dividend, int *divisor) {
	return *dividend / *divisor;
}

int sumByReference(int *pa, int *pb) {
	return (*pa + *pb);
}

// When you pass by value, a and b are copied on the stack.
// So maybe, when the elements you pass are really big
// is better pass by reference. Also if you want some parameteres
// be modified inside the function, you have to pass by reference.
int sumByValue(int a, int b) {
	return a + b;
}
