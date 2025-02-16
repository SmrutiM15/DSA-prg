
#include <stdio.h>
void print_table(int range, int num)
{
	
	int mul;
	int i;

	
	for ( i = 1; i <= range; i++) {
	
		mul = num * i;

		
		printf("%d * %d = %d", num, i, mul);

		
		printf("\n");
	}
}

int main()
{

	// The range of the
	// Multiplication table
	int range = 10;

	// The number to calculate the
	// Multiplication table
	int num = 5;

	// Calling the Function.
	print_table(range, num);

	return 0;
}

