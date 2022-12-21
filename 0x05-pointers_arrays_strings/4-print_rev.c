#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - entry level.
 * @s: input from user
 */

void print_rev(char *s)
{
	int iter;

	for (iter = _strlen(s) - 1; iter >= 0; iter--)
	{
		_putchar(s[iter]);
	}

	_putchar(10);
}
