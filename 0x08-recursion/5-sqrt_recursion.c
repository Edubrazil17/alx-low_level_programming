#include "main.h"

/**
 * _sqrt - helper function
 * @x: user input
 * @y: controller
 * Return: returns the calculated squre root
 */

int _sqrt(int x, int y)
{
	if (x < 0)
		return (-1);

	if ((y * y) > x)
		return (-1);

	if ((y * y) == x)
		return (y);

	return (_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - entry level.
 * @n: user input
 * Return: Always returns the calculated pow
 */

int _sqrt_recursion(int n)
{
	int _root  = _sqrt(n, 1);

	return (_root);
}
