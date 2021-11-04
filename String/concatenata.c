#include <stdio.h>
#include <string.h>
int main() {
	
	//Concatination is the process of appending or copying a string into another string after the first string is completed. It takes the source and the destination of the string strcat(destination, source). The down side of the strcat is the buffer overflow it isnot going to check the size of the destination string
	
	int i, len1, len2;

	char s1[30] = "Jenny";
	char s2[10] = "Khatri";

	//printf("Using the strcat predefined function to concatenate the string: ");
	//strcat(s1, s2);
	//printf("%s \n \n \n", s1);
	
	//Making the strcat using our own logic to concatenate the string 
	len1 = strlen(s1);
	len2 = strlen(s2);

	//strncat(s1, s2, 4); function

	for (i = 0; i <= len2; i++) {
		s1[len1 + i] = s2[i];
	}
	printf("Our own logic: ");
	printf("%s", s1);
	
}
