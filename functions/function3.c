#include <stdio.h>

/* 			Function Declaration
 * We have got the return type, the function name and the function argument
 * In function argument we have an optional if the function takes the arguments you can 
 * only write the data types.
 * Note: It's not necessary to write the name of the variable in the function arguments
 */
void sum(void);

int main() {

	/*Function calling 
	 * When function is called then the control goes to the function definition and it 
	 * compaies the function definition and the funtion calling
	 *
	 */

	sum();

}

/* The function has got two main parts Which are:
 * 	Function header and Function body
 *
 * In Function header we have got the return type, function name and the function arguments 
 * with there data types.
 *		AND
 * In Function body we have got the function logic whereby we can have the local variables,
 * function calling and the return statement
 *
 * When we don't have the return statement the closing brace will act as the void return type.
 */


//Function Definition
void sum() {
	int a, b, sum = 0;
	printf("Enter a and b: ");
	scanf("%d %d", &a, &b);

	sum = a + b;
	printf("Sum:%d \n", sum);

}
