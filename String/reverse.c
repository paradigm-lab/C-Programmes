#include <stdio.h>
#include <string.h>

int main() {
	/*
	strrev is a predefined function for reversing the string. example jayanti to itnayaj
	*/

	char c;
	int i, l, j;
	printf("Using the predefined function to revese the string. \n");
	char s1[] = "Jayanti";
	//strrev(s1);
	printf("%s \n \n", s1);

	printf("Using our own logic to reverse the string. \n");
	char l1[30] = "jayanti";
	
	l = strlen(l1);
	/*
	for (i = 0; i < l/2; i++) {
		ch = l1[i];
		l1[i] = l1[l-1-i];
		l1[l-1-i] = ch;
	}
	*/

	for (i = 0, j=l-1; i < j; i++, j--) {
		c = l1[i];
		l1[i] = l1[j];
		l1[j] = c;
	}
	printf("%s", l1);
}
