#include "main.h"
#include <stdio.h>
/**
 * main - writes its name
 * @argc: counter of arguments
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (argc == 1)
			printf("%s\n", argv[i]);
		else
			break;
	}
	return (0);
}
