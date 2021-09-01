#include <stdio.h>

struct manager salary ();

//With a Structure tag
struct manager {
	char *name[1024];
	int age;
	int salary;
};

int main()
{	
	// Without a structure tag
	struct {
		char name[1024];
		int age;
		int salary;
	} empl1, empl2;

	printf("Enter name of the first Employee: ");
	scanf("%s", &empl1.name);

	printf("Enter name of the second Employee: ");
	scanf("%s", &empl2.name);

	empl1.salary = 30000;
	empl2.salary = 50000;

	printf("\n");

	printf("%s %d\n", empl1.name, empl1.salary);
	printf("%s %d\n", empl2.name, empl2.salary);
	printf("\n");

	struct manager output;
	output = salary();
	printf("Employee name: %s\n", output.name);
	printf("Employee age: %d\n", output.age);
	printf("Employ Salary: %d\n", output.salary);

	return 0;
}

struct manager salary()
{	

	struct manager m1;	
	printf("What is your name: ");
	scanf("%s", m1.name);

	printf("What is your age: ");
	scanf("%d", &m1.age);

	if (m1.age >= 35)
		m1.salary = 30000;
	else 
		m1.salary = 50000;

	return m1;
}
