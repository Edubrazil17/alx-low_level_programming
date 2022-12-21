#include "main.h"

/**
 * _puts - entry level.
 * @str: input from user
 */

void _puts(char *str)
{
	int iter;

	for (iter = 0; str[iter] != '\0'; iter++)
	{
		_putchar(str[iter]);
	}

	_putchar(10);
}
