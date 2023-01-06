#include "main.h"
#include <stdio.h>
/**
 * main - prints the arguments passed
 * @argc: counter of arguments
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		argv = argv;
		printf("%d\n", argc - 1);
	}
	return (0);
}
