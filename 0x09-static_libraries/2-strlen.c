#include "main.h"
/**
 * _strlen - gives the length of string
 * @s: the sting asked
 *
 * Return: the length of string
 */
int _strlen(char *s)
{
	int sr = 0;
		while (*s++)
			sr++;
	return (sr);
}
