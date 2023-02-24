#include <stdio.h>
/**
 * main - program that print whether B is positive, negative 
 * or zero
 * using scanf
 */

int main(void)
{
	int B;

	printf("Enter the number B: ");
	scanf ("%d\n", &B);

	if (B > 0)
		printf("%d\nB is positve number ", B);
	else if (B < 0)
		printf ("%d\nB is negative number ", B);
	else if (B == 0);
		printf("%d\nB is zero number ", B);
	return (0);

}
