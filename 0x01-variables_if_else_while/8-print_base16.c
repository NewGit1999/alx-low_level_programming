#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
	int nb;
	char let;

	for (let = 'a'; let <= 'f'; let++)
		putchar(let);
	for (nb = 0; nb < 10; nb++)
		putchar((nb % 10) + '0');
	putchar('\n');
	return (0);
}
