#include <stdio.h>

/**
 * C program to find the size of int, char,
 * float and double data types
 */

int main(void)
{
	int integerType;
	char charType;
	float floatType;
	double doubleType;

	//Calculate and print the size of integer type
	printf("size of int is: %ld\n", sizeof(integerType));

	//Calculte and print the size of charType
	printf("size of char is: %ld\n", sizeof(charType));

	//Calculte and print the size of doubleType
	printf("size of double is: %ld\n", sizeof(doubleType));

	//Calculate and print size of floatType
	printf("size of float is: %ld\n", sizeof(floatType));

	return (0);


}

