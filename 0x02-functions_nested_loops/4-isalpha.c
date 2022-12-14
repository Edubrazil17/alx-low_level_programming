#include "main.h"

/**
* _isalpha - this is the entry point of the program
*
* @input: its takes in chat
*
* Description: this function returns 1 or 0
*
* Return: 1 is true and 0 is false
*/

int _isalpha(int input)

{

	if ((input >= 65  && input <= 90) || (input >= 97 && input <= 122))

		{

		return (1);

		}


	return (0);

}
