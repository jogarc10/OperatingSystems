// This example is useful to work with constans in other files.
// NAME (string constant) and age (number constants) are declared on
// header file 

#include <stdio.h>
#include "example2.h"

// This example is useful to work with constans in other files.
// NAME (string constant) and age (number constants) are declared on 
// example2.h header.

int main(void) {
	printf("SO. you're name is %s\n", NAME);
	printf("You're age is %d \n", AGE);
	return 0;
}
