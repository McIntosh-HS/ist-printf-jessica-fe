#include <stdio.h>	// The stdio.h library contains input and output functions

int main()
{
	int a = 10;
	float f = 1.23;
	char c = 'z';

	// Format specifiers are placeholders for variable data
	printf("The value of a is: %i\n", a);	// %i is for integers
	printf("The value of f is: %f\n", f);	// %f is for floating point data
	printf("The value of c is: %c\n", c);   // %c is for single characters

	return 0;
}
