#include <stdio.h>
void dosomething(int *ptr);

int main() {
	int  num = 0;
	int *p;
	p = &num;
	dosomething(p);
	printf("%d", *p); /* will this work ? */
	return 0;
}
void dosomething(int *ptr){
	/* passed and returned by reference */
	int temp=32+12;
	*ptr = temp;
}

