#include <stdio.h>

int main() {
	
	//Void Pointer
	//Void means Empty, It's not having any associated data type, 
	//Example an Empty Glass that can only be filled with anything
	//int *ip -> This is an integer pointer, 
	//This means ip is a pointer that point to int data type

	//float *fp -> Pointer to float
	//char *cp  -> Pointer to char
	
	//This is how to declare the void data type
	//A void pointer is a generic pointer, We can store the address of any data type
	//void *vp;
	

	int a = 5;
	float b = 10.12;
	char c = '0';
	
	void *vp;
	vp = &a;

	//One thing about void pointer is that we cannot use the indirectional operator to access the value at the address, What we need to do is to type cast
	//This is because the void pointer has no specific data type so the compiler won't no the size to be allocated in the memory
	//So when we type cast the compiler will no that if the pointer is an int it has to allocate 4 byte
	printf("%d \n", *(int *) vp);
	
	vp = &b;
	printf("%.3f \n", *(float *) vp);

	vp = &c;
	printf("%c \n", *(char *) vp);

	//It is good to use the void pointer because it we can store the address of any data type
}
