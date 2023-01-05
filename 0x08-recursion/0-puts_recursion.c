 #include "main.h"

/** main - entry point
 *
 *Return: Always 0
 *
 */

void _puts_recursion(char *s)

{
	if (*s == '\0')

	{
		return;
	}
	_putchar(*s);

	_puts_recursion(s + 1);

	_putchar('\n');


}

int main(void)
{
	_puts_recursion("hello world");

	return (0);
}
