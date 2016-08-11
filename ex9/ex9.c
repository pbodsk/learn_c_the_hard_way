#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int numbers[4] = {0};
	char name[6] = {'p'};
	
	// first, print them out raw
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	
	printf("name each: %c %c %c %c %c\n", name[0], name[1], name[2], name[3], name[4]);
	
	printf("name: %s\n", name);
	
	// setup the numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	
	// setup the name
	name[0] = 'P';
	name[1] = 'e';
	name[2] = 't';
	name[3] = 'e';
	name[4] = 'r';
	//Remember termination
	name[5] = '\0';
	
	// then print them out initialized
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	
	printf("name each: %c %c %c %c %c\n", name[0], name[1], name[2], name[3], name[4]);
	
	// print the name like a string
	printf("name: %s\n", name);
		
	// another way to use name
	char *peter2 = "Peter";
	printf("peter2: %s\n", peter2);
	printf("peter2 each: %c %c %c %c %c\n", peter2[0], peter2[1], peter2[2], peter2[3], peter2[4]);
	
	
	return 0;
}