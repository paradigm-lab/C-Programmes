#include <stdio.h>
//The prototype of the function 
float add(float, float);
void Addition();

float sub(float, float);
void Subtraction();

float mult(float , float);
void Multiplication();

float div(float, float);
void Division();

int main ()
{ 
	printf("\t\t Welcome to the Mathematics world\n\n");
	printf("Enter 1 for Addition, Enter 2 for Subtraction, Enter 3 for Multiplication, Enter 4 for Division: \n\n");

	int input;
        scanf("%d", &input);	
        
	switch (input) {
	
	case 1:
		Addition();
		break;
	case 2:
		Subtraction();
		break;
	case 3: 
		Multiplication();		
		break;
	case 4:
		Division();
		break;
	default:
		printf("\t\t\tINVALID VALUE\n");	
		break;
	}

 	printf("Welcome to the Mathematician world");
}

void Addition(){
	printf("The addition of two numbers: \n");
	int Add1, Add2;
	scanf("\t\t %d", &Add1);
	scanf("\t\t %d", &Add2);
	printf("Sum: %f \n \n", (float) add(Add1, Add2));
}

void Subtraction() {
	printf("The Subtraction of two numbers: \n");
	int sub1, sub2;
	scanf("\t\t %d", &sub1);
	scanf("\t\t %d", &sub2);
	printf("Subtraction: %f \n \n", (float) sub(sub1, sub2));
}

void Multiplication() {
	printf("The Multiplication of the two number: \n");
	int mult1, mult2;
	scanf("%d", &mult1);
	scanf("%d", &mult2);
	printf("Multiplication: %f \n \n", (float) mult(mult1, mult2));
}

void Division() {
	printf("Division of the two numbers: \n");
	int div1, div2;
	scanf("%d", &div1);
	scanf("%d", &div2);
	printf("Division: %f \n\n", (float) div(div1, div2));
}
// The function to add two numbers 
float add(float a, float b)
  {
      	return a + b;
  }

// The function to return the subtraction of the two numbers
float sub(float a, float b)
  {
      return a - b;
  }

// The function to return the multiplication of the two numbers 
float mult(float a, float b)
 {
      return a * b;
 }

// The function to return the division of the two numbers
float div(float a, float b)
{
      return a / b;
}
