#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string asked
 */
void print_rev(char *s)
{
	int length = 0, index;

	while (*s++)
		length++;

	for (index = length - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
