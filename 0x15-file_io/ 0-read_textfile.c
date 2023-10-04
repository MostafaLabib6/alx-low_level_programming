#include "main.h"

/**
 * read_textfile - read a text file and prints it.
 * @filename: filename
 * @letters: number of latters
 * Return: the actual number of bytes the function
 * read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int r, o, w;
	char *buffer;

	if (filename ==NULL)
		return (0);

	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(filename, latters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(0);

	return (w);

}
