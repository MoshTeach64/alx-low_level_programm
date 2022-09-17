#include <stdio.h>
#include <stdlib.h>
/**
 * Writing program without main()
 * main() is nothing but a agreed term for startup code.
 * We can have any name for startup code
 * it doesn't necessarily have to be "main"
 * As _start() function by default calls main(),
 * we have to change it if we want to execute our custom
 * startup code.
 * We can override the _start() function to make it call our
 * custom startup code not main().
 */
void _start()
{
	int x = my_fun(); //calling custom main function
	exit(x);
}

int my_fun() // our custom main function
{
	printf("Hello world!\n");
	return 0;
}

// in this case we have to force the compiler not to use it's own implementation of _start()
// In GCC we can do this using - nostartfiles

