#include "main.h"
/**
 * main - print alphabets
 */
void print_alphabet(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
		_putchar(let);
	_putchar('\n');

}
