#include <stdio.h>


int main(void)
{

	int i;
	int arry1[5];
	int arry2[5];
	int sumarry[5];
	
	printf("Enter the number of the first array: \n");
	for (i = 0; i < 5; i++)
		scanf("%d", &arry1[i]);	
	
	printf("Enter the number of the second array: \n");
	for (i = 0; i < 5; i++)
		scanf("%d", &arry2[i]);

	for (i = 0; i < 5; i++)
	{
		sumarry[i] = arry1[i] + arry2[i];
		printf("The index %d and sum %d \n", i , sumarry[i]);
	}
}
