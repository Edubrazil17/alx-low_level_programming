#include "main.h"

/**
* print_sign - this is the entry point of the program
* @n: its takes in chat
* Description: this function returns 1 or 0
* Return: 1 is true and 0 is false
*/



int print_sign(int n)

{
	if (n > 0)

	{

		_putchar('+');

		return (1);

	} else if (n == 0)
	{
		_putchar('0');

		return (0);

	} else
	{


		_putchar('-');

		return (-1);

	}

}
