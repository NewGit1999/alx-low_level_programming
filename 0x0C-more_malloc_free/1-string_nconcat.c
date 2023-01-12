#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	*char cct;
	unsigned int L = n, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		L++;
	cct = malloc(sizeof(char) * (L + 1));
	if (cct == NULL)
		return (NULL);
	L = 0;
	for (i = 0; s1[i]; i++)
		cct[L++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		cct[L++] = s2[i];
	cct[L] = '\0';
	return (cct);
}
