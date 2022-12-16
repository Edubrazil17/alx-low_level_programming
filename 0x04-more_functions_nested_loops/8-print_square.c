#include "main.h"

/**
 * print_square - prints square based on user input
 * @size: user input
 */
void print_square(int size)
{

	int iter;

	int space;

	if (size <= 0)

	{

		_putchar(10);

		return;

	}

	for (iter = 0; iter < size; iter++)

	{

		space = 0;

		while (space < size)

		{

			_putchar('#');
			space++;

		}

		_putchar(10);

	}

}
