#include <stdio.h>
#include <string.h>

int main() {

	int count = 0, i = 0;
	char name[50];
	printf("Enter name: ");
	gets(name);
	
	//Our own logic
	while (name[i] != '\0') {
		count++;
		i++;
	}
	printf("%d \n", count);
	
	//Using the strlen function that is defined in the string.h file
	unsigned int count1 = strlen(name);
	printf("String of the length is: %d", count1);
	

}	

/*
int strlength(char* name) {

	int count = 0;
	while (name[i] != '\0') {
		count++;
		i++;		
	}	
	return count;
}
*/
