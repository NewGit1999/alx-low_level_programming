#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
	int chif1, chif2;

	for (chif1 = 0; chif1 < 9; chif1++)
	{
		for (chif2 = chif1 + 1; chif2 < 10; chif2++)
		{
			putchar((chif1 % 10) + '0');
			putchar((chif2 % 10) + '0');
			if (chif1 == 8 && chif2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

