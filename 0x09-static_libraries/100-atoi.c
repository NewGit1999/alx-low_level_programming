#include "main.h"
/**
 * _atoi - converts a string
 * @s: the string asked
 *
 * Return: the string converted
 */
int _atoi(char *s)
{
	int a = 1;
	unsigned int b = 0;

	do {
		if (*s == '-')
			a *= -1;
		else if (*s >= '0' && *s <= '9')
			b = (b * 10) + (*s - '0');
		else if (b > 0)
			break;
	} while (*s++);
	return (a * b);
}
