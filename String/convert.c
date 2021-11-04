#include <stdio.h>
#include <string.h>

int main() {
	/*
	  Converting the upper case to lower case and the lower cass to upper case
	  Using predefined function such as char strlwr(char* str)
		A = 65 to Z = 90 and a = 97 to z =122
		so the pattern is the range of 32 by taking (97 - 65)
	 */

	//char s1[] = "JayanTi";
	//char s2[] = "jayanti";
	//strlwr(s1);
	//strupr(s2);
	//printf("%s1", s1);
	//printf("%s2", s2);

	int i;

	printf("Changing the uppercase to lowercase. \n");
	char l1[30] = "JaANTInTi";
	for (i = 0; l1[i] != '\0'; i++) {
		if(l1[i] >= 65 && l1[i] <= 90) {
			l1[i] = l1[i] + 32;	
		}
	}

	printf("String is: %s", l1);
}
