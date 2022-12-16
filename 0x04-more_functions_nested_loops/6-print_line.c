#include "main.h"

/**
* print_line - prints underscores based on user input
* @n: user input
*/

void print_line(int n)

{

		int iter;


		if (n <= 0)

		{

			_putchar(10);

				return;

		}

		for (iter = 0; iter < n; iter++)

		{

			_putchar('_');
		}

		_putchar(10);

}
