#include <stdio.h>
void dosomething(int *ptr);
void main() {
int *p=malloc(sizeof(int));
dosomething(p);
printf("%d", *p); /* will this work ? */
free(p);
}
void dosomething(int *ptr){
/* passed and returned by reference */
int temp=32+12;
*ptr = temp;
}

