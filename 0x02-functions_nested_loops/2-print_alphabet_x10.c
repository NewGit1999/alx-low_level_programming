#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int ct = 0;
	char let;

	while (ct++ <= 9)
	{
		for (let = 'a'; let <= 'z'; let++)
			_putchar(let);
		_putchar('\n');
	}
}
