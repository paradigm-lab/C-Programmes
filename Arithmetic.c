#include <stdio.h>
//The prototype of the function 
float add(float, float);
float sub(float, float);
float mult(float , float);
float div(float, float);

int main ()
{   
      //Addition
      printf("Addition for two numbers: \n");
      int Add1, Add2;
      scanf("\n\n\n%d", &Add1);
      scanf("\n\n\n%d", &Add2);
      printf("Sum: %f \n\n",(float) add(Add1, Add2));

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
