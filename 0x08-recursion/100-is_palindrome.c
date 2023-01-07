#include "main.h"
#include "2-strlen_recursion.c"

/**
 * helper - palindrome
 * @x: pointer to a char
 * @y: user input
 * Return: returns the respective values
 */

int helper(char *x, int y)
{
	if (y < 1)
		return (1);

	if (*x == *(x + y))
		return (helper(x + 1, y - 2));

	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (helper(s, len - 1));
}
