#include <stdio.h>

int main() {
	//A program that prints the histogram of the length of words in its input
	int c; 
	while((c = getchar()) != EOF){
		//Checking for the white space at the input of the characters 
		if(c == ' ' || c == '\t' || c == '\n') {
			putchar('\n');
		} else {
			putchar('#');
		}	
	 }	
}
