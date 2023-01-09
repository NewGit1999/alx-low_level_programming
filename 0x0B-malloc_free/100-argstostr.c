#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: counter of arguments
 * @av: argument vector
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	char *arr, *s;
	int a, b, cct;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			b++;
			cct++;
		}
		cct++;
	}
	cct += 1;
	arr = malloc(cct * sizeof(char));
	if (arr == NULL)
		return (NULL);
	s = arr;
	for (a = 0; a < ac; a++)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			*arr = av[a][b];
			b++;
			arr++;
		}
		*arr = '\n';
		arr++;
	}
	return (s);
}
