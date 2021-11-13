#include <stdio.h>

int main() {
	const int a = -11;
	const int *p = &a;
	
	//We are using the indirectional operator to access the value at the address of p and updating the value to 10
	
	//When we change the variable to constant we can't update the variable because the variable will only be Read-Only 
	//*p = 10;
	printf("%d \t", a);
	printf("%d \n", *p);

	//This is the charater array, Where by it is initialized at the runtime of the program
	//They have the range of 1 Byte
	char str[] = "welcome to jenny's Lecture";
	
	//We store the address of the character into the *ptr
	//We don't need to use the Address operator because character array has got the base address or is a constant pointer
	char *ptr = str;

	//Using the indirectional operator to print the value at the address whereby it is "W"
	printf("%c \n", *ptr);
	
	//This will fast execute the parethis because they have got high presedence
	//The inside the parenthis we fast return the value at ptr because it is post increment
	//The we use the original value(100 + 1) so "e"
	printf("%c \n", *(ptr++ + 1));

	//Fast the parenthis because they have got high precedence
	//It will fast return the current ptr then decrement
	//And we will use the original value and not the decremented value
	// *((101 + 5) -1) + 3
	// *(106 - 1) + 3
	// *(105) + 3
	// m + 3 -> We are using the ASCII table to increment from m n o p
	// So the output is p
	printf("%c \n", *( (ptr-- + 5) - 1) + 3);

	//We will fast execute the paranthesis, Whereby ptr will be incremented fast then 
	//We add 10 *(101 + 10) *(111)
	//Then the value at address *(111) - 32
	//Means j - 32
	//So the output is J
	printf("%c \n", *(++ptr + 10) - 32);

	//This statement has got the same presedence so we check for the associativity 
	//The associativity is from Right to Left
	//From the Right is that pre Decrement then we have pre Increment then we print the value at address of ptr
	printf("%c %c %c", *ptr, *++ptr, *--ptr);



}
