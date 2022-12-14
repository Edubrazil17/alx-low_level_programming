#include "main.h"

/**
 * print_alphabet - Write a function that prints the alphabet,
 * in lowercase  * followed
 * by a new line
 * Description: this function prints the alphabets in lowercase
 */
void print_alphabet(void)

{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	{
		_putchar(alphabet);

		if (alphabet == 'z')

		{
			_putchar('\n');

		}

	}




}
