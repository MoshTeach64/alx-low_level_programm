#include "main.h"
/**
 * _isupper - checks if a  character is uppercase or not
 * @c: character to be tested
 * Return: 1 whether it is, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
else
	return (0);
}

/*int _isupper(int c)
{
int upper;

for (upper = 'A'; upper <= 'Z'; upper++)
{
if (c == upper)
        return (1);
else
        return (0);
}
return(0);
}*/
