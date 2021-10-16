#include <stdio.h>
#define MAXWL 20  //The maximum length of a word 
#define MAXNO 25  // Maximum number of words in a sentence 

int main() {
	//A vertical horizontal of printing the histogram of the words
	int word[MAXNO];
	int i, c, j, nc, nw;

	for (int i; i < MAXNO; i++) {
		word[i] = 0;
	}

	nc = nw = 0;

	while((c = getchar()) != EOF) {
		++nc;
		//Checking for the empty characters when inputing
		if(c == ' ' || c == '\t' || c == '\n') {
			word[nw] = nc - 1; 
			
			++nw;
			//resetting the word-length for the next word
			nc = 0;
		}
	}

	for(i = MAXWL; i >= 1; i--) {
		for(j = 0; j <= nw; j++){
			if(i <= word[j]){
				putchar('*');
			}
			else 
				putchar(' ');
		}
		putchar('\n');
	}	
	return 0;

}
