#include "main.h"
/**
 * _islower - checks the character
 * @c: character to check.
 * Return: 1 if it is lowercase, 0 then.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
