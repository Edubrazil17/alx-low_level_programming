#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - entry level.
 * @str: input from user
 */

void puts_half(char *str)
{
	int iter;

	if (_strlen(str) % 2 == 0)
		iter = _strlen(str) / 2;
	else
		iter = ((_strlen(str) - 1) / 2) + 1;

	for (; iter < _strlen(str); iter++)
	{
		_putchar(str[iter]);
	}

	_putchar(10);
}
