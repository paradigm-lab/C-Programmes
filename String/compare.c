#include <stdio.h>
#include <string.h>
int main() {
	//strcmp and strncmp there are in string.h file 
	//lexical or graphical comparison comparing character by character
	//strcmp() return 0 -> same, positive(+ve) When the first character that does not match is greater in string and negative (-ve) when the first char that does not match is less in string
	printf("Using the predefined function.");
	int value, i, flag = 0;
	char s1[] = "Hello";
	char s2[] = "Welcome";

	value = strcmp(s1, s2);
	if(value == 0) {
		printf("Same \n");
	}
	else 
		printf("Not same \n");

	printf("%d \n \n", value);

	printf("Using our own logic to compare the strings \n");

	char l1[] = "\0";
	char l2[] = "\0";

	//Assignment using the && percent sign in the loop and getting the string at the run time of the program
	
	while(l1[i] != '\0' || l2[i] != '\0') {
		if(l1[i] != l2[i]) {
			flag = 1;
			break;
		}
		i++;
	}

	if(flag == 1) {
		printf("Not same");
	} else {
		printf("same");
	}

}
