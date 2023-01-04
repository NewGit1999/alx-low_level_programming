#include "main.h"
/**
 * _strlen_recursion - prints the length of string
 * @s: string asked
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
