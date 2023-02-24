#include <stdio.h>
/**
 * Find whether A is positive, negative or zero;
 * first the number is taken as input from the user 
 * using scanf in A, and then A is checked for positive using
 * if -- else statement and >, < and == operators.
 */
// Below is to find whether a number is positive, negative or zero

int main(void)
{
	int A;

	printf("Enter the number A: ");
	scanf("%d", &A);

	if (A > 0)
		printf("%d\n is positive. ", A);
	else if (A < 0)
		printf("%d\n is negative. ", A);
	else if (A == 0);
		printf("%d\n is zero. ", A);
		return (0);
}
