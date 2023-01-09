#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concates two strings
 * @s1: first string
 * @s2: second string
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *cct;
	int i, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		k++;
	cct = malloc(sizeof(char) * k);
	if (cct == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		cct[j++] = s1[i];
	for (i = 0; s2[i]; i++)
		cct[j++] = s2[i];
	return (cct);
}
