#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string asked
 * @c: receiver
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
