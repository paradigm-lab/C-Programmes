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
	

	
	int a[5] = {0, 1, -1, 10, 1};
	int *p = &a[0];
	p = p + 2;
	printf("%d \n", *p);
	p = p+1;
	*p = 2;
	printf("%d", *p);
	


	//Subtraction in Pointer
	//p - q and p - 2 this is possible for the subtraction of the pointer this is because in subtraction of the pointers,
	//It returns an interger and not the address like in addition of the pointer. but 
	//If your subtracte a pointer to an integer the it returns a pointer.
	
	int d;
	//int b[] = {1, 2, 4};
	int a[5] = {50, 1, -1, 10, 11};
	int *p = a;
	//int *q = &b;
	int *q = &a[4];
	d = q - p;
	//This will return the number of the element between the two pointers
	//p = 1000 and p = 1012 -> 1000 - 1012 = -12/sizeof(data_type)
	printf("%d \n", d);

	q = q - 2;
	//printf("%d", *q); -> The answer is -1 That is in index 2
	
	//This will return the a pointer	
	//Formula: Address of q - 2 * sizeof(datatype)
	//q - n = q - n * sizeof(datatype)
	
	//d = p - q;
	//printf("%d\n", d) -> The value is -2 and that is the range between p and q

	//Assignment:
	*q = 25;
	printf("%d \n", *q);
	
	d = q - p;
	printf("%d \n", d);

	*p = 27;
	printf("%d\n", *p);
	printf("%d\n", a[0]);

	q = q - 3;
	//printf("%d\n", *q); -> We will get a gabage value that is out of the array
	
	p = p + 3;
	printf("%d \n", *p);
	printf("%d \n", a[3]);

	d = p - q;
	printf("%d \n", p);
	printf("%d \n", q);
	printf("%d", d);
	*/


	//Incrementation and Decrementation of the pointers
	//a is contating the base address of the array so this means a is a Constant pointer 
	//Your cannot assign an address at the constant pointer
	printf("\t \t Incrementation of the pointers \n \n");
	int a[] = {3, 2, 6, 7, 0, 56};
	int *p;
	p = a;
	p++;
	printf("%d\n", *p);

	//Post increment : return the value then incrementation will take place
	printf("%d\n", *p++);
	printf("%d\n", *p);
	
	//Pre increment : It will modify the value then it will return the modified value
	//* and ++ They have the same presedence so the associativity is Right to left
	printf("%d\n", *++p);

	//They have the same presedence so we check for the associativity
	//Associativity is from Right to Left, 7 and 0
	printf("%d %d \n", *p++, *p++);
	printf("%d \n \n", *p);
	
	printf("\t \t Decrementation of the pointers \n \n");

	printf("%d \n", *p--);
	printf("%d \n", *p);

	printf("%d \t %d \t %d \n", *--p, *--p, *--p);
	
	//This Expression will not increment the pointer but it will the value inside the address
	printf("%d\n", ++(*p));
	printf("%d", ++(*p));


	
}
