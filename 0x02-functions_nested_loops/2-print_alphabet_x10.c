#include "main.h"

/**
  * maim - Write a function that prints 10 times the alphabet, in lowercase,
  * followed by new line.
  *
  * Description: this function prints the alphabets in lowercase ten times
  */

void print_alphabet_x10(void)

{
	int a;
	int b;

	for (a = 0; a < 10; a++)

	{

		for (b = 'a'; b <= 'z'; b++)

		{

			_putchar(b);

			if (b == 'z')

			_putchar('\n');
		}
	}

}
