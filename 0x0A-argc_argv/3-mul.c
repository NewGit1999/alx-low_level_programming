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
	int a, b, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	prod = a * b;
	printf("%d\n", prod);

	return (0);
}
