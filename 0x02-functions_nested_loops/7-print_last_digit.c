#include "main.h"

/**
* print_last_digit - this is the entry point of the program
* @n: its takes in chat
* Description: this function returns 1 or 0
* Return: 1 is true and 0 is false
*/

int print_last_digit(int n)

{

		int ld;


		ld = n % 10;



		if (ld < 0)

	{

		ld *= -1;

	}


		_putchar(ld + '0');


		return (ld);

}
