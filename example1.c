#include <stdio.h>

int main(void) {
	char name[100];
	printf("Hello. Please include your name: ");

	if (scanf("%s", name) != 1) {
		printf("Error!\n");
		return 1;	
	}
	else {
		printf("Nice to meet you %s\n", name);
		return 0;
	}
}
