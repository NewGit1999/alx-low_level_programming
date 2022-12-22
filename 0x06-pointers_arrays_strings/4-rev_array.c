#include "main.h"
/**
 * reverse_array - reverses the content of array
 * @a: the array to reverse
 * @n: number of elements
 * Return: array reversed
 */
void reverse_array(int *a, int n)
{
	int c;
	int b;

	for (c = 0; c < n; c++)
	{
		n--;
		b = a[c];
		a[c] = a[n];
		a[n] = b;
	}
}
