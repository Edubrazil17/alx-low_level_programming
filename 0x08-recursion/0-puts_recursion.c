 #include "main.h"

/** main - entry point
 *
 *Return: nothing
 *
 */

void _puts_recursion(char *s)

{
	if (*s != '\0')

	{

	_putchar(*s);

	_puts_recursion(s + 1);

	}

	_putchar('\n');


}
