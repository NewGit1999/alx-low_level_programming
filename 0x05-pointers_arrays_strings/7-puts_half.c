#include "main.h"
/**
 * puts_half - prints the half of string
 * @str: string asked
 */
void puts_half(char *str)
{
	int index = 0, length = 0, m;

	while (str[index++])
		length++;

	if ((length % 2) == 0)
		m = length / 2;
	else
		m = (length + 1) / 2;
	for (index = m; index < length; index++)
		_putchar(str[index]);
	_putchar('\n');
}
