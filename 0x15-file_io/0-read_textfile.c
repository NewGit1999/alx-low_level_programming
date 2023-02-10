#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: pointer
 * @letters: number of letters it should read and print
 *
 * Return: conditions of result
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *A;

	if (filename == NULL)
		return (0);
	A = malloc(sizeof(char) * letters);
	if (A == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, A, letters);
	w = write(STDOUT_FILENO, A, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(A);
		return (0);
	}
	free(A);
	close(o);
	return (w);
}
