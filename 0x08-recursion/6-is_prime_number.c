#include "main.h"

/**
* primed - called by is_prime_number
* @x: user input
* @y: user input
* Return: returns respective value if primed
*/

int primed(int x, int y)
{
	if (y <= 1)
		return (1);

	else if ((x % y) == 0)
		return (0);

	return (primed(x, y - 1));
}

/**
*is_prime_number - entry level
*@n: user input
*Return: true if the number is prime
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (primed(n, n / 2));
}
