#include <stdio.h>

int main() {
	//Addtion in Pointer
	//You cann't perform addtion in the two pointer variable invalide (p+q)
	//p + 1 -> This is valid: Formula: (base address + 1 * sizeof(datatype))
	//This will be usefull when we a dealing with array and not the variables
	/*
	int a = 10;
	int *p = &a;
	//int *q = &a; <- Invalid for adding the two pointer
	p = p + 2;
	*/

	
	int a[5] = {0, 1, -1, 10, 1};
	int *p = &a[0];
	p = p + 2;
	printf("%d \n", *p);
	p = p+1;
	*p = 2;
	printf("%d", *p);
	

}
