#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer to the string to print
 * Return: void
 */

void _puts(char *str)
{
	int counter;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		putchar(*(str + counter));
		counter++;
	}
	putchar('\n');
}
