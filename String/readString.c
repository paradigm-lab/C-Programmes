#include <stdio.h>

int main () {
	char name[30];
	printf("Enter Name: ");

	//We a not using the endpercent(&) in the scanf because s1 is a pointer the base address of the array
	//Space are considered as null character, when using scanf to get the characters
	//scanf("%s", name);
	//scanf("%13s", name);
	//printf("%s \n", name);

	//gets --> reads the characters till the end of the line 
	gets(name);
	printf("%s", name);

	//The Down side of the scanf and gets is that the Buffer Overflow

}	
