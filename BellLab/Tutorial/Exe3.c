#include <stdio.h>

int main() {
	//Calculating the fahrenhite and celcius from 0 to 300 and making 20 steps 

	//Calculation the fahrenhite
	printf("\tTemperature Convertion from Celcius to Fahrenhit.\n");
	int fahr = 0;
	int celc = 0;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	
	celc = lower;

	while (celc <= upper) {
		fahr = 9 * (celc + 32) / 5;
		printf("%d \t %d \n", celc, fahr);
		celc = step + celc;
	}
}
