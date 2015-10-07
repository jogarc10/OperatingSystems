#include <stdio.h>

void swap(int *num1, int *num2);

int main() {
	int num1 = 20, num2 = 300;	

	int *ptrNum1; 
	int *ptrNum2; 

	ptrNum1 = &num1;
	ptrNum2 = &num2;
	
	printf("Num1 value: %d\n", num1);
	printf("Num2 value: %d\n", num2);

	swap(ptrNum1, ptrNum2);

        printf("Num1 value: %d\n", num1);
        printf("Num2 value: %d\n", num2);

	return 0;
}

void swap(int *num1, int *num2) {
	int num2Value = *num2;
	*num2 = *num1;
	*num1 = num2Value;
}
