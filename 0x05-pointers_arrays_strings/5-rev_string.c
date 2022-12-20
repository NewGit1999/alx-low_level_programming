#include "main.h"
/**
 * rev_string - reverse string
 * @s: the string asked
 */
void rev_string(char *s)
{
	int length = 0, index = 0;
	char m;

	while (s[index++])
		length++;
	for (index = length - 1; index >= length / 2; index++)
	{
		m = s[index];
		s[index] = s[length - index - 1];
		s[length - index - 1] = m;
	}
}

