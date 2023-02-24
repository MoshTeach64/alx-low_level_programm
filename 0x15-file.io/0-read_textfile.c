#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* read_textfile - Reads a text file and prints it to the POSIX standard ouput
* @filename: name of file* @letters: the number of letters it should read and print
* @letters: the number of letters it should read and print
* Return: returns the actual number of letters it should read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, letters);

	w = write(STDOUT_FILENO, text, let);

	close(file);

	return (w);
}
