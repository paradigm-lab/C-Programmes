#include <stdio.h> 
#include <stdlib.h>

int main() {
	
	//Wild pointer is a pointer that is uninitiallized or is a pointer that is pointing to a random memory location and the solution to the wild pointer is throught making the pointer NULL or initiallizing the memory dynamically or directlly initiallize the pointer with  the address 
	
	//This is uninitialized pointer so it will be containing a gabage value
	//Uninitialized pointer it is also reffered as a wild pointer
	int *ptr = NULL;

	//The soluting to the wild pointer is by assining the NULL to the pointer and we can later use the pointer in the program
	int x = 5;
	ptr = &x;
	printf("%d \n", *ptr);

	//One more thing that we can do is to dynamically allocate the memory by using the in-built function such as malloc and calloc function
	int *ptr1 = (int *)malloc(sizeof(int));
	*ptr1 = 5;
	printf("%d \n", *ptr1);
	free(ptr1);

	printf("%d \n", *ptr1);
	ptr = NULL;
	printf("%d \n", ptr);
}
