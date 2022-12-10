#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
	int nb;
	char let;

	for (nb = 0; nb < 10; nb++)
		putchar((nb % 10) + '0');
	for (nb = 'a'; let <= 'f'; let++)
		putchar(let);
	putchar('\n');
	return (0);
}
