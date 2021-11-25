#include <stdio.h>

// Function Definition.
// This are user defined functions.
void sum() {
	int a, b, sum = 0;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("The sum is: %d \n", sum);
}

int main() {
	
	// Function calling
	// When the function is done for the execution then, 
	// The function is been demolished from the memory.
	sum();
	printf("Hello More calculation. \n");
	
	
	// After the control of the execuation of the program is compeleted 
	// Then the memory is been freeed or released from the main memory.
	sum();
	printf("Hello \n");

	sum();

	return 0;
}
