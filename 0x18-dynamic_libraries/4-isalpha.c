#include "main.h"
/**
 * _isalpha - check the letter
 * @c: the character to check
 * Return: 1 if the character is a letter, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <=  'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
		return (0);
}
