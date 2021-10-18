#include <stdio.h>

//The prototype of the functions
void fahr();
//void celc();

int main() {
	//A program to convert fahrenhit to celcius and celcius to fahrenhit 
	printf("Converting the celcius to fahrenhite.\n");
	fahr();	
	printf("Converting the fahrenhite to celcius");
	//celc();

	return 0;
}

void fahr() {
	int celc;
	double fahr;
	int upper;
	int lower;
	int step;

	step = 20;
	upper = 300;
	lower = 0;
	celc = lower;
	
	while (celc <= upper) {
		fahr = (float) (celc * 9 / 5) + 32 ;
		printf("%d \t %.2f \n\n", celc, fahr);
		celc = step + celc;
	}	
}
/*
void celc() {
	float celc;
	double fahr;
	int upper;
	int lower;
	int step;

	step = 20;
	upper = 300;
	lower = 0;
	
}
*/

