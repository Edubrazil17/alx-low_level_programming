#include "main.h"

/**
* _isdigit - checks the the input if its a digit or not.
* @c: input from user
* Return: Always 1 or 0.
*/

int _isdigit(int c)

{

	if ((c >= 48) && (c <= 57))

		return (1);


	return (0);

}
