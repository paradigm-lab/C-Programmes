#include <stdio.h>

//The prototype of the average function 
float average (int lenght, int array[]);

//The constant value of the total mark
const int TOTAL = 3;


int main (void)
{
    int total;
    int score[TOTAL];
    for (int i = 0; i < TOTAL; i++)
    {  
      	scanf("%d", &score[i]);
    }
    printf("Average: %f\n", average(TOTAL, score));
    return 0;
}


float average (int length, int array[])
{
      int sum = 0;
      for (int i = 0; i < length; i++)
      {
          sum = sum + array[i];
      }
      
      return sum / (float) length;
} 
