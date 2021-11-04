#include <stdio.h>

int main() {
	//This is pointer to variable
	int a = 10;
	int *p = &a;

	//Double pointer
	//*(&p) and *(1000)
	//Two to three level pointer
	int **q = &p;
	int ***r = &q;

	*p = 12;
	**q=17;
	***r=78;
	printf("a = %d %d %d \n", a , *p, *(*q), *(*(*r)));

	*(*q) = 25;
	printf("a = %d \n", a);

	//Printing the address of q in hexadecimal
	printf("Address of q = %x %x \n", r, &q);
	printf("Address of p = %x %x \n", q, &p);
}
