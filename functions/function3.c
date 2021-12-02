#include <stdio.h>

//Function Declaration
void sum(void);

int main() {

	/*Function calling 
	 * When function is called then the control goes to the function definition and it 
	 * compaies the function definition and the funtion calling
	 */

	sum();

}

//Function Definition
void sum() {
	int a, b, sum = 0;
	printf("Enter a and b: ");
	scanf("%d %d", &a, &b);

	sum = a + b;
	printf("Sum:%d", sum);

}
