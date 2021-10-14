#include <stdio.h>

int main(){ 
	//Counting Lines program
	int lc = 0;
	int c;
	for (; (c = getchar()) != EOF;) {
		if (c == '\n'){
			lc++;
		}
	}
	printf("\n");
	printf("%d", lc);

}
