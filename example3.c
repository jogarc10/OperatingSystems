// Example from page 9 of the slides.

#include <stdio.h>

int main(void) {
	int nstudents = 0; /* Initialization, required */
	printf("HOW many students do you know?");
	scanf("%d", &nstudents); // Read input
	printf("So, you have %d students", nstudents);
	return 0;	
}

