#include "main.h"

/**
* more_numbers - print 10 times numbers since 0 up to 9
* Return: The numbers 10 times since 0 up to 9
*/

void more_numbers(void)
{

	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 9)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0')
	}
	_putchar('\n');
	}
}
