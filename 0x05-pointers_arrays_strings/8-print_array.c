#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array
 * @a: array of numbers
 * @n: number asked
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == 1)
			continue;
		printf(" , ");
	}
	printf("\n");
}
