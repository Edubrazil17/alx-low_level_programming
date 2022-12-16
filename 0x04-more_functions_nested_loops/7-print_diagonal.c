#include "main.h"

/**
 * print_diagonal - prints diagonal based
 * @n: user input
 */
void print_diagonal(int n)
{
	int iter;

	int space;

	if (n <= 0)
	{

		_putchar(10);

		return;
	}

	for (iter = 0; iter < n; iter++)
	{

		space = 0;

		while (space < iter)

		{

			_putchar(' ');

			space++;

		}

		_putchar('\\');

		_putchar(10);

	}

}
