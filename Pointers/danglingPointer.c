#include <stdio.h>
#include <stdlib.h>

//Function prototype
int *fun();

int main() {
	//Dangling Pointer is the deallocation of memory distraction of the objects
	//			OR
	//Dangling pointer points to a freeed memory location
		
	//Malloc returns a void pointer so we need to type cast to tell the compiler to allocate the integer pointer size
	int *ptr = (int *) malloc(sizeof(int));
	*ptr = 10;
	printf("%d \n", *ptr);
	free(ptr);
	//The dangling pointer cames in player when we free the memory to prove this we can derefference the pointer and we will get a gabage value (Hanging pointer)
	printf("%d \n", ptr);
	
	//To avoid the dangling pointer we asign the NULL to the pointer variable and this will make the pointer to have the gabage value
	ptr = NULL;
	
	//
	if(ptr == NULL) {
		printf("We can't derreference the pointer \n");
	} else {
		printf("We can write the logic \n");
	}

	//Dangling pointer also takes place in the scope concept
	
	int *ptr1 = fun();
	printf("%d\n", *ptr1);

}

int *fun() {
	//This is a dangling pointer where by we return an address and when we get out of the scope the variable a will already vanish so it will return a gabage value
	//To avoid this we need to make the variable static
	//The static variable they are visible globale
	static int a = 10;
	return &a;
}
