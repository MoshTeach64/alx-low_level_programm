#include <stdio.h>
/**
 * main - program that print whether product of integers from "a" to
 * "b" is positive, negative or zero
 * using scanf
 */

int main(void)
{
	int a;
	int b;
	int i = a * b;

	printf ("enter the product of two numbers i: ");
	scanf ("%d\n", &i);

	if (i > 0)
		printf("%d\nThe product of a * b is Positive: ", i);
	else if (i < 0)
		printf("%dThe product of a * b is Negative:\n", i);
	else if (i == 0);
	printf("%dThe product of a * b is zero\n", i);

	return (0);
	

}
