#include "main.h"

/**
 * main - Write a function that prints the alphabet, in lowercase, followed
 * by a new line
 *
 * Return: 0
 */
void print_alphabet(void)
{	
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	{
		_putchar(alphabet);

	}


	_putchar('\n');

}
