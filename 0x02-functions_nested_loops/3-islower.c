#include "main.h"
#include <ctype.h>

/**
 * _islower - Check Holberton
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _islower(int c)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == c)
		{
			return (1);
		}
		alpha++;
	}
		return (0);
}
