#include "main.h"

/**
 * _pow_recursion - entry level.
 * @x: user input
 * @y: user input
 * Return: Always returns the calculated pow
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
