#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments received
 * @argc: counter of arguments
 * @argv: arguments vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
