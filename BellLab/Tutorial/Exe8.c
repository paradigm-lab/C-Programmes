#include <stdio.h>

int main() {
	//The program to count the characters in the input "Version 1"
	
	long nc;
	int c;
	printf("Enter the characters: \n");
	/*	
	//Using the do while loop
	do {
		c = getchar();
		++nc;
	} while (c != EOF);
	printf("%d", nc);
	*/
	
	/*
	//Using the While loop to count the charactes
	while((c = getchar()) != EOF) {
		nc++;
		//Using the unformated output to print the character in the terminal
		//putchar(c);
	}	
	printf("\n");
	printf("%d", nc);
	*/

	//Using the for loop to count the characters inputed by the user at the runntime of the program 
	for (; (c = getchar()) != EOF; ) {
		nc++;
	}
	printf("\n");
	printf("%d", nc);
}
