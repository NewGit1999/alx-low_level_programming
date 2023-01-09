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
	char *s;
	int a, b, c, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			size++;
	}
	s = malloc(sizeof(char) * size + 1);
	if (s == NULL)
		return (NULL);
	c = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			s[c++] = av[a][b];
		s[c++] = '\n';
	}
	s[size] = '\0';
	return (s);
}
