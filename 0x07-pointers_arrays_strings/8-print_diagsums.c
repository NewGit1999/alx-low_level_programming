#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals
 * @a: values in array
 * @size: square size
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int b = 0;
	int c = 0;
	int s1, s2;

	s1 = s2 = 0;
	while (b < (size * size))
	{
		c = *(a + b);
		s1 = s1 + c;
		b = b + size + 1;
	}
	b = size - 1;
	while (b < (size * size) - 1)
	{
		c = *(a + b);
		s2 = s2 + c;
		b = b + (size - 1);
	}
	printf("%d, %d\n", s1, s2);
}
