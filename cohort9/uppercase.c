#include <stdio.h>

int main(void)
{	
	char uppercase = 'A';

	while(uppercase <= 'Z')
	{
	putchar(uppercase);
	uppercase++;
	}
	putchar('\n');
	return(0);
}
