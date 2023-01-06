#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: counter of arguments
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, a, b, prod;

	i = a = b = prod = 0;
	if (argc > 0)
	{
		while (i < argc)
		{
			if (argc == 3)
			{
				if (i == 1)
					a = atoi(argv[i]);
				else if (i == 2)
					b = atoi(arg[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			prod = (a * b);
			i++;
		}
		printf("%d\n", prod);
	}
	return (0);
}
