#include "main.h"

/**
 * factorial - entry level.
 * @n: user input
 * Return: Always returns the calculated factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (n * factorial(n - 1));
}
