#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string asked
 */
void print_rev(char *s)
{
	int in;

	for (in = 0; s[i] != '0'; in++)

		for (in = in - 1; s[in] != '0'; in--)
			_putchar(s[in]);
	_putchar('\n');
}
