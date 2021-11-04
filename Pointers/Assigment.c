#include <stdio.h>

int main() {
	//Declaration of the variables
	int a = 10, b = 11;
	int *p, *q;

	//This is intialization of the pointers here both p and q they are pointing to one address and printing the values by using the astric or the indirectional operator to derefference the value
	p = &a;
	q = p;
	printf("a = %d %d %d \n", a, *p, *q);
	
	//In this case we are accessing the values
	q = &b;
	*q = *p;
	printf("b = %d %d %d", a, *p, *q);
}
