#include "main.h"
/**
 * _isupper - check the uppercase character
 * @c: the character asked
 * Return: 1 if it is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
