#include <stdio.h>
/**
 * The difference between single quoted and double quoted
 * declaration of char array
 * when a character array is initialzed with 
 * a double qouted string and array size is not specified,
 * compiler automatically allocates one extra space for string
 * terminator '\0'.
 *
 * Example, following program prints 6 as output.
 */

int main()
{
	// size of arr[] is 6 as it is '\0' terminated
	//char arr[] = "geeks"; //array size not specified
	//char arr[5] = "geeks"; //array size is specified "5"
	//when character array is initialized with comma 
	//separated list of characters and array size is not 
	//specified, compiler will not create extra space for 
	//string terminator'\n'
	
	char arr[] = {'g', 'e', 'e', 'k', 's'};

	//int i;

	//for(i = 0; i < 5; i++)
	{
	printf("%lu\n", sizeof(arr));
	}
	
	return 0;
}
