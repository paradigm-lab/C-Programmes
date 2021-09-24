#include <stdio.h>
//The prototype of the function 
float add(float, float);
void Addition();
float sub(float, float);
float mult(float , float);
float div(float, float);

int main ()
{ 
	printf("\t\t Welcome to the Mathematics world\n\n");
	printf("Enter 1 for Addition, Enter 2 for Subtraction, Enter 3 for Multiplication, Enter 4 for Division: \n\n");
	int input;
        scanf("%d", &input);	
        
	if (input == 1) {
		Addition();
	}
	else if (input == 2) {

	}

      //Subtraction
      printf("Subtraction for two numbers: \n");
      int sub1, sub2;
      scanf("\n\n\n %d", &sub1);
      scanf("\n\n\n %d", &sub2);
      printf("Subtraction: %f \n\n", (float) sub(sub1, sub2));

      //Multiplication
      printf("Multiplication for two numbers: \n");
      int mult1, mult2;
      scanf("%d", &mult1);
      scanf("%d", &mult2);
      printf("Multiplication: %f \n\n", (float) mult(mult1, mult2));

      //Division
      printf("Division of the two numbers: \n");
      int div1, div2;
      scanf("%d", &div1);
      scanf("%d", &div2);
      printf("Division: %f", (float) div(div2, div1));

}
void Addition(){
	printf("The addition of two numbers: \n");
	int Add1, Add2;
	scanf("\n\n\n %d", &Add1);
	scanf("\n\n\n %d", &Add2);
	printf("Sum: %f \n \n", (float) add(Add1, Add2));
}

void Subtraction() {
	printf("The Subtraction for");
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
