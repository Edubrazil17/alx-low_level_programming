#include "main.h"

/**
 * _strlen - entry level.
 * @s: input from user
 *
 * Return: Always integer returned
 */

int _strlen(char *s)
{
	int iter;

	for (iter = 0; s[iter] != '\0';)
	{
		iter++;
	}

	return (iter);
}
