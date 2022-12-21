#include "main.h"
/**
 * _strcat - concates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: the pointer resulted
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i]++)
		i++;
	for (i = 0; src[i]; i++)
		dest[j++] = src[i];
	return (dest);
}
