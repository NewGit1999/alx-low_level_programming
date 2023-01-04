#include "main.h"
/**
 * _pow_recursion - returns number with raised power
 * @x: first number
 * @y: second number
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
