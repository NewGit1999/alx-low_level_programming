#include "main.h"
/**
 * append_text_to_file - appends text at the end of the file
 * @filename: name of the file
 * @text_content: string
 *
 * Return: conditions of result
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, s = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (s = 0; text_content[s];)
			s++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, s);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
