#include <stdio.h>

int main() {
	char name[30];
	printf("Enter name: ");
	scanf("%s", name);

	printf("%s\n", name);
	printf("%.5s\n", name);
	printf("%10.5s\n", name);
	printf("%s\n", &name[2]);

	//It will automatically add a new line at the end of the line
	puts(name);
	puts(name);
}
