#include "main.h"

/**
 * _isdigit - checs if the character is a digit
 * @x: The number to be checked
 * Return: 1 for the digit character or 0 for any else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
