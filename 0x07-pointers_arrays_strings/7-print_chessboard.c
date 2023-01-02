#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: size of array
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int b = 0;
	int c;

	while (b < 8)
	{
		c = 0;
		while (c < 8)
		{
			_putchar(a[b][c]);
			if (c == 7)
				_putchar('\n');
			c++;
		}
		b++;
	}
}
