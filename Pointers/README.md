		Pointer in C
Declaration means the space will be allocated in the memory for the variable.

	Example: int a = 10;   <- Declaration of the variable and the value is 10
		a | | | | |	<- Memory block
	   0x	  10 02    04  <- Address

Pointer is a special variable that stores the address of the same data type.
		OR
Pointers are the derived data type.
sizeof pointer is 2 byte for 32 bits machine and 4 byte for 64 bits machine.

	Pointer Systax: Datatype * Pointer name;
	Example: 
		int a = 10;
		int* p; -> Declaration of the pointer
		p = &a;	-> Initialization of the pointer
	This mean p points to a.

	Assignment:

	float x, y; -> Declaration of x and y as float
	int a, *ptr; -> Declaration of a as integer that has got the size of 4byte and the declaration of the pointer that will also take 4byte in the memory
	ptr = &x;   -> Not Correct because the pointer is declared as int so it stores the address of an integer variable  
	ptr = &a;  -> Correct, Because a is an interger and ptr is a pointer that stores the address of an interger variable
	

