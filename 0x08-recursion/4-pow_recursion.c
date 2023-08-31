#include "main.h"

/**
 * _pow_recursion - function declaration
 * @x: integer to power
 * @y: power integer
 * Return: integer value
 */

int _pow_recursion(int x, int y)
{
	int c;

	if (y < 0)
		return (-1);
	else if (y > 0)
		return (c = x * _pow_recursion(x, y - 1));
	else
		return (1);
}

