#include "main.h"
/**
 * create_file - creates a function that create a file
 * @filename: name of th file to create
 * @text_content: pointer to string
 *
 * Return: conditions of result
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, s = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (s = 0; text_content[s];)
			s++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, s);

	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
