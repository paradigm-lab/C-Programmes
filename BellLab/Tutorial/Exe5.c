#include <stdio.h>

//Using the Symbolic Constants in the Program and they are considered at the compaile time of the program as the pre-processers
//The update of the Fahrenheit and the celcius program 
#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
	printf("Converting Fahrenhite to Celcius using Constants.\n");
	int fahr;
	//Converting the fahrenhite to Celcius	
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
		printf("%d \t %d \n", fahr, (9 * (fahr + 32) / 5));
	}

	printf("\n \n \n");
		
	printf("Converting Celcius to Fahrenhite using constants.\n");	
	int celc;
	//Converting the Celcius to fahrenhite 
	for (celc = LOWER; celc <= UPPER; celc = celc + STEP) {
		printf("%d \t %d \n", celc, (5 * (celc - 32) / 9));
	}
}
