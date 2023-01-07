#include "main.h"

/**
 * _strlen_recursion - entry level.
 * @s: pointer to char
 * Return: Always returns the total number of character
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
