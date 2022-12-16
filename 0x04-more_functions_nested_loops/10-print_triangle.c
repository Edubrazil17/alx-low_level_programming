#include "main.h"

/**
 * print_triangle - prints triangle based on user input
 * @size: user input
 */

void print_triangle(int size)
{

	int iter;
	int space;
	int hash;

	if (size <= 0)

	{
		_putchar(10);

		return;

	}

	for (iter = 1; iter <= size; iter++)

	{

		space = 1;

		while (space <= (size - iter))

		{

			_putchar(' ');

			space++;

		}

		hash = 1;

		while (hash <= iter)

		{

			_putchar('#');

			hash++;

		}

		_putchar(10);

	}

}
