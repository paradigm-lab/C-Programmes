#include <stdio.h>


int main() {
	
	//Null pointer 
	//int *ptr -> this is an intialized pointer it cantaine gabage
	//Null means 0
		
	//We can't derefference the null pointer because the pointer it is pointing to invalid 

	//Null pointer is a type of pointer that it doesn't reffere to any valid object or valid address
	//The main purpose of having the null pointer is when we want to allocate the address to the pointer at the run time of the program dynamically by using malloc function and calloc function
	//Malloc and calloc are in-built function which are used to allocate memory dynamically
	
	//The difference between void pointer and null pointer:
	//Is that void pointer is type and null pointer is a value(0)

	//The NULL Pointer is always zero(0)	
	int a = 3;
	int *ptr1 = NULL;
	int *ptr2 = NULL;
	
	//We use this condition for error handling in C
	if(ptr1 == NULL) {
		printf("This is null pointer \n");	
	}
	else {
		printf("%d \t", *ptr1);	
		printf("%d \n", *ptr2);
	}
	
	//Comparing two null pointer
	if(ptr1 == ptr2) {
		printf("Both are null pointer \n");
	}
	else {
		printf("%d \n", *ptr1 + *ptr2);
	}

	//printf("%d \n", ptr2);
	
}
