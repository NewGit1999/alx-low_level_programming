#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string asked
 */
void print_rev(char *s)
{
	int l = 0, in;

	while (s[in++])
		l++;

	for (in = l - 1; in >= 0; in--)
		_putchar(s[in]);
	_putchar('\n');
}
