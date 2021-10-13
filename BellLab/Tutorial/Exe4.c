#include <stdio.h>

int main(){

	//Calculating the Celcius to Fahrenhite from 0 to 300 and making 20 steps 
	//Calculating the Celcius 
	printf("\tTemprature conversion from Fahrenhite to celcius.\n\n");	
	int celc, fahr;
	int steps = 20;
	int lower = 0;
	int upper = 300;

	fahr = lower;
	int i = 0;
	for (; fahr < upper; ) {
		while (i == 0) {
			printf("Celcius \t \t Fahrenhite \n");
			i++;
		}
		celc = 5 * (fahr - 32) / 9;
		printf("%d \t \t \t %d \n", fahr, celc);
	       fahr = fahr + steps;	
	}


}
