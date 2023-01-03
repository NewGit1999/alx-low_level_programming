#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: first string
 * @needle: second string
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *b;

	while (*haystach != '\0')
	{
		a = haystack;
		b = needle;
		while (*b == haystack && *b != '\0' && *haystack != '\0')
		{
			haystack++;
			b++;
		}
		if (*b == '\0')
			return (a);
		haystack = a + 1;
	}
	return (NULL);
}
