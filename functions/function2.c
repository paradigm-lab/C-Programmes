#include <stdio.h>

// Function prototype
// It isn't necessary to pass the name of the argument in the function declaration or prototype.
// But it is always necessary to write down the data type in the function argument.
// When we don't write the function declaration the compiler will implicit declaration of the function and it always will assume the return type is integer.
// We should only write void in the declaration of the function and not in the function definition

// We also need to define the function as global so that any function call the function on the prototype or function declaration
// We can also declare the function in the main function but it will only be used in the main scope

void sum(void);			// Function Declaration or Function Prototype
void sumArg(int, int);
char fun();


int main() {
	//sum();		// Function Calling
	//sumArg(3, 4);
	char ch; 
	ch = fun();
	printf("%c \n", ch);
	return 0;
}

// We use the void data type in the function argument so that in the function calling when we pass the argument we get error
// Using void in the function argument it is a good practice because it avoid passing the argument in the function at the function calling 
void sum(){			// Function Definition
	int a, b, sum = 0;
	printf("Enter two no:");
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d \n", sum);
}


// Function which takes the arguments
void sumArg(int a, int b){		// function Definition
	int sum = 0;
	sum = a + b;
	printf("Argument Sum: %d \n", sum);
}

// Function with a return type 
char fun() {
	char c;
	scanf("%c", &c);
	return 'c';
}

/*Function declaration
 *
 * returnType FunctionName(Date type of arguments and the argument names) {
 * 
 * 	Execution block or logic
 *
 * }
 */
